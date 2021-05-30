#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include "Medic.hpp"


using namespace std;
using namespace pandemic;



Player& Medic::drive(City c){
    Player::drive(c);
    if(board.is_cure(board.get_color(c))){
        board[c]=0;
    }
    return *this;
}
Player& Medic::fly_direct(City c){
       Player::fly_direct(c);
    if(board.is_cure(board.get_color(c))){
        board[c]=0;
    }
    return *this;
}
Player& Medic::fly_charter(City c){
       Player::fly_charter(c);
    if(board.is_cure(board.get_color(c))){
        board[c]=0;
    }
    return *this;
}
Player& Medic::fly_shuttle(City c){
Player::fly_shuttle(c);
    if(board.is_cure(board.get_color(c))){
        board[c]=0;
    }
    return *this;
}


Player& Medic::treat(City c){
     if(c != cur_city){
         throw invalid_argument("you are not un this city");
     }
    if(board[c] ==0){
        throw invalid_argument("in this city the cure is 0");
    }
     
        board[c] = 0;
    
    return *this;
}
