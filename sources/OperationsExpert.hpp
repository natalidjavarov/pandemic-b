#pragma once
#include "City.hpp"
#include "Board.hpp"
#include "Player.hpp"

namespace pandemic{

    class OperationsExpert : public Player{

    public:
        OperationsExpert(Board& board, City c):Player(board, c) {}   
        std::string role() const{
            return "OperationsExpert";
        }
        Player& build();

    };

}