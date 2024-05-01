#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int choix, n;
    printf("=== Choix de boucle ===\n\n");
    printf("1 - 0 à 10\n");
    printf("2 - 0 à 100\n");
    printf("3 - 0 à 1000\n");
    
    // boucle do while
    // 1 <= choix <= 3 => 3 < choix < 1
    do {
        printf("\nEntrer votre choix : ");
        scanf("%d", &choix);
    } while (choix < 1 || choix > 3);
    
    // conidtion switch
    switch(choix) {
        case 1 :
            n = 10;
            break;
        case 2 :
            n = 100;
            break;
        case 3 :
            n = 1000;
            break;
    }
    printf("\n\n=== 0 à %d ===\n", n);
    
    // boucle for
    for (int i = 0; i <= n; i++) {
        
        // condition if
        if (i % 2 == 0) { // divisible par 2 en deuxième colone
            printf("\t%d\n", i);
        } else if (i % 3 == 0) { // divisible par 3 en trosième colone
            printf("\t\t%d\n", i);
        } else { // ni divisible par 2 et par 3 en premier colone
            printf("%d\n", i);
        }
    }
}