#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"

namespace pandemic{

    class Researcher: public Player {
        

        public:
            Researcher(Board& board, City c): Player(board, c){}
            Player& discover_cure(Color color) ;
             std::string role () const{
                return "Researcher";
             }
    };
}