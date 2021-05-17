#include <stdio.h>
#include <stdlib.h>

#define TAM 5
#define TAMCA 25



int invertirCadena(char cadena[], int tam);
int ordenarCaracteres(char c[], int tam);


int main()
{

    char cadena[TAMCA] = {"UTN-FRA"};
    char otraCadena[TAMCA] = {"algoritmo"};

    invertirCadena(cadena, TAMCA);
    ordenarCaracteres(otraCadena, TAMCA);

    printf("%s\n\n", cadena);
    printf("%s", otraCadena);

    return 0;
}


int invertirCadena(char cadena[], int tam){

    int exito = -1;
    char aux;

    for(int i = 0; cadena[i] != '\0'; i++)
    {
        for(int j = tam; cadena[j] != '\0'; j--)
        {

            aux = cadena[i];
            cadena[i] = cadena[j];
            cadena[j] = aux;

            if(cadena[i] == cadena[j])
            {
                break;
            }
            exito = 1;
        }
    }


    return exito;

}



int ordenarCaracteres(char c[], int tam)
{
    int exito = -1;
    char aux;

    for(int i = 0; c[i] != '\0'; i++){

        for(int j = i + 1; c[j] != '\0'; j++){

            if(c[i] > c[j]){
                aux = c[i];
                c[i] = c[j];
                c[j] = aux;
                exito = 1;
            }
        }
    }
    return exito;
}
