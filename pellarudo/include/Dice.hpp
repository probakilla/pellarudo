#ifndef DICE_HPP
#define DICE_HPP

namespace pellarudo {
    class Dice {
        public:
            int get_value() const;
            Dice(int value);

        private:
            int _value;
    };
}

#endif //DICE_HPP
