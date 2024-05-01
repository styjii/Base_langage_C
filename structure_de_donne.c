#include <stdio.h>
#include <stdlib.h>

void afficheTableau(int *tableau, int tailleTableau);

int main(int argc, char *argv[]) {
    // initialsation du tableau;
    int tableau[4] = {0};
    tableau[0] = 10;
    tableau[1] = 15;
    tableau[2] = 3;
    
    // Parcourir dans le tableau
    afficheTableau(tableau, 4);
    return 0;
}
void afficheTableau(int *tableau, int tailleTableau) {
    for(int i = 0; i < tailleTableau; i++) {
        printf("tableau %d : %d\n", i, tableau[i]);
    }
}