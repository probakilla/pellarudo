#include "bet.h"

bet::bet() : _value (-1), _count (-1) {}

int bet :: get_value ()
{
    return _value;
}

int bet :: get_count ()
{
    return _count;
}

void bet :: set_bet (int value, int count)
{
    _value = value;
    _count = count;
}
