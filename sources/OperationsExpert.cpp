#include "OperationsExpert.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

using namespace std;
using namespace pandemic;

Player& OperationsExpert::build(){
    board.add_researchStation(cur_city);
    // cout << boolalpha;
    // cout << board.has_researchStation(cur_city) << endl;

    return *this;
}

