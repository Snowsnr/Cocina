//Autor :Diego Reyes Salazar y  Gonzalo Guerrero Caballero 

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

char palabras_de_amor[1000][100];
int amorlen = 0;

char palabras_de_desamor[1000][100];
int desamorlen = 0;

char palabras_de_amistad[1000][100];
int amistadlen = 0;

char palabras_de_desagrado[1000][100];
int desagradolen = 0;

char palabras_de_felicidad[1000][100];
int felicidadlen = 0;



void AgregarPalabrasDeAmor(){
    FILE *fileA = fopen("amor.csv", "a+");
    if (!fileA) {
        perror("\nNo se pudo abrir el archivo de amor\n");
        
    }else{

        printf("\nEscribe una o varias palabras de amor separadas por un espacio para agregar al archivo: ");
        char entrada[1000];
        scanf(" %[^\n]", entrada);

        int i = 0;
        for (i = 0; i < sizeof(entrada); i++)
        {
            entrada[i]=tolower(entrada[i]);
        }
        

        fprintf(fileA, "%s\n", entrada);

        printf("Palabra agregada: \033[1;36m%s", entrada);
        fflush(fileA);

        fclose(fileA);
    }
}

void AgregarPalabrasDeDesagrado(){
    FILE *fileA = fopen("desagrado.csv", "a+");
    if (!fileA) {
        perror("\nNo se pudo abrir el archivo de desagrado\n");
        
    }else{

        printf("\nEscribe una o varias palabras de desagrado separadas por un espacio para agregar al archivo: ");
        char entrada[1000];
        scanf(" %[^\n]", entrada);

        int i = 0;
        for (i = 0; i < sizeof(entrada); i++)
        {
            entrada[i]=tolower(entrada[i]);
        }
        

        fprintf(fileA, "%s\n", entrada);

        printf("Palabra agregada: \033[1;36m%s", entrada);
        fflush(fileA);

        fclose(fileA);
    }
}

void AgregarPalabrasDeDesamor(){
   FILE *fileA = fopen("desamor.csv", "a+");
    if (!fileA) {
        perror("\nNo se pudo abrir el archivo de desamor\n");
        
    }else{

        printf("\nEscribe una o varias palabras de desamor separadas por un espacio para agregar al archivo: ");
        char entrada[1000];
        scanf(" %[^\n]", entrada);

        int i = 0;
        for (i = 0; i < sizeof(entrada); i++)
        {
            entrada[i]=tolower(entrada[i]);
        }
        

        fprintf(fileA, "%s\n", entrada);

        printf("Palabra agregada: \033[1;36m%s", entrada);
        fflush(fileA);

        fclose(fileA);
    }
}

void AgregarPalabrasDeFelicidad(){
    FILE *fileA = fopen("felicidad.csv", "a+");
    if (!fileA) {
        perror("\nNo se pudo abrir el archivo de felicidad\n");
        
    }else{

        printf("\nEscribe una o varias palabras de felicidad separadas por un espacio para agregar al archivo: ");
        char entrada[1000];
        scanf(" %[^\n]", entrada);

        int i = 0;
        for (i = 0; i < sizeof(entrada); i++)
        {
            entrada[i]=tolower(entrada[i]);
        }
        

        fprintf(fileA, "%s\n", entrada);

        printf("Palabra agregada: \033[1;36m%s", entrada);
        fflush(fileA);

        fclose(fileA);
    }
	
}

void AgregarPalabrasDeAmistad(){
     FILE *fileA = fopen("amistad.csv", "a+");
    if (!fileA) {
        perror("\nNo se pudo abrir el archivo de amistad\n");
        
    }else{

        printf("\nEscribe una o varias palabras de amistad separadas por un espacio para agregar al archivo: ");
        char entrada[1000];
        scanf(" %[^\n]", entrada);

        int i = 0;
        for (i = 0; i < sizeof(entrada); i++)
        {
            entrada[i]=tolower(entrada[i]);
        }
        

        fprintf(fileA, "%s\n", entrada);

        printf("Palabra agregada: \033[1;36m%s", entrada);
        fflush(fileA);

        fclose(fileA);
    }
	
}

void leer_palabras_amor() {
    FILE *fileA = fopen("amor.csv", "r");
    if (!fileA) {
        perror("No se pudo abrir el archivo de amor");
        return;
    }

    char palabra[100000];
    int contA = 0;

    while (fgets(palabra, sizeof(palabra), fileA)) {
        char *pchA;
        pchA = strtok(palabra, " .,-\n");
        while (pchA != NULL) {
            strcpy(palabras_de_amor[contA], pchA);
            pchA = strtok(NULL, " .,-\n");
            contA += 1;
        }
    }
    amorlen = contA;
    fclose(fileA); // Cerramos el archivo después de leer
}

 int EncontrarAmor(char palabras_carta[]){
    leer_palabras_amor();
        int encontrada=0;
        int s=0;
        for ( s = 0; s <amorlen ; s++)
           {
            //printf("\n Palabra: %sggg carta: %sgggg", palabras_de_amor[s], palabras_carta);
            if (strcmp(palabras_de_amor[s], palabras_carta)==0)
                {
                    encontrada = encontrada + 1;
                    printf("\nPalabra encontrada en\033[0;31m amor: %s\n", palabras_carta);
                    printf("\033[0m");
                }
                
           }
        return encontrada;
    }


void leer_palabras_desamor() {
    FILE *fileA = fopen("desamor.csv", "r");
    if (!fileA) {
        perror("No se pudo abrir el archivo de desamor");
        return;
    }

    char palabra[100000];
    int contA = 0;

    while (fgets(palabra, sizeof(palabra), fileA)) {
        char *pchA;
        pchA = strtok(palabra, " .,-\n");
        while (pchA != NULL) {
            strcpy(palabras_de_desamor[contA], pchA);
            pchA = strtok(NULL, " .,-\n");
            contA += 1;
        }
    }
    desamorlen = contA;
    fclose(fileA); // Cerramos el archivo después de leer
}

 int EncontrarDesamor(char palabras_carta[]){
    leer_palabras_desamor();
        int encontrada=0;
        int s=0;
        for ( s = 0; s <desamorlen ; s++)
           {
           
            if (strcmp(palabras_de_desamor[s], palabras_carta)==0)
                {
                    encontrada = encontrada + 1;
                    printf("\nPalabra encontrada en\033[1;31m desamor: %s\n", palabras_carta);
                    printf("\033[0m");
                }
                
           }
        return encontrada;
    }

void leer_palabras_desagrado() {
    FILE *fileA = fopen("desagrado.csv", "r");
    if (!fileA) {
        perror("No se pudo abrir el archivo de desagrado");
        return;
    }

    char palabra[100000];
    int contA = 0;

    while (fgets(palabra, sizeof(palabra), fileA)) {
        char *pchA;
        pchA = strtok(palabra, " .,-\n");
        while (pchA != NULL) {
            strcpy(palabras_de_desagrado[contA], pchA);
            pchA = strtok(NULL, " .,-\n");
            contA += 1;
        }
    }
    desagradolen = contA;
    fclose(fileA); // Cerramos el archivo después de leer
}

 int EncontrarDesagrado(char palabras_carta[]){
    leer_palabras_desagrado();
        int encontrada=0;
        int s=0;
        for ( s = 0; s <desagradolen ; s++)
           {
           
            if (strcmp(palabras_de_desagrado[s], palabras_carta)==0)
                {
                    encontrada = encontrada + 1;
                    printf("\nPalabra encontrada en\033[1;35m desagrado: %s\n", palabras_carta);
                    printf("\033[0m");
                }
                
           }
        return encontrada;
    }

void leer_palabras_amistad() {
    FILE *fileA = fopen("amistad.csv", "r");
    if (!fileA) {
        perror("No se pudo abrir el archivo de amistad");
        return;
    }

    char palabra[100000];
    int contA = 0;

    while (fgets(palabra, sizeof(palabra), fileA)) {
        char *pchA;
        pchA = strtok(palabra, " .,-\n");
        while (pchA != NULL) {
            strcpy(palabras_de_amistad[contA], pchA);
            pchA = strtok(NULL, " .,-\n");
            contA += 1;
        }
    }
    amistadlen = contA;
    fclose(fileA); // Cerramos el archivo después de leer
}

 int EncontrarAmistad(char palabras_carta[]){
    leer_palabras_amistad();
        int encontrada=0;
        int s=0;
        for ( s = 0; s <amistadlen ; s++)
           {
           
            if (strcmp(palabras_de_amistad[s], palabras_carta)==0)
                {
                    encontrada = encontrada + 1;
                    printf("\nPalabra encontrada en\033[1;32m amistad: %s\n", palabras_carta);
                    printf("\033[0m");
                }
                
           }
        return encontrada;
    }

void leer_palabras_felicidad() {
    FILE *fileA = fopen("felicidad.csv", "r");
    if (!fileA) {
        perror("No se pudo abrir el archivo de felicidad");
        return;
    }

    char palabra[100000];
    int contA = 0;

    while (fgets(palabra, sizeof(palabra), fileA)) {
        char *pchA;
        pchA = strtok(palabra, " .,-\n");
        while (pchA != NULL) {
            strcpy(palabras_de_felicidad[contA], pchA);
            pchA = strtok(NULL, " .,-\n");
            contA += 1;
        }
    }
    felicidadlen = contA;
    fclose(fileA); // Cerramos el archivo después de leer
}

 int EncontrarFelicidad(char palabras_carta[]){
    leer_palabras_felicidad();
        int encontrada=0;
        int s=0;
        for ( s = 0; s <felicidadlen ; s++)
           {
           
            if (strcmp(palabras_de_felicidad[s], palabras_carta)==0)
                {
                    encontrada = encontrada + 1;
                    printf("\nPalabra encontrada en\033[1;33m felicidad: %s\n", palabras_carta);
                    printf("\033[0m");
                }
                
           }
        return encontrada;
    }

void Analizador(){
        int s = 0;
        FILE *apu_archivo;
        
        char palabras_carta[1000][50];
        char tipo[100];
        char cad[50000];

    apu_archivo = fopen ("carta.txt","r");   
    if (apu_archivo!=NULL)
    {
            if ( fgets (tipo, 100 , apu_archivo) != NULL )
            {
                //printf("\n");
                //puts (tipo);
            }	

    }
    else
    printf("\nNo pudo abrir el archivo");

    int c;
    int n =0;
    if (apu_archivo != NULL) 
    {    
        do 
        {
        c = fgetc (apu_archivo);
        cad[n]=c;
        n++;
        } while (c != EOF);

        fclose (apu_archivo);

    }

        char *pch;
        int cont = 0 ;
        int tamano_carta = strlen(cad); 
        
        int contador ; 
        for (contador = 0; contador< tamano_carta; contador++)
        {
            cad[contador]= tolower(cad[contador]);
        }

        //printf("Separando cadena \"%s\" en palabras: \n", cad);
        pch = strtok(cad, " .,-\n");

        while (pch != NULL)
        {
            //printf("%d \t", cont);

            strcpy(palabras_carta[cont], pch);
            //printf("%s\n", pch);
            pch=strtok(NULL, " .,-\n");
            cont +=1;
        }
        int i;
        int amor = 0;
        int desamor = 0;
        int amistad = 0;
        int desagrado = 0;
        int felicidad = 0;

        for ( i = 0; i < cont+1; i++){
            /*
            if (strcmp("no", palabras_carta[i])==0)
            {
                printf("Hay un no");
            
                for ( i = i; i < cont; i++)
                {
                for ( s = 0; s <amorlen ; s++)
            {
                if (strcmp(palabras_de_amor[s], palabras_carta[i])==0)
                    { 
                        desamor = desamor + 1;
                        
                    }
                    break;
            }

            for ( s = 0; s <desamorlen ; s++)
            {
                if (strcmp(palabras_de_desamor[s], palabras_carta[i])==0)
                    {
                        desamor = desamor + 1;
                        
                    }
                    break;
            }
            
            for ( s = 0; s <amistadlen ; s++)
            {
                if (strcmp(palabras_de_amistad[s], palabras_carta[i])==0)
                    {
                        amistad = amistad + 1;
                        
                    }
                    break;
            }

            for ( s = 0; s <desagradolen ; s++)
            {
                if (strcmp(palabras_de_desagrado[s], palabras_carta[i])==0)
                    {
                        desagrado = desagrado + 1;
                        
                    }
                    break;
            }
            
                for ( s = 0; s <felicidadlen ; s++)
            {
                if (strcmp(palabras_de_felicidad[s], palabras_carta[i])==0)
                    {
                        felicidad = felicidad + 1;
                        
                    }
                    break;
            }
                }
                
            }else{*/
            
            amor = EncontrarAmor(palabras_carta[i]) + amor;  
            desamor = EncontrarDesamor(palabras_carta[i]) + desamor; 
            amistad = EncontrarAmistad(palabras_carta[i]) + amistad;
            desagrado = EncontrarDesagrado(palabras_carta[i]) + desagrado;
            felicidad = EncontrarFelicidad(palabras_carta[i]) + felicidad; 
            
            
        }
        printf("\033[5;37m");
        printf("\n---------------------------------------------\n");
        printf("\033[0m");
        printf("\033[0;37m");
        printf("Palabras encontradas en la carta\n\n");
        printf("\033[0;31m");
        printf("Amor: \033[0m%d \n\n", amor);
        printf("\033[1;36m");
        printf("Desamor: \033[0m%d\n\n", desamor);
        printf("\033[1;32m");
        printf("Amistad: \033[0m%d\n\n", amistad);
        printf("\033[1;33m");
        printf("Felicidad: \033[0m%d\n\n", felicidad);
        printf("\033[1;35m");
        printf("Desagrado: \033[0m%d", desagrado);
        printf("\033[0m");

        if (amor>desamor && amor>desagrado && amor>amistad && amor>felicidad)
        {
            printf("\n\nEs probable que la carta sea de \033[0;31mAmor\n");
        }else if (desamor>amor && desamor>desagrado && desamor>amistad && desamor>felicidad)
        {
            printf("\n\nEs probable que la carta sea de \033[1;36mDesamor\n");
        }else if (amistad>desamor && amistad>desagrado && amistad>amor && amistad>felicidad)
        {
            printf("\n\nEs probable que la carta sea de \033[1;32mAmistad\n");
        }else if (felicidad>desamor && felicidad>desagrado && felicidad>amistad && felicidad>amor)
        {
            printf("\n\nEs probable que la carta sea de \033[1;33mFelicidad\n");
        }else if (desagrado>desamor && desagrado>amor && desagrado>amistad && desagrado>felicidad)
        {
            printf("\n\nEs probable que la carta sea de \033[1;35mDesagrado\n");
        }else 
            printf("\n\nEs probable que la carta presente la misma cantidad de dos o mas sentimientos");
        

    }

int main (void){
    system("cls");
    int op=0;
    
   while (op!=7)
   {
    printf("\033[5;37m");
    printf("\n---------------------------------------------\n");
    printf("\033[0m");
    printf("\033[0;37m");
    printf("Bienvenido al analizador de sentimientos\n\n");
    printf("\033[0m");
    printf("\033[1;32m 1-Agregar\033[0m palabras de amor\n");
    printf("\033[1;32m 2-Agregar\033[0m palabras de desamor\n");
    printf("\033[1;32m 3-Agregar\033[0m palabras de amistad\n");
    printf("\033[1;32m 4-Agregar\033[0m palabras de desagrado\n");
    printf("\033[1;32m 5-Agregar\033[0m palabras de felicidad\n\n");
    

    printf("\033[1;36m 6-Analizar\033[0m carta\n\n");
    
 
    printf("\033[1;31m 7-Salir\n\n");

    printf("\033[0m");
    printf("\033[4;37mSelecciona una opcion del menu: ");
    printf("\033[0m");
    scanf("%d", &op);

    printf("\033[5;37m");
    printf("\n---------------------------------------------");
    printf("\033[0m");

    switch (op)
    {
    case 1:
        AgregarPalabrasDeAmor();
        break;
    case 2:
        AgregarPalabrasDeDesamor();
        break;
    case 3:
        AgregarPalabrasDeAmistad();
        break;
    case 4:
        AgregarPalabrasDeDesagrado();
        break;
    case 5:
        AgregarPalabrasDeFelicidad();
        break;
    case 6:
        Analizador();
        break;
    case 7:
        printf("\nGracias por usar el programa");
        break;
    default:
    printf("\nSelecciona una opcion valida\n");
        break;
    }

   }
   

   


    
    return 33;
}