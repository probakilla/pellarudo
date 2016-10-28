#include "player.h"

player :: player(int turn) : _nb_dices (STARTING_DICE_COUNT), _turn (turn)
{
    _dices_value [STARTING_DICE_COUNT];
    for (int i = 0; i < STARTING_DICE_COUNT; ++i)
        _dices_value [i] = -1;
}

void player :: roll_dices ()
{
    for (int i = 0; i < _nb_dices - 1; ++i)
        _dices_value [i] = (rand() % 6);
}

int* player :: get_dices_values ()
{
    return _dices_value;
}

int player :: get_nb_dices ()
{
    return _nb_dices;
}

int player :: get_turn ()
{
    return _turn();
}

void player :: lose_dice ()
{
    _nb_dices -= 1;
    int tmp [_nb_dices];
    _dices_value = tmp;
}

void player :: gain_dice ()
{
    nb_dices += 1;
    int tmp [_nb_dices];
    _dices_value = tmp;
}
