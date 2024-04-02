#include <stdio.h>

struct Node {
    struct Node* link;
    char alphabet;
};

int main() {
    struct Node l1, l2, l3, l4, l5, l6, l7, l8, l9;
    l1.link = NULL;
    l1.alphabet = 'F';

    l2.link = NULL;
    l2.alphabet = 'M';

    l3.link = NULL;
    l3.alphabet = 'A';

    l4.link = NULL;
    l4.alphabet = 'I';

    l5.link = NULL;
    l5.alphabet = 'K';

    l6.link = NULL;
    l6.alphabet = 'T';

    l7.link = NULL;
    l7.alphabet = 'N';

    l8.link = NULL;
    l8.alphabet = 'O';

    l9.link = NULL;
    l9.alphabet = 'R';

    l7.link = &l1; //N -> F
    l1.link = &l8; //F -> O 
    l8.link = &l2; //O -> M 
    l2.link = &l5; //M -> K
    l5.link = &l3; //K -> A
    l3.link = &l6; //A -> T
    l6.link = &l9; //T -> R
    l9.link = &l4; //R -> I
    l4.link = &l7; //I -> N

    char word[] = {
        l3.link->link->link->alphabet,  
        l3.link->link->link->link->alphabet,  
        l3.link->link->link->link->link->alphabet,  
        l3.link->link->link->link->link->link->alphabet,  
        l3.link->link->alphabet,  
        l3.link->link->link->link->link->link->link->alphabet,  
        l3.link->link->link->link->link->link->link->link->link->alphabet,  
        l3.link->link->link->link->link->link->link->link->link->link->alphabet, 
        l3.link->link->link->alphabet,  
        l3.link->link->link->link->link->link->link->link->alphabet, 
        l3.link->link->link->link->link->link->link->link->link->alphabet
    };

    printf("%s", word);

    return 0;
}