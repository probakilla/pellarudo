#ifndef BET_H
#define BET_H


class bet
{
public:
    bet();
    int get_value ();
    int get_count ();
    void set_bet (int value, int count);

private:
    int _value;
    int _count;
};

#endif // BET_H
