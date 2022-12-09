#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


int main()
{
FILE* fichier = NULL;

fichier = fopen("exo1.txt", "w");
if (fichier != NULL)
{
	fputs("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z. OMG J'ai reussi ?", fichier);
	fclose(fichier);
	printf("Votre dossier text contenant l'alphabet vient d'etre cree :)\n");
}
return 0;
}

