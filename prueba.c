#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    FILE *file = fopen("conocimiento.csv", "r");
    if (!file) {
        perror("No se pudo abrir el archivo");
        return 1;
    }

    char palabras_de_amor[100000];

    char palabras_de_desamor[100000];

    char palabras_de_amistad[100000];

    char palabras_de_desagrado[100000];

    char palabras_de_felicidad[100000];

    char amor[1000][100];

    char desamor[1000][100];

    char amistad[1000][100];

    char desagrado[1000][100];

    char felicidad[1000][100];
    


    if (fgets(palabras_de_amor, sizeof(palabras_de_amor), file)) {
     printf("\nPalabras de amor: %s", palabras_de_amor);
    }
       

char *pchA;
    int contA = 0 ;
    pchA = strtok(palabras_de_amor, " .,-");

    while (pchA != NULL)
    {
        printf("%d \t", contA);

        strcpy(amor[contA], pchA);
        printf("%s\n", pchA);
        pchA=strtok(NULL, " .,-");
        contA +=1;
    }




    if (fgets(palabras_de_desamor, sizeof(palabras_de_desamor), file)) {
        printf("\nPalbras de desamor: %s", palabras_de_desamor);
    }

char *pchD;
    int contD = 0 ;
    pchD = strtok(palabras_de_desamor, " .,-");

    while (pchD != NULL)
    {
        printf("%d \t", contD);

        strcpy(desamor[contD], pchD);
        printf("%s\n", pchD);
        pchD=strtok(NULL, " .,-");
        contD +=1;
    }



    if (fgets(palabras_de_amistad, sizeof(palabras_de_amistad), file)) {
        printf("\nPalabras de amistad: %s", palabras_de_amistad);
    }

char *pchAM;
    int contAM = 0 ;
    pchAM = strtok(palabras_de_amistad, " .,-");

    while (pchAM != NULL)
    {
        printf("%d \t", contAM);

        strcpy(amistad[contAM], pchAM);
        printf("%s\n", pchAM);
        pchAM=strtok(NULL, " .,-");
        contAM +=1;
    }



    if (fgets(palabras_de_desagrado, sizeof(palabras_de_desagrado), file)) {
        printf("\nPalabras de amistad: %s", palabras_de_desagrado);
    }



char *pchDA;
    int contDA = 0 ;
    pchDA = strtok(palabras_de_desagrado, " .,-");

    while (pchDA != NULL)
    {
        printf("%d \t", contDA);

        strcpy(desagrado[contDA], pchDA);
        printf("%s\n", pchDA);
        pchDA=strtok(NULL, " .,-");
        contDA +=1;
    }


    if (fgets(palabras_de_felicidad, sizeof(palabras_de_felicidad), file)) {
        printf("\nPalabras de amistad: %s", palabras_de_felicidad);
    }
    
    

    char *pchF;
    int contF = 0 ;
    pchF = strtok(palabras_de_felicidad, " .,-");

    while (pchF != NULL)
    {
        printf("%d \t", contF);

        strcpy(felicidad[contF], pchF);
        printf("%s\n", pchF);
        pchF=strtok(NULL, " .,-");
        contF +=1;
    }


    fclose(file);
    return 0;
}
