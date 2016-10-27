#ifndef PLAYER_H
#define PLAYER_H


class player
{
public:
    player();
    void roll_dices ();
    int* get_dices_values ();
    void lose_dice ();
    void gain_dice ();

private:
    int _nb_dices;
    int* _dices_value;
    int _turn;
};

#endif // PLAYER_H
