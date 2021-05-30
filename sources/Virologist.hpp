#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"

namespace pandemic{

    class Virologist: public Player {

        public:
            Virologist(Board& board, City c): Player(board, c){}
            std::string role () const{
                return "Virologist";
            }
            Player& treat(City c) ;
    };
}