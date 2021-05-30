#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"

namespace pandemic {

    class Scientist: public Player {
        int CURE_CARD;

        public:
            Scientist(Board& board, City c, int n): Player(board, c),CURE_CARD(n) {}
            Player& discover_cure(Color);
            std::string role () const{
                return "Scientist";
            }
    };
}
