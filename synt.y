%{
#include "stdio.h"
#include "string.h"
#include "stdlib.h" 

char sauv[20];
char sauv2[20];
char sauv3[20];
char sauvcst[20];
char sauvcst1[20];
char sauv4[20];
char sauv5[20]="";
char sauv6[20];
char sauv7[20]="";
char sauv8[20]="";
int var=0;

char op4[20];

int qc=0;

char tmp [20];
char tmp2 [20];
char op [20];
char op1 [20];
char op2[20];
char op3[20];
char opt[20];

int sauv_deb=0 , sauv_bz=0;
int	ligne = 1;  

%}
%union {
int     entier;
char*   chaine;
}

%token  
dolare   mc_include   mc_inout   mc_arithme   red_ouv    red_ferm       //bibliotheque
 mc_algo   mc_deb  mc_fin                                            //corps algorithme
 mc_var   mc_const   mc_Tableau   <chaine>mc_entier  <chaine>mc_reel   <chaine>mc_chaine                  //variable
 <chaine>idf   mc_ecrire  mc_lire cstReel <entier>cstEntierNegatif <entier>cstEntierPositif 
 pvg   vg  aff   dp    croch_ferm   croch_ouv   parent_ouv   parent_ferm  cstChaine  // symbole
 mc_fonction  mc_return  plus  mult  sust  divi  egal diff supEgal infEgal
 mc_faire mc_fait mc_tanque 


  
%%
S: SUIT_BIBL mc_algo idf  mc_var LIST_FONC SUIT_DEC CORPS{printf("syntaxe correcte");          	            YYACCEPT;}
;
SUIT_BIBL: BIBL SUIT_BIBL| BIBL | ;  
    BIBL :dolare mc_include red_ouv TYPE_BIBL red_ferm;
         TYPE_BIBL : mc_inout { inserelb("inout");}
					| mc_arithme { inserelb("arithme");}
					;

SUIT_DEC : DEC SUIT_DEC | DEC | ;

       DEC: DEC_VAR_SIMPLE {insertCST("non");}
			| DEC_CONST {insertCST("oui");}
			| DEC_TABLEAU {insertCST("non");};
			
			DEC_VAR_SIMPLE : LISTE_IDF dp TYPE_VAR pvg;
			DEC_CONST : mc_const LISTE_IDF dp TYPE_VAR pvg  ;
			DEC_TABLEAU : mc_Tableau idf croch_ouv cstEntierPositif croch_ferm dp TYPE_VAR pvg {inserelp($2);insererTy(sauvcst,$4);};
			
			CASE_TABLEAU : idf croch_ouv cstEntierPositif croch_ferm {if (strcmp(sauv4,"")==0) {if (rechercheType($1)==0) printf("erreur semantique : %s est non declaree a la ligne %d \n",$1,ligne);}
			                                                           else {if ((recherchevarfonc(sauv4,$1)==-1)&&(recherchevarpara(sauv4,$1)==-1)) printf("erreur semantique : %s est non declaree a la ligne %d \n",$1,ligne);}
			                                                           if ($3>recherchTaille($1)) printf("erreur semantique : depassement de la taille du tableau %s a la ligne %d\n",$1,ligne);}
			               | idf croch_ouv idf croch_ferm {if (strcmp(sauv4,"")==0) {if (rechercheType($1)==0) printf("erreur semantique : %s est non declaree a la ligne %d \n",$1,ligne);
						                                                              if (rechercheType($3)==0) printf("erreur semantique : %s est non declaree a la ligne %d \n",$3,ligne);}
						                                     else {if ((recherchevarfonc(sauv4,$1)==-1)&&(recherchevarpara(sauv4,$1)==-1)) printf("erreur semantique : %s est non declaree a la ligne %d \n",$1,ligne);
						               					     if ((recherchevarfonc(sauv4,$3)==-1)&&(recherchevarpara(sauv4,$3)==-1)) printf("erreur semantique : %s est non declaree a la ligne %d \n",$1,ligne);}}; 
			

	
LISTE_IDF: idf vg LISTE_IDF {inserelp($1);}
			|idf {inserelp($1);}
			;  
			
LISTE_IDF_ECRIRE: idf vg LISTE_IDF_ECRIRE {if(strcmp(sauv5,"")!=0) insertlc($1);if (strcmp(sauv4,"")==0) {if (rechercheType($1)==0) printf("erreur semantique : %s est non declaree a la ligne %d \n",$1,ligne);}
                      else {if ((recherchevarfonc(sauv4,$1)==-1)&&(recherchevarpara(sauv4,$1)==-1)) printf("erreur semantique : %s est non declaree a la ligne %d \n",$1,ligne);}}
			|idf {if(strcmp(sauv5,"")!=0) insertlc($1); if (strcmp(sauv4,"")==0) {if (rechercheType($1)==0) printf("erreur semantique : %s est non declaree a la ligne %d \n",$1,ligne);}
			        else {if ((recherchevarfonc(sauv4,$1)==-1)&&(recherchevarpara(sauv4,$1)==-1)) printf("erreur semantique : %s est non declaree a la ligne %d \n",$1,ligne);}}
			;  

			
TYPE_VAR : mc_entier    { insererTy("entier",-1); strcpy(sauvcst,"entier"); }
	    	| mc_reel     { insererTy("reel",-1); strcpy(sauvcst,"reel");}
		    | mc_chaine  { insererTy("chaine",-1); strcpy(sauvcst,"chaine");}
			;


CORPS: mc_deb LISTE_INST  mc_fin;
	LISTE_INST: INST LISTE_INST |INST| ;
		INST: AFFECTATION { if (recherchebibl("arithme")==-1) printf("erreur semantique : absence de la declaration de la bibliotheque Arithme a ligne %d \n",ligne);}
			| ECRIRE { if (recherchebibl("inout")==-1) printf("erreur semantique : absence de la declaration de la bibliotheque InOut a ligne %d \n",ligne);}
			| LIRE  { if (recherchebibl("inout")==-1) printf("erreur semantique : absence de la declaration de la bibliotheque InOut a ligne %d \n",ligne);}
			|BOUCLE 
			| RETURN 
			| APPEL_FONC ;
			AFFECTATION: IDF_AFFEC aff SUIT_OPERATION pvg {if (strcmp(sauv4,"")==0) 
			                                             {if (rechercheType(sauv7)==0) printf("erreur semantique : %s est non declaree a la ligne %d \n",sauv7,ligne);}
													else {if ((recherchevarfonc(sauv4,sauv7)==-1)&&(recherchevarpara(sauv4,sauv7)==-1)) printf("erreur semantique : %s est non declaree a la ligne %d \n",sauv7,ligne);}
			                                              if (rechconst(sauv7)==0) printf("erreur semantique : modification d'une valeur constante a la ligne %d\n",ligne); 
			                                        if(strcmp(sauv6,"boucle")==0) quadr("=","temp_operation","vide",sauv7);
													checkcompatibilite();strcpy(sauv7,"");} 
						|CASE_TABLEAU aff SUIT_OPERATION pvg ;

				IDF_AFFEC:idf { strcpy(sauv7,$1);insertlcp(sauv7); strcpy(op4,$1);};
				SUIT_OPERATION: OPERATION | OPERATION OPERATEUR SUIT_OPERATION |OPERAND ;

				OPERATION : AA OPERATEUR OPERAND  { strcpy(op2,op3); if (strcmp(sauv,"divi")==0) {if(strcmp(sauv2,"int")==0) {if (strcmp(sauv3,"0")==0) {printf(" division par 0 a la ligne %d \n", ligne); strcpy(sauv,""); strcpy(sauv2,""); strcpy(sauv3,""); }
																 } }   if (strcmp(sauv8,"")!=0) insertlcp(sauv8);   
                                   quadr(opt,op1,op2,"temp_operation");
								   };

                    AA:OPERAND {strcpy(op1,op3);};								   
					 OPERATEUR : plus {strcpy(opt,"+");}
								| mult {strcpy(opt,"*");}
								| sust {strcpy(opt,"-");}
								|divi  {strcpy(sauv,"divi");strcpy(opt,"/");};
					 OPERAND: idf {if (strcmp(sauv7,"")!=0) strcpy(sauv8,$1); strcpy(op3,$1); if (strcmp(sauv4,"")==0) {if (rechercheType($1)==0) printf("erreur semantique : %s est non declaree a la ligne %d \n",$1,ligne);}
					                 else {if ((recherchevarfonc(sauv4,$1)==-1)&&(recherchevarpara(sauv4,$1)==-1)) printf("erreur semantique : %s est non declaree a la ligne %d \n",$1,ligne);}}
							| P_M CST_ENTIER {  strcpy(sauv2,"int"); sprintf(tmp2,"%d",sauv_deb);}		
							| P_M cstReel {sprintf(op3,"%d",$2); }
							|cstChaine {sprintf(op3,"%d",$1);}
							| CASE_TABLEAU 
							|APPEL_FONC2 ;
					 P_M : plus | sust | ;
					 
			BOUCLE : A_WHILE LISTE_INST mc_fait{
			                                sprintf(tmp2,"%d",sauv_deb);
											quadr("BR",tmp2,"vide", "vide");
											sprintf(tmp,"%d",qc); 
											 ajour_quad(sauv_bz,1,tmp);
											};
			A_WHILE :A_COND COND parent_ferm mc_faire{
											sauv_bz=qc;								
											quadr(op, "",op1, op2);
                                            strcpy(sauv6,"boucle");											
			                               };
					COND : A_OPT OPERATEUR_LOGIQUE OPERAND  {strcpy(op2,op3);};
                           A_OPT : OPERAND {strcpy(op1,op3);};				
					OPERATEUR_LOGIQUE : egal {strcpy(op,"BNE");}
										| supEgal {strcpy(op,"BL");}
										| diff {strcpy(op,"BE");}
										| infEgal {strcpy(op,"BLE");}
										| red_ferm {strcpy(op,"BLE");}
										| red_ouv{strcpy(op,"BGE");};
			A_COND : mc_tanque parent_ouv { sauv_deb=qc;}
			;
			
					
			ECRIRE : mc_ecrire parent_ouv cstChaine parent_ferm  pvg 
					|mc_ecrire parent_ouv cstChaine vg LISTE_IDF_ECRIRE parent_ferm pvg 
					|mc_ecrire parent_ouv LISTE_IDF_ECRIRE parent_ferm pvg ;
					
            LIRE : mc_lire parent_ouv LISTE_LIRE parent_ferm pvg ;
					LISTE_LIRE: idf vg LISTE_LIRE
					| idf  {if (strcmp(sauv4,"")==0) {if (rechercheType($1)==0) printf("erreur semantique : %s est non declaree a la ligne %d \n",$1,ligne);}
					         else {if ((recherchevarfonc(sauv4,$1)==-1)&&(recherchevarpara(sauv4,$1)==-1)) printf("erreur semantique : %s est non declaree a la ligne %d \n",$1,ligne);}}
					| CASE_TABLEAU | CASE_TABLEAU vg LISTE_LIRE;
						
			RETURN :  mc_return OPERAND pvg {comparType(sauv4,op4)};
			APPEL_FONC : IDF parent_ouv LISTE_IDF_ECRIRE parent_ferm pvg {var=checkcallfonc(sauv5); strcpy(sauv5,"");};
			IDF :idf { strcpy(sauv5,$1);} ;
			
			APPEL_FONC2 : IDF parent_ouv LISTE_IDF_ECRIRE parent_ferm {var=checkcallfonc(sauv5); strcpy(sauv5,"");};
			
			
			
CST_ENTIER : cstEntierNegatif { if ($1==0) strcpy(sauv3,"0"); sprintf(op3,"%d",$1);}
             | cstEntierPositif {if ($1==0) strcpy(sauv3,"0"); sprintf(op3,"%d",$1);}
;

CORPS_FONC : mc_deb LISTE_INST mc_fin  ;
             

LIST_FONC :  FONC | FONC FONC |  ;
	FONC : mc_fonction IDF_FONC parent_ouv LIST_PARAMETRE parent_ferm dp mc_entier_FONC mc_var SUIT_DEC_FONC CORPS_FONC {insererFonc(sauv4);strcpy(sauv4,"");}
	|mc_fonction IDF_FONC parent_ouv LIST_PARAMETRE parent_ferm dp mc_reel_FONC mc_var SUIT_DEC_FONC CORPS_FONC {insererFonc(sauv4);strcpy(sauv4,"");}
	|mc_fonction IDF_FONC parent_ouv LIST_PARAMETRE parent_ferm dp mc_chaine_FONC mc_var SUIT_DEC_FONC CORPS_FONC {insererFonc(sauv4);strcpy(sauv4,"");} ;
        IDF_FONC : idf {strcpy(sauv4,$1);};
		LIST_PARAMETRE : PARAMETRE | PARAMETRE vg LIST_PARAMETRE | ;
			PARAMETRE : idf dp TYPE_VAR_FONC  {insertpara($1,sauvcst1);};

		
			mc_entier_FONC : mc_entier {insertFonc(sauv4,"entier");insertparafonc(sauv4);};
            mc_reel_FONC : mc_reel {insertFonc(sauv4,"reel");insertparafonc(sauv4);};
            mc_chaine_FONC : mc_chaine {insertFonc(sauv4,"chaine");insertparafonc(sauv4);};

SUIT_DEC_FONC : DEC_FONC SUIT_DEC_FONC | DEC_FONC | ;
       DEC_FONC: LISTE_IDF_FONC dp TYPE_VAR_FONC pvg; 
			| mc_const LISTE_IDF_FONC dp TYPE_VAR_FONC pvg  
			;
			
			
			
			TYPE_VAR_FONC : mc_entier    { insertlv(sauv4,"entier") ;strcpy(sauvcst1,"entier"); }
	    	| mc_reel     { insertlv(sauv4,"reel") ;strcpy(sauvcst1,"reel");}
		    | mc_chaine  { insertlv(sauv4,"chaine") ; strcpy(sauvcst1,"chaine");}
			;
			 
			

	
LISTE_IDF_FONC: idf vg LISTE_IDF_FONC {inserelpf($1);}
			|idf {inserelpf($1);}
			;  
	
			
%%

main () 
{
yyparse();
Afficher();
Afficherfonc();
afficher_qdr();

} 
yywrap()
{}

incrementer() 
{
  ligne++;
}


