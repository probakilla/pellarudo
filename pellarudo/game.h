#ifndef GAME_H
#define GAME_H

#include "player.h"
#include "bet.h"

#define INIT_NB_PLAYERS 4
#define DICE_FACES 6
#define PELLA 0

class game
{

public:
    game();
    ~game();
    void calculate_all_values ();
    void player_lose (player p);
    bool game_over ();
    void you_lied ();
    void correct_bet ();
    void place_bet (int value, int count);

private:
    int _nb_players;
    player _players [];
    bet _bet;
    int _all_values [];
    player _current_player;
    player _previous_player;
    bool _palifico;
};

#endif // GAME_H
