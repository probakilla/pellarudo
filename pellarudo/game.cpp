#include "game.h"

game::game() : _nb_players (INIT_NB_PLAYERS), _bet (), _current_player (_players [0]), _previous_player (_players [0]), _palifico (false)
{
    for (int i = 0; i < _nb_players; ++i)
        _players [i] = player (i + 1);

    _all_values [DICE_FACES - 1];
    for (int i = 0; i < DICE_FACES; ++i)
        _all_values [i] = -1;
}

void game :: calculate_all_values ()
{
    for (int i = 0; i < _nb_players; ++i)
    {
        int* tmp = _players [i].get_dices_values();
        for (int j = 0; j < _players[i].get_nb_dices(); ++j)
            _all_values[j] ++;
    }
}


void game :: player_lose (player p)
{
    if (p.get_nb_dices() == 0)
    {
        _nb_players --;
        player tmp [_nb_players];
        for (int i = 0; i < _nb_players + 1; ++i)
            if (_players[i].get_turn() != p.get_turn())
                tmp [i] = _players[i];
    }
}

bool game :: game_over ()
{
    return (_nb_players == 1) ? true : false;
}

void game :: you_lied ()
{
    if (_palifico)
    {
        if (_bet.get_count() > _all_values[_bet.get_value()])
            _previous_player.lose_dice();
        else
            _current_player.lose_dice();
    }
    else
    {
        if (_bet.get_count() > (_all_values[_bet.get_value()] + _all_values[PELLA]))
            _previous_player.lose_dice();
        else
            _current_player.lose_dice();
    }
}

void game :: correct_bet ()
{
    if (_palifico)
    {
        if (_bet.get_count() == _all_values[_bet.get_value()])
            _current_player.gain_dice();
        else
            _current_player.lose_dice();
    }
    else
    {
        if (_bet.get_count() == (_all_values[_bet.get_value()] + _all_values[PELLA]))
            _current_player.gain_dice();
        else
            _current_player.lose_dice();
    }
}

void game :: place_bet (int value, int count)
{
    _bet.set_bet(value, count);
}
