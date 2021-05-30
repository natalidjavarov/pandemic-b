#include "Researcher.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"


using namespace std;
using namespace pandemic;

Player& Researcher::discover_cure(Color color){
// if(board.is_cure(color)){
//         return *this;    
//     }
//  std::set<City> colorCard;
//     int count=0;
//     for(City c : card){
//     if(board.get_color(c)){
// count++;
// colorCard.insert(c);
//     }
// if(count==CURE_CARD){
//     break;
// }
//     }

// if (count==CURE_CARD){
//     board.add_newCure(color);
//     for(City c: colorCard){
//         card.erase(card.find(c));
//     }

// }
//     return *this;

    if (board.is_cure(color))
    {
        return *this;
    }
    // if (!(board.has_researchStation(cur_city)))
    // {
    //     throw invalid_argument("in this cur_city dont have a researchStation");
    // }
    int count = 0;
    set<City> tempCard;
    for (City c : card)
    {
        if (board.get_color(c) == color)
        {
            count++;
            tempCard.insert(c);
        }
        if (count == CURE_CARD)
        {
            break;
        }
    }
    if(count < CURE_CARD){throw invalid_argument("you dont have more card");}
    if (count == CURE_CARD)
    {
        // cout << count << endl;
        board.add_newCure(color);
        for (City c : tempCard)
        {
            card.erase(c);
        }
    }
    else
    {
        throw invalid_argument("you dont have more card");
    }
    return *this;
}
