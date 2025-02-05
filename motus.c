#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void regle_du_jeu(char mot[]);
/*indique les regle du jeu*/

char* mot_aleatoire(char* liste_de_mot[]);
/*choisi le mot à deviner pari une liste de mot*/

int len(char proposition[]);

int verif(char mot[],char proposition[],int taille);
/*verifie si le mot proposer est le bon*/
void indice_majuscule(char mot[],char proposition[],int taille,char indice[]);
/*indique si la lettre est au bonne endroit en majuscule*/
void indice_minuscule(char mot[],char proposition[],int taille,char indice[]);
/*indique si la lettre est dans le mot mais est pas au bonne endroit en minuscule */
void affiche_indice(char indice[]);

int main()
{
	char* liste_de_mots[]={"peignoir","chanter","fleur","oiseau","fable","loupe","jeter","humus","coeur","chien","orange","livre","voiture","laine","boire","rouge","voile","maman","chanter","poire","table"};
	int v=0,taille_proposition,nombre_essaies=0;
	
	char* mot1=mot_aleatoire(liste_de_mots);
	
	regle_du_jeu(mot1);
	
	int taille_mot_deviner=len(mot1);
	
	char proposition[taille_mot_deviner];
	char indice[taille_mot_deviner];
	
	while(v==0 && nombre_essaies!=7){
		scanf(" %s",&proposition);
		taille_proposition=len(proposition);
		
		if(taille_proposition>taille_mot_deviner){
			printf("il y a trop de caracter\n");
		}else{	
			v = verif(mot1,proposition,taille_mot_deviner);

			if(v==1){
				printf("\x1b[38;5;82m c'est le bon mot! Felicitations !!!\n");
			}else{
				
				indice_minuscule(mot1,proposition,taille_mot_deviner,indice);
				indice_majuscule(mot1,proposition,taille_mot_deviner,indice);
				affiche_indice(indice);
				printf("\n");
				printf("réessayer\n");
				printf("\n");	
			}
		}
		nombre_essaies=nombre_essaies+1;
	}
	
	if(nombre_essaies==7){
		printf("domage le mot etait : %s \n",mot1);
	}
	
	return 0;
}

void regle_du_jeu(char mot[])
{
	printf("***********MOTUS***********\n");
	printf("Le but est de trouver le mot mystere mystère en un minimum de coups\n");
	printf("au fur et à mesure de vos essaie deux types indice vous serons donné\n");
	printf("1) si la lettre est au bon endroit dans le mots elle sera en majuscule\n");
	printf("2) si la lettre est dans le mot mais pas au bonne endroit elle sera en minuscule\n");
	printf("sauf si il est deja au bonne endroit\n");
	printf("vous pouvez commencer :)\n");
	printf("\n");
	printf("voici la premier lettre : %c \n",mot[0]);
	printf("\n");
}

char* mot_aleatoire(char* liste_de_mot[])
{	
	int i;
	srand(time(NULL));
	
	i=rand()%21;
	
	return liste_de_mot[i];
	
}

int verif(char mot[],char proposition[],int taille)
{	
	int i,v;
	
	for(i = 0;i < taille;i = i+1){
	
		if(mot[i] == proposition[i]){
			v = 1; 
		}else{
			v = 0;
			return v;
		}
	}
	return v;
}

int len(char proposition[])
{
	int i=0;
	
	for(i=0;proposition[i] != '\0';i=i+1);
	
	return i;
}

void indice_majuscule(char mot[],char proposition[],int taille,char indice[])
{
	int i;
	
	for(i = 0;i < taille;i = i+1){
		if(mot[i] == proposition[i]){
			indice[i]=proposition[i]-'a'+'A';
		}
	}
}

void indice_minuscule(char mot[],char proposition[],int taille,char indice[])
{
	
	int i,y,z;
	
	for(i = 0;i < taille;i = i+1){
		z = 0;
		for(y=0;y<taille;y=y+1){
			if(mot[y]==proposition[i]){
				z=1;
				break;
			}
		}
		
		if(z==1){
			indice[i]=proposition[i];
		}else{
			indice[i]='_';
		}
		
	}
}

void affiche_indice(char indice[]){
	int i;
	
	for(i=0;indice[i]!='\0';i++){
		printf("%c",indice[i]);
	}
}
