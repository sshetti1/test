#include <stdio.h>
#include "card.h"
#include <struct.h>

int main() {
    printf("Hello, World!\n");
    int x = count_deck(make_deck());
    printf("%d", x);
    printf("%c", make_deck());
    return 0;
}