#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"

namespace pandemic{

    class Medic: public Player {

        public:
            Medic(Board& board, City c): Player(board, c){}
         Player& drive(City c);
         Player& fly_direct(City c);
         Player& fly_charter(City c);
         Player& fly_shuttle(City c);
         Player& treat(City c);
            std::string role() const{
                return "Medic";
            }

    };
}