#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void closeFile(FILE* file)
{
	if (fclose(file) == 0)
	{
		printf("Fermeture reussie\n");
	}
	else
	{
		printf("Echec de fermeture du fichier \n");
	}
}

int main(int argc, char ** argv)
{
	FILE* fichier = fopen("./chiffre.txt", "r");

	if (fichier != NULL )
	{
		
		char c;
		do
		{
			c = (char)getc(fichier);
			printf("%c", c);

		} while (c != EOF);
		printf("\n");

		closeFile(fichier);
	}
	else
	{
		printf("L'ouverture du fichier a echouee !\n");

		if (fichier != NULL) fclose(fichier);
	}

	return 0;
}

