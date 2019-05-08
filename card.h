//
// Created by Berna Shetti on 2019-05-07.
//

#ifndef BLACKJACK_GAME_CARD_H
#define BLACKJACK_GAME_CARD_H

#endif //BLACKJACK_GAME_CARD_H

typedef struct card {
    int rank;
    char suit;
    struct card *next; /* have to use struct Card because the typedef isnt "ready" yet */
} card;
card *make_deck();
int count_deck();


