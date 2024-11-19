//Autor :Diego Reyes Salazar y  Gonzalo Guerrero Caballero 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

 int EncontrarAmor(char palabras_carta[]){
        int encontrada=0;
        int s=0;
        int amorlen = 64;
         char palabras_de_amor[][50] = {
        "amo", "amor", "quiero", "romance", "beso", "cita", "gustar", "gustas", "lindo", "atrativo", "atrativa", 
        "guapo", "guapa", "bella", "bello", "hermoso", "hermosa", "precioso", "preciosa", "confecion", "corazon", 
        "perfecta", "perfeccion", "perfecto", "principe", "princesa", "novio", "novia", "esposa", "esposo", "juntos", 
        "confieso", "cario", "pasion", "admiro", "afecto", "deseo", "sueno", "vida", "contigo", "eternidad", "magia", 
        "alma", "inseparables", "dulsura", "mirada", "gemela", "prometo", "promeso", "calido", "calida", "protegido", 
        "confianza", "amado", "amada", "protegida", "valor", "cielo", "enamorado", "enamorada", "destino", "universo", 
        "apoyo", "hogar", "verdad"
    };
        for ( s = 0; s <amorlen ; s++)
           {
            if (strcmp(palabras_de_amor[s], palabras_carta)==0)
                {
                    encontrada = encontrada + 1;
                    printf("\n Palabra encontrada en amor: %s", palabras_carta);
                }
                
           }
        return encontrada;
    }

int EncontrarDesamor(char palabras_carta[]){
        char palabras_de_desamor[][50] = {
        "roto", "triste", "llorar", "fin", "adios", "ruptura", "separacion", "dolor", "despedida", "desamor", "soledad",
        "decepcion", "lagrimas", "llanto", "ausencia", "vacio", "desilusion", "confusion", "resentimiento", "olvido", 
        "frustracion", "separacion", "desasosiego", "amargura", "sufrimiento", "rechazo", "tristeza", "incompletud", 
        "cierre", "perdida", "distancia", "nostalgia", "desesperacion", "infelicidad", "arrepentimiento", "sombras", 
        "silencio", "soledad"
    };
    int desamorlen=38;
    int s=0;
    int encontrada=0;
for ( s = 0; s <desamorlen ; s++)
           {
            if (strcmp(palabras_de_desamor[s], palabras_carta)==0)
                {
                    encontrada = encontrada + 1;
                    printf("\n Palabra encontrada en desamor: %s", palabras_carta);
                }
                
           }
        return encontrada;
}

int EncontrarAmistad(char palabras_carta[]){
        char palabras_de_amistad[][50] = {
        "quiero", "amigo", "amistad", "companerismo", "risa", "apoyo", "lealtad", "confianza", "aventura", "recuerdos",
        "gratitud", "diversion", "momentos", "comprension", "sinceridad", "carino", "cercania", "complicidad", 
        "celebracion", "solidaridad", "conexion", "historias", "esperanza", "union", "respeto", "empatia", "honestidad",
        "crecimiento", "descubrimientos", "compania", "serenidad", "aliento", "luz", "fortaleza", "abrazos"
    };
    int amistadlen=35;
    int s=0;
    int encontrada=0;
for ( s = 0; s <amistadlen ; s++)
           {
            if (strcmp(palabras_de_amistad[s], palabras_carta)==0)
                {
                    encontrada = encontrada + 1;
                    printf("\n Palabra encontrada en amistad: %s", palabras_carta);
                }
                
           }
        return encontrada;
}

int EncontrarDesagrado(char palabras_carta[]){\
        char palabras_de_desagrado[][50] = {
        "odio", "detesto", "desagradas", "repulsion", "asqueroso", "horrible", "inmundo", "insufrible", "desagradable", 
        "grotesco", "abominable", "repugnante", "irritante", "vacío", "feo", "espantoso", "mal olor", "incomodidad", 
        "rechazo", "desesperante", "intolerable", "calamidad", "horroroso", "desdén", "hedor", "indignante", "inaceptable",
        "desanimo", "tristeza", "ofensa", "desdicha", "repugnancia", "molestar", "aguantar"
    };

    int desagradolen=35;
    int s=0;
    int encontrada=0;
for ( s = 0; s <desagradolen ; s++)
           {
            if (strcmp(palabras_de_desagrado[s], palabras_carta)==0)
                {
                    encontrada = encontrada + 1;
                    printf("\n Palabra encontrada en desagrado: %s", palabras_carta);
                }
                
           }
        return encontrada;
}

int EncontrarFelicidad(char palabras_carta[]){
        char palabras_de_felicidad[][50] = {
        "emocionado", "felicidad", "disfrute", "alegria", "sonrisa", "exito", "esperanza", "plenitud", "gratitud", 
        "celebracion", "amor", "satisfaccion", "optimismo", "luz", "risas", "entusiasmo", "triunfo", "paz", "carino", 
        "descubrimientos", "sorpresas", "bienestar", "euforia", "dicha", "crecimiento", "compasion", "energia", 
        "fortaleza", "armonia", "ilusion", "suenos", "logros", "riqueza", "claridad"
    };

    int felicidadlen=34;
    int s=0;
    int encontrada=0;
for ( s = 0; s <felicidadlen ; s++)
           {
            if (strcmp(palabras_de_felicidad[s], palabras_carta)==0)
                {
                    encontrada = encontrada + 1;
                    printf("\n Palabra encontrada en felicidad: %s", palabras_carta);
                }
                
           }
        return encontrada;
}

void AgregarPalabrasDeAmor(){

}
void AgregarPalabrasDeDesamor(){
    
}
void AgregarPalabrasDeAmistad(){
    
}
void AgregarPalabrasDeDesagrado(){
    
}
void AgregarPalabrasDeFelicidad(){
    
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
                printf("\n");
                puts (tipo);
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

        printf("Separando cadena \"%s\" en palabras: \n", cad);
        pch = strtok(cad, " .,-");

        while (pch != NULL)
        {
            printf("%d \t", cont);

            strcpy(palabras_carta[cont], pch);
            printf("%s\n", pch);
            pch=strtok(NULL, " .,-");
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
        printf("\nAmor: %d \nDesamor: %d\nAmistad: %d\nFelicidad: %d\nDesagrado: %d", amor, desamor, amistad, felicidad, desagrado);
    }

int main (void){
    int op=0;
    
   while (op!=7)
   {
    
    printf("Bienvenidos al analizador de sentimientos\n1-Agregar palabras de amor\n2-Agregar palabras de desamor\n3-Agregar palabras de amistad\n4-Agregar palabras de desagrado\n5-Agregar palabras de felicidad\n6-Analizar carta\n7-Salir\nSelecciona una opcion del menu: ");

    scanf("%d", &op);

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
    default:
    printf("\nSelecciona una opcion valida\n");
        break;
    }

   }
   

   


    
    return 33;
}