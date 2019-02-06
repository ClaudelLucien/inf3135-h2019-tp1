
#include <stdio.h>



void recherche(int a, int b);
//note : argc compte les arguments
//le premier est toujours l'executable
int main(int argc, char *argv[]) {

FILE* fichier = NULL;

fichier = fopen("data.txt", "r+");
int tableau[2] = {0};
int borneInf;
int borneSup; 
if (fichier != NULL)

    {
	fscanf(fichier, "%d %d", &tableau[0], &tableau[1]);
	borneInf= tableau[0];
	borneSup= tableau[1];
	fclose(fichier); 

    }

    else

    {

     printf("Impossible d'ouvrir le fichier test.txt");

    }




recherche(borneInf,borneSup);

return 0;
}


void recherche(int a, int b){

int i = 0;
int j = 0;
int somme =0;
FILE* sortie = NULL;
sortie = fopen("sortie.txt","w+");
for(i=a; i<=b; i++){
somme=0;
	for(j=1; j<i; j++){
		if(i%j==0){
		somme=somme+j;
		
		}
	}
if(somme==i){
fprintf(sortie,"%d\n",i);

}

}
fclose(sortie);
}
