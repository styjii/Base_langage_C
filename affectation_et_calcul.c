#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    // Déclaration des variables
    int a, b, somme;

    printf("=== Addition de a, b ∈ Z ===\n\n");
    // Affectation de valeurs
    printf("Entrer a = ");
    scanf("%d", &a);
    printf("Entrer b = ");
    scanf("%d", &b);

    // Calcul de la somme
    somme = a + b;

    // Affichage du résultat
    printf("\nLa somme de %d + %d est %d\n\n", a, b, somme);
    printf("\n=== carrée de a, b ∈ Z ===\n\n");
    
    // calcul de carrée
    printf("le carrée de a est %d et b est %d\n\n", a*a, b*b);
    return 0;
}