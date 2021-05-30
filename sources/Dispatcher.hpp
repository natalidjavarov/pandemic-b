#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"

namespace pandemic{

    class Dispatcher:public Player {

        public:
            Dispatcher(Board& board, City c): Player(board, c){}
            Player& fly_direct(City c);
            std::string role () const{
                return "Dispatcher";
            }
    };
}
 