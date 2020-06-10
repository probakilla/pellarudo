#include "Dice.hpp"

namespace pellarudo {
    Dice::Dice(int value) : _value(value) {}

    int Dice::get_value() const {
        return _value;
    }
}
