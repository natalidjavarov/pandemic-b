#include "Dispatcher.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

using namespace std;
using namespace pandemic;

Player& Dispatcher::fly_direct(City c){
    if(cur_city == c){
        throw invalid_argument("you are in this city");

    }
    if(board.has_researchStation(cur_city)){
    cur_city=c;
    }
    else
    {
     return Player::fly_direct(c);
    }
    
    return *this;
}