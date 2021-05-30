#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include "Virologist.hpp"

using namespace std;
using namespace pandemic;


Player& Virologist::treat(City c){
    if(c == cur_city){

    }
    else if(card.count(c) > 0){
        card.erase(c);
    }
    else{
        throw invalid_argument("erelsgl #1");
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