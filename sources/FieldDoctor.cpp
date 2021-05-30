#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include "FieldDoctor.hpp"

using namespace std;
using namespace pandemic;

Player& FieldDoctor::treat(City c){
     if((c != cur_city)&&!(board.is_connect(cur_city,c))){
         throw invalid_argument("you are not in or conneceted to this city");
     }

    if(board[c] ==0){
        throw invalid_argument("in this city the cure is 0");
    }
      if(board.is_cure(board.get_color(c))){
        board[c] = 0;
    }else{
        board[c] --;
    }
    
    return *this;
}