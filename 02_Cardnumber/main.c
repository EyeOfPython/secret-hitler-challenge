#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned num_fsc_cards;
    unsigned num_lib_cards;
    printf("Enter the number of fascist cards: ", num_fsc_cards);
    scanf("%d", &num_fsc_cards);
    printf("Enter the number of liberal cards: ", num_lib_cards);
    scanf("%d", &num_lib_cards);
    printf("There are %d cards in total", num_fsc_cards+num_lib_cards);
    return 0;
}
