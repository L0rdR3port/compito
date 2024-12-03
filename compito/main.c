#include<stdio.h>
#include"math.h"
#include"pow.h"

int scelta, risultato;
float risultato2;

int main (){
    printf("Digita:\n");
    printf("1. Somma\n");
    printf("2. Moltiplicazione\n");
    printf("3. Differenza\n");
    printf("4. Divisione\n");
    printf("5. Potenza\n");
    scanf("%d", &scelta);

    switch (scelta)
    {
    case '1':
        printf("Inserisci il primo operando\n");
        scanf("%d", &uno);
        printf("Inserisci il secondo operando\n");
        scanf("%d", &due);
        printf("%d + %d = %d\n", uno, due, risultato);
        break;

    case '2':
        printf("Inserisci il primo operando\n");
        scanf("%d", &uno);
        printf("Inserisci il secondo operando\n");
        scanf("%d", &due);
        printf("%d - %d = %d\n", uno, due, risultato);
        break;

        case '3':
        printf("Inserisci il primo operando\n");
        scanf("%d", &uno);
        printf("Inserisci il secondo operando\n");
        scanf("%d", &due);
        printf("%d * %d = %d\n", uno, due, risultato);
        break;

    case '4':
        printf("Inserisci il divisore\n");
        scanf("%f", &divisore);
        printf("Inserisci il dividendo\n");
        scanf("%f", &dividendo);
        printf("%f * %f = %f\n", divisore, dividendo, risultato2);
        break;

    case '5':
        printf("Inserisci la base\n");
        scanf("%d", &base);
        printf("Inserisci l'esponente\n");
        scanf("%d", &esponente);
        printf("%d^%d", base, esponente);
        break;

    default:
        printf("Operazione non ricoscuta\n") break;
    }
}