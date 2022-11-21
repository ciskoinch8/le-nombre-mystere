#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NO 0
#define YES (!NO)

int main(void){
    int guess_value = -1;
    int number;
    int nbr_of_guesses;
    int done = NO;

    printf("--------------------------------\n");
    printf("Selection d'un nombre aleatoire\n");
    printf("--------------------------------\n");

    // Le temps entre dans le calcul du nombre aleatoire.
    srand(time(NULL)); // Initialiser le generateur de nombre pseudo-aleatoire
    number = rand() % 11;

    nbr_of_guesses = 0;
    while(done == NO){
        printf("\nDonnez un nombre entre 0 et 10\n");
        scanf("%d", &guess_value);  // lecture du nombre
        
        nbr_of_guesses++;

        if( number == guess_value){
            done = YES;
            printf("\n\nFélicitations! Vous avez trouvé en %d essais !", nbr_of_guesses);

        }
        else if(nbr_of_guesses >= 10){
            printf("\nFini apres %d essais", nbr_of_guesses);
            break;
        }
        else if(number < guess_value){
            printf("\nCe nombre est trop grand !\n");
        }else{
            printf("\nCe nombre est trop petit !\n");
        }
    }
    printf("\n\nLa réponse était %d\n\n", number);
}

