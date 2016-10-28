#ifndef PLAYER_H
#define PLAYER_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STARTING_DICE_COUNT 5

class player
{
public:
    player (int turn);
    void roll_dices ();
    int* get_dices_values ();
    int get_nb_dices ();
    int get_turn ();
    void lose_dice ();
    void gain_dice ();

private:
    int _nb_dices;
    int* _dices_value;
    int _turn;
};

#endif // PLAYER_H
