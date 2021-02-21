
%{
#include "synt.tab.h"
#include "pgm.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int nb_ligne=1;
extern YYSTYPE yylval;

/*ENREGISTREMENT D'UN SYMBOLES*/
typedef struct {
		char NomEntite[20];
		char CodeEntite[20];
		char TypeValeur[20];
		char varCst[20];
		int taille;
		char fonc[20];
	} type_TS;

typedef enum {   
		false,
		true
	}Bool;
/*ENREGISTREMENT DE LA LISTE lp QUI CONTIENT L'ENTITE */	
typedef struct elem_para{
	char NomEntite[20];
    struct elem_para *next;
    }elem_para, *Listp;
Listp lp;
Listp lpf=NULL;

/*ENREGISTREMENT DES LISTE lpe,lpf QUI CONTIENT L'ENTITE ET LE TYPE */	
typedef struct para_ent{
	char NomEntite[20];
	char Type[20];
	struct para_ent *next;
}para_ent , *ListEnt;

ListEnt lpe=NULL;
ListEnt lv=NULL;
ListEnt lc=NULL;
ListEnt lcp=NULL;

/*ENREGISTREMENT DE LA LISTE DES FONCTION  */	
typedef struct elem_fonc{
  char NomFonc[20];
  para_ent *paraent ;
  char retoure[20];
  para_ent *vardec;
  struct elem_fonc *next;
}elem_fonc , *ListFonc;

ListFonc lf;

/*ENREGISTREMENT TABLE DES SYMBOLES*/
typedef struct ListElement {
		type_TS value;
		struct ListElement *next;
	}ListElement, *List;
List li;

/*TABLEAU DES BIBLIOTHEQUES*/
typedef struct
 {char NomEntite[20];
 } TypeBIBL;
 TypeBIBL lb[2]; 


int CpLB=0;


/*INITIALISER LISTE*/
	List new_list(void) {
	return NULL;	}
	
/*VERIFICATION SI LA TABLE DES SYMBOLES EST VIDE */	
	Bool is_empty_list() {
	if(li == NULL)
		return true;
	return false;
    }
/*VERIFICATION SI lp ( LISTE VARIABLE TEMPORAIRE DE PROGRAMME) EST VIDE */	
	Bool is_empty_listp()
	{	if(lp == NULL)
		return true;
	return false;
	}
	
/*AFFICHAGE TABLE DES SYMBOLES*/
	void Afficher() {
	if(is_empty_list())
	{	printf("Rien a afficher, la Liste est vide.\n");
		return;
	}
    printf("\n/***********************Table des symboles *************************/\n");
	printf("________________________________________________________________________________________\n");
	printf("\t| NomEntite |  CodeEntite   | TypeValeur   | Constante | Taille    | Fonction  | \n");
	printf("________________________________________________________________________________________\n");
	while(li != NULL)
	{	printf("\t|%10s |%12s   |  %8s    |  %8s |%8d   | %8s  |  \n",li->value.NomEntite,li->value.CodeEntite,li->value.TypeValeur,li->value.varCst,li->value.taille,li->value.fonc);
		li = li->next;
	}
	printf("\n");
	}
	
/*RECHERCHER SI UNE ENTITE FIGURE DANS LA TABLE DES SYMBOLE ( POUR NE PAS INSERER DEUX FOIS) */
	int recherche(char entite[]) {
	List mylist = new_list();
	mylist=li;
	while(mylist != NULL) {
		if (strcmp(entite,mylist->value.NomEntite)==0) return 1;
		mylist = mylist->next;
		}
	return -1;
	}
	
/*FONCTION QUI INSERT LES VARIABLE DU PROGRAMME PRINCIPALE DANS UNE LISTE lp*/
	void inserelp(char entite[])
	{elem_para *element;
	element = malloc(sizeof(*element));
	if(element == NULL)
	{fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
		exit(EXIT_FAILURE);
	}
	strcpy(element->NomEntite,entite);
	element->next = NULL;
	if(is_empty_listp())
		lp=element;
	else {	 elem_para *temp;
			temp = lp;
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = element;}
	}

/*INSERER LES VARIABLE DECLAREES DANS UNE FONCTION DANS UNE LISTE lpf*/	
	void inserelpf(char entite[])
	{elem_para *element;
	element = malloc(sizeof(*element));
	if(element == NULL)
	{fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
		exit(EXIT_FAILURE);
	}
	strcpy(element->NomEntite,entite);
	element->next = NULL;
	if(lpf==NULL)
		lpf=element;
	else {	 elem_para *temp;
			temp = lpf;
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = element;}
	}
	
/*INSERER L'IDF , SON CODE ET LA TAILLE A 0 (VARIABLE NON DECLAREE) DANS LA TABLE DES SYMBOLE */
	void inserer(char entite[], char code[]) {
	if ( recherche(entite)==-1)
	{	ListElement *element;
		element = malloc(sizeof(*element));
		if(element == NULL)
		{	fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
			exit(EXIT_FAILURE);
		}
	strcpy(element->value.NomEntite,entite);
    strcpy(element->value.CodeEntite,code);
	 strcpy(element->value.TypeValeur," ");
	  strcpy(element->value.varCst," ");
	  element->value.taille=0;
	  strcpy(element->value.fonc," ");
	element->next = NULL;
	if(is_empty_list(li))
		li=element;
	else{ListElement *temp;
	temp = li;

	while(temp->next != NULL)
		temp = temp->next;

	temp->next = element;}}
	}
	
/*EFFACE LA LISTE DE VARIABLE DECLAREES */
	void pop_front_listp()
	{	elem_para *element;
	element = malloc(sizeof(*element));
	if(element == NULL)
	{		fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
			exit(EXIT_FAILURE);
	}
	if(is_empty_listp())
		lp=NULL;
	else{element = lp->next;
	free(lp);
	lp = NULL;}
	}
	
/*FONCTION QUI EFFACE LA LISTE lpf (LISTE DE VARIABLE DE FONCTION)*/
	void pop_front_listlpf()
	{	elem_para *element;
	element = malloc(sizeof(*element));
	if(element == NULL)
	{		fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
			exit(EXIT_FAILURE);
	}
	if(lpe==NULL)
		lpf=NULL;
	else{element = lpf->next;
	free(lpf);
	lpf = NULL;}
	}
	
	/*void pop_front_listlpe()
	{	para_ent *element;
	element = malloc(sizeof(*element));
	if(element == NULL)
	{		fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
			exit(EXIT_FAILURE);
	}
	if(lpe==NULL)
		lpe=NULL;
	else{element = lpe->next;
	free(lpe);
	lpe = NULL;}
	}*/	
	
/*INSERTION DANS LA TABLE DES SYMBOLE , DU TYPE ET DE LA TAILLE EN ENTREE POUR LES ENTITE DE LA LISTE lp (LISTE VARIABLE DECLAREES A LA FOIS)*/	
	void insererTy(char typeE[],int t){

	Listp p=NULL;
	p=lp;
	while(p != NULL) {
            List mylist = new_list();
	        mylist=li;
	  while(mylist != NULL) {
		if (strcmp(p->NomEntite,mylist->value.NomEntite)==0) {
		     if(strcmp(mylist->value.TypeValeur," ")==0) {
			 strcpy(mylist->value.TypeValeur,typeE);
			 mylist->value.taille=t;  } 
			 else { printf("erreur Semantique: double declation de %s, a la ligne %d\n",mylist->value.NomEntite , nb_ligne+1);}
			  strcpy(mylist->value.varCst,"non");			  
			}
		mylist = mylist->next;
		}
		p=p->next;
	}
	if(is_empty_list())
		lp=NULL;}
		
/*INSERT OUI POUR LES IDF QUI SONT DES NOM DE FONCTION*/	
	void insererFonc(char entite[])
	{
	List mylist = new_list();
	mylist=li;
	while(mylist != NULL) {
		if (strcmp(entite,mylist->value.NomEntite)==0) strcpy(mylist->value.fonc,"oui");
		mylist = mylist->next;
		}}

/*INSERT varcst QUI EST SOIT OUI SOIT NON DANS LA COLONNE CONSTANTE POUR CHAQUE DECLARATION CONSTANTE SAUVEGARDEE DANS lp DANS LA TABLE DES SYMBOLE */
	void insertCST(char varcst[]){
	Listp p=NULL;
	p=lp;
	while(p != NULL) {
            List mylist = new_list();
	        mylist=li;
	  while(mylist != NULL) {
		if (strcmp(p->NomEntite,mylist->value.NomEntite)==0) {
			  strcpy(mylist->value.varCst,varcst);
			}
		mylist = mylist->next;
		}
		p=p->next;
	}
	if(is_empty_list())
		lp=NULL;

	while(lp != NULL)
		pop_front_listp();
	}
/*FONCTION QUI RETOURN: 0 SI ENTITE EST CONSTANTE , 1 SINON */
	int rechconst(char entite[]){
        List mylist = new_list();
	    mylist=li;
	  while(mylist != NULL) {
		if (strcmp(mylist->value.NomEntite,entite)==0) {
			  if (strcmp(mylist->value.varCst,"oui")==0) return 0;
			  else return 1;
			}
		mylist = mylist->next;
		}}	

/*RECHERCHER SI UNE ENTITE A UN TYPE*/
int rechercheType(char entite[]) {
	List mylist = new_list();
	mylist=li;
	while(mylist != NULL) {
		if (strcmp(entite,mylist->value.NomEntite)==0) {
		    if(strcmp(mylist->value.TypeValeur," ")==0) return 0;
			}
		mylist = mylist->next;
		}
	return -1;
	}

    /*int doubleDeclaration(char entite[]){
	List mylist = new_list();
	mylist=li;
	if (rechercheType(entite)==0) return 0;
	return -1;
	}*/

/*RECHERCHER ET RETOURNER LA TAILLE D'UNE ENTITE DANS LA TABLE DES SYMBOLE*/
	int recherchTaille(char entite[]){
		 List mylist = new_list();
	    mylist=li;
	   while(mylist != NULL) {
		if (strcmp(mylist->value.NomEntite,entite)==0) return mylist->value.taille;
		mylist = mylist->next;
		}}

/*INSERTION D'UNE BIBLIOTHEQUE DANS LE TABLEAU BIBLIOTHEQUE*/	
	void inserelb(char entite[]){
		strcpy(lb[CpLB].NomEntite,entite); 
		CpLB++;}

/*RECHERCHER SI UNE BIBLIOTHEQUE ENTITE EST PRESENTE DANS LE TABLEAU DES BIBLIOTHEQUE*/ 
	int recherchebibl(char entite[])
	{
	int i=0;
	while(i<CpLB){
	if (strcmp(entite,lb[i].NomEntite)==0) return 1;
	i++;}

	return -1;}

/*INSERTION DU NOM D'UNE FONCTION ET DE SON TYPE DE RETOUR D'UNE FONCTION DANS LA LISTE DES FONCTION*/
	void insertFonc(char nomfonc[],char typereturn[])
	{if ( recherchefonc(nomfonc)==-1)
	{	elem_fonc *element;
		element = malloc(sizeof(*element));
		if(element == NULL)
		{	fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
			exit(EXIT_FAILURE);
		}
	strcpy(element->NomFonc,nomfonc);
    element->paraent=NULL;
	strcpy(element->retoure,typereturn);
	element->vardec=NULL;
	element->next = NULL;
	if(lf==NULL)
		lf=element;
	else{elem_fonc *temp;
	temp = lf;

	while(temp->next != NULL)
		temp = temp->next;

	temp->next = element;
	}}
	else{
		printf("fonction existe deja");
	}}

/*CREATION DE LA LISTE DE PARAMETRE D'UNE FONCTION lpe AVEC VERIFICATION DE DOUBLE DECLARATION*/
void insertpara(char entite[20],char type[20])
{   
	if(recherchevar(entite)==-1){
	para_ent *element;

	element = malloc(sizeof(*element));

	if(element == NULL)
	{
		fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
		exit(EXIT_FAILURE);
	}

	strcpy(element->NomEntite,entite);
	strcpy(element->Type,type);
	element->next = NULL;

	if(lpe == NULL)
		lpe=element;
    else{
	para_ent *temp;
	temp = lpe;

	while(temp->next != NULL)
		temp = temp->next;

	temp->next = element;

	}}
	else{
		printf("erreur Semantique: parametre deja existant : %s, à la ligne %d\n",entite , nb_ligne+1);
		}}

/* POINTER LA LISTE DE PARAMETRE CREE lpe PAR LE CHAMP PARAENT (QUI EST DANS LA LISTE FONCTION) DE LA FONCTION nomfonc*/
	void insertparafonc(char nomfonc[])
	{   ListFonc f=NULL;
	f=lf;
	while (f != NULL)
	{
		if(strcmp(nomfonc,f->NomFonc)==0){
			f->paraent =lpe;
		}
		f=f->next;
     }
	lpe=NULL;}

/*INSERTION DES VARIABLE DECLARER D'UNE FONCTION DANS UNE LISTE POINTEE PAR VARDEC ,AVEC VERIFICATION DE DOUBLE DECLARATION*/
	void insertlv(char nomfonc[],char type[])
	{
	ListFonc f;
	f=lf;

	while(f != NULL){
		if(strcmp(nomfonc,f->NomFonc)==0){
			lv=f->vardec;
	Listp p=NULL;
	p=lpf;
	while(p != NULL) {
            
        if(recherchevarfonc(nomfonc,p->NomEntite)==1) printf(" erreur semantique  : double declation de la variable %s a la ligne %d \n",p->NomEntite,nb_ligne);
	    else {if (recherchevarpara(nomfonc,p->NomEntite)==1) printf(" erreur semantique  : la variable %s a la ligne %d est declaree dans les parametre\n",p->NomEntite,nb_ligne);
		else {
		para_ent *element;
		element = malloc(sizeof(*element));
		if(element == NULL)
		{	fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
			exit(EXIT_FAILURE);
		}
	 strcpy(element->NomEntite,p->NomEntite);
	 strcpy(element->Type,type);
	  
	element->next = NULL;
	if(lv==NULL){
		lv=element;
	}

	else{para_ent *temp;
	temp = lv;

	while(temp->next != NULL)
		temp = temp->next;

	temp->next = element;
     }}}
     p=p->next;
     }
	f->vardec=lv;
	lv=NULL;
	} f=f->next;
	}

     while(lpf != NULL)
		pop_front_listlpf();}

/*void initlv(char nomfonc[]){
       ListFonc f;
     f=lf;
     while (f != NULL){
	if(strcmp(nomfonc , f->NomFonc)==0){
     		f->vardec=lv;
     		lv=NULL;}
     	f=f->next; }*/
 
 /*RECHERCHER SI UNE FONCTION EXIST*/
	int recherchefonc(char nomfonc[20]){
	ListFonc f = NULL;
	f=lf;
	while(f != NULL) {
		if (strcmp(nomfonc,f->NomFonc)==0) return 1;
		f = f->next;
		}
	return -1;}

/*FONCTION UTILISER DANS UNE FONCTION ELLE RECHERCHE UNE ENTITER DANS LA LISTE DE PARAMETRE lpe*/
	int recherchevar(char entite[]){
  ListEnt pe = NULL;
	pe=lpe;
	while(pe != NULL) {
		if (strcmp(entite,pe->NomEntite)==0) return 1;
		pe = pe->next;
		}
	return -1;}

/*RECHERCHER DANS LA LISTE DE PARAMETRE D'UNE FONCTION NOMFONC L'ENTITE*/
	int recherchevarpara(char nomfonc[],char entite[]){
  ListFonc f;
  f=lf;
  while(f != NULL){
  	if(strcmp(nomfonc,f->NomFonc)==0){
  ListEnt pe = NULL;
	pe=f->paraent;
	while(pe != NULL) {
		if (strcmp(entite,pe->NomEntite)==0) return 1;
		pe = pe->next;
		}
	
  }f=f->next;}
  return -1;}

/*RECHERCHER DANS LA LISTE DE VARIABLE D'UNE FONCTION NOMFONC L'ENTITE*/
	int recherchevarfonc( char nomfonc[],char entite[]){
   ListFonc f;
   f=lf;
  while(f != NULL){
  if(strcmp(nomfonc,f->NomFonc)==0){
	  ListEnt pe = NULL;
	   pe=f->vardec;
	   while(pe != NULL) {
		if (strcmp(entite,pe->NomEntite)==0) return 1;
		pe = pe->next;}
		}f=f->next;}
	return -1;}

 /*INSERTION DANS UNE LISTE LES PARAMETRE D'ENTREE A L'APPELE D'UNE FONCTION*/ 
	void insertlc(char entite[]){
     char type[20];
	para_ent *element;
	element = malloc(sizeof(*element));
	if(element == NULL)
	{fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
		exit(EXIT_FAILURE);
	}
	

     List mylist = new_list();
	mylist=li;
	while(mylist != NULL) {
		if (strcmp(entite,mylist->value.NomEntite)==0) {
		     strcpy(type,mylist->value.TypeValeur);
			}
		mylist = mylist->next;
		}
    strcpy(element->NomEntite,entite);
	strcpy(element->Type,type);
	element->next = NULL;
	if(lc==NULL)
		lc=element;
	else {	 para_ent *temp;
			temp = lc;
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = element;}}

/*VERIFICATION DES FONCTION*/
	int checkcallfonc(char nomfonc[])
	{

     ListFonc f;
     f=lf;
     ListEnt c=NULL;
     c=lc;
     lc=NULL;
   while(f != NULL){
   	if(strcmp(nomfonc,f->NomFonc)==0){

   		ListEnt pa=NULL;
   		pa=f->paraent;
   		while((c != NULL)&&(pa !=NULL)){
   			if(strcmp(c->Type,pa->Type)==0){
   				c=c->next;
   				pa=pa->next;
   			}
   			else {printf("erreur semantique : une erreur dans les parametre de l'appele de la fonction %s  ,a la ligne %d \n",nomfonc,nb_ligne);
   		           return 0;
   		       }
   		}

   		if((c == NULL)&&(pa ==NULL))  return 1;
   		else {printf("erreur semantique : une erreur dans les parametre de l'appele de la fonction %s  ,a la ligne %d \n",nomfonc,nb_ligne);
   		           return 0;
   		       }
   	}
   	f=f->next;
   }
   printf("erreur semantique : la fonction %s  ,a la ligne %d ne existe pas\n",nomfonc,nb_ligne);
   		           return 0;}

/*COMPARER LE TYPE DE RETOURE DE LA FONCTION AVEC LE RETURN*/
  void comparType(char nomfonc[],char op3[]){
  ListFonc f;
     f=lf;
	 while(f != NULL){
   	if(strcmp(nomfonc,f->NomFonc)==0){
   		
   			if(strcmp(f->retoure,op3)!=0)
   				 {printf("erreur semantique : le type de retour n'est pas compatible avec le type de retour de la fonction %s  ,a la ligne %d \n",nomfonc,nb_ligne);
   		          }
   	}
   	f=f->next;
   }
  }

void insertlcp(char entite[]){

	char type[20];
	para_ent *element;
	element = malloc(sizeof(*element));
	if(element == NULL)
	{fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
		exit(EXIT_FAILURE);
	}
	

     List mylist = new_list();
	mylist=li;
	while(mylist != NULL) {
		if (strcmp(entite,mylist->value.NomEntite)==0) {
		     strcpy(type,mylist->value.TypeValeur);
			}
		mylist = mylist->next;
		}
    strcpy(element->NomEntite,entite);
	strcpy(element->Type,type);
	element->next = NULL;
	if(lcp==NULL)
		lcp=element;
	else {	 para_ent *temp;
			temp = lcp;
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = element;}
}

void checkcompatibilite(){

	char type[20];
	ListEnt cp=NULL;
     cp=lcp;
     lcp=NULL;
     strcpy(type,cp->Type);
    
     cp=cp->next;

     while(cp !=NULL)
    {  // printf("         %s      \n",cp->Type);
     	if((strcmp(type,cp->Type)==0)&&(strcmp("",cp->Type)!=0)) cp=cp->next;
     	else
     	{
     		printf("erreur semantique : pas de compatibilite dans l affectation, a la ligne %d \n",nb_ligne);
     		cp=NULL;
     	}
     }
}



/*AFFICHAGE DES TABLE DE FONCTION*/
	void Afficherfonc() {
	if(lf==NULL)
	{	printf("Rien a afficher, la Liste est vide.\n");
		return;
	}
    printf("\n/***********************Table des symboles des fonctions  *************************/\n");
	printf("________________________________________________________________________________________\n");
	printf("________________________________________________________________________________________\n");
	while(lf != NULL)
	{	
        printf("\n/ la fonction : %s  /\n",lf->NomFonc);
	    printf("______________________________________\n");
       lpe=lf->paraent;
        
        printf("La liste des parametre \n ");
         printf("_______________________\n");
        
	    while(lpe != NULL ){
	    	printf(" |  %s  |  %s   |\n",lpe->NomEntite,lpe->Type);
	    	lpe= lpe->next;
	    }
	     printf("________________________\n");
       
        printf(" Le type de retoure  | %s   \n ",lf->retoure);
         printf("_________________________\n");
        printf(" La liste des variables   \n ");
         printf("__________________________\n");
        
        lv=lf->vardec;
	    while(lv != NULL ){
	    	printf("  |  %s  |  %s   |\n",lv->NomEntite,lv->Type);
	    	lv = lv->next;
	    }
		lf=lf->next;
	}
	printf("\n");
	}
%}
lettre [a-zA-Z]
chiffre [0-9]
IDF {lettre}({lettre}|{chiffre}|_)*
comnt "/*"([^*]*("*"+[^*/])*)*"*"+"/"
cstEntier [1-9]{chiffre}*|0
cstReel ([1-9]{chiffre}*|0)"."{chiffre}*[1-9]
chaine   \"[^"\n]*\"

%%  
include    return mc_include;
InOut      return mc_inout;
Arithme    return mc_arithme;
ALGORITHME return mc_algo;
VAR        return mc_var;
CONST      return mc_const;
TABLEAU    return mc_Tableau;
DEBUT      return mc_deb;
FIN        return mc_fin;
FONCTION   return mc_fonction;
entier     {yylval.chaine=strdup(yytext); return mc_entier;}
reel       {yylval.chaine=strdup(yytext); return mc_reel;}
chaine     {yylval.chaine=strdup(yytext); return mc_chaine;}
return     return mc_return;
ECRIRE     return mc_ecrire;
LIRE       return mc_lire ;
tanque     return mc_tanque;
Faire      return mc_faire;
Fait       return mc_fait;

"("    return parent_ouv;
")"    return parent_ferm;
":"    return dp;
"["    return croch_ouv;
"]"    return croch_ferm;
^"$$"  return dolare;
"<"    return red_ouv;
">"    return red_ferm;
":="   return aff;
"#"    return pvg;
"."    return vg;
"+"    return plus;
"-"    return sust;
"*"    return mult;
"/"    return divi;
"="    return egal;
"<="   return infEgal;
">="   return supEgal;
"!="   return diff;
    
    

{IDF}  {yylval.chaine=strdup(yytext); inserer(yytext,"idf");  if (yyleng <=12)  return idf;
      else printf ("erreur lexicale : idf trop long . ") ;}
{comnt} 
{cstEntier} {  yylval.entier=atoi(yytext); if ((atoi(yytext)>=(-32768))&&(atoi(yytext)<= 32767)) {if (atoi(yytext)>=0) { return cstEntierPositif;}
                                                                   else { return cstEntierNegatif;}}
			else printf("erreur lexicale: cstEntier erronée "); }

{cstReel} return cstReel ;
{chaine} return cstChaine;


[ \t] 

\n   {  incrementer(); nb_ligne++;   }
. {printf("erreur lexicale à la ligne %d \n",nb_ligne) ;}
