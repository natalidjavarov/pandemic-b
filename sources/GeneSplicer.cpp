#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
# include "GeneSplicer.hpp"

using namespace std;
using namespace pandemic;

Player& GeneSplicer::discover_cure(Color color){
    if(board.is_cure(color)){
        return *this;    
    }
if(!(board.has_researchStation(cur_city))){
    throw invalid_argument ("in this cur_city dont have a researchStation");
}
    set<City> tempCard;

    int count=0;
    for(City c : card){
count++;
tempCard.insert(c);
    
if(count==CURE_CARD){
    break;
}
    }

if (count==CURE_CARD){
    board.add_newCure(color);
    for(City c: tempCard){
        card.erase(card.find(c));
    }

}else{
    throw invalid_argument ("you dont have more card");
}
    return *this;
}