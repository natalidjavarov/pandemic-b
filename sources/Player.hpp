#pragma once
#include "Board.hpp"
#include "City.hpp"
#include <set>
#include <map>

namespace pandemic{
    const int CURE_CARD=5;

    class Player {

        protected:
            Board& board;
            City cur_city;
            std::set <City> card;
            

        public:
            Player(Board& board, City c): board(board), cur_city(c){}

        Player& take_card(City c);
        virtual Player& drive(City c);
        virtual Player& fly_direct(City c);
        virtual Player& fly_charter(City c);
        virtual Player& fly_shuttle(City c);
        virtual Player& build();
        virtual Player& discover_cure(Color color);
        virtual Player& treat(City c);
        virtual std::string role() const;
        void remove_cards ();
       
};
}