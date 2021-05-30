
#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"
#include "Color.hpp"
#include <iostream>
#include <map>

using namespace pandemic;
using namespace std;

Player &Player::take_card(City c)
{
    card.insert(c);
    return *this;
}
Player &Player::drive(City c)
{
    if (board.is_connect(cur_city, c))
    {
        cur_city = c;
    }
    else
    {
        throw invalid_argument("the city is not connected");
    }
    return *this;
}
Player &Player::fly_direct(City c)
{
    if (c == cur_city)
    {
        throw invalid_argument("you are in this city");
    }
    if (card.count(c) > 0)
    {
        cur_city = c;
        card.erase(c);
    }
    else
    {
        throw invalid_argument("you didnt have this city card");
    }
    return *this;
}
Player &Player::fly_charter(City c)
{
    //cout << card.count(Cairo) << endl;

    if (c == cur_city)
    {
        throw invalid_argument("you are in this city");
    }
    if (card.count(cur_city) > 0 ){
        card.erase(cur_city);
        cur_city = c;
    }
    else
    {
        throw invalid_argument("you didnt have this city card");
    }
    return *this;
}
Player &Player::fly_shuttle(City c)
{
    if (c == cur_city)
    {
        throw invalid_argument("yoy are in this city");
    }
    if (board.has_researchStation(cur_city) && board.has_researchStation(c))
    {
        cur_city = c;
    }
    else
    {
        throw invalid_argument("the city when you want to fly is didnt have a researchStation");
    }
    return *this;
}
Player &Player::discover_cure(Color color)
{
    if (board.is_cure(color))
    {
        return *this;
    }
    if (!(board.has_researchStation(cur_city)))
    {
        throw invalid_argument("in this cur_city dont have a researchStation");
    }
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
Player &Player::build()
{
    if (board.has_researchStation(cur_city))
    {
        return *this;
    }
    if (card.count(cur_city) > 0)
    {
        board.add_researchStation(cur_city);
        card.erase(cur_city);
    }
    else
    {
        throw invalid_argument("you dont have a card for  drive this city");
    }

    return *this;
}
Player &Player::treat(City c)
{

    if (c != cur_city)
    {
        throw invalid_argument("you are not in this city");
    }
    if (board[c] == 0)
    {
        throw invalid_argument("in this city the cure is 0");
    }
    if (board.is_cure(board.get_color(c)))
    {
        board[c] = 0;
    }
    else
    {
        board[c]--;
    }

    return *this;
}
std::string Player::role() const
{
    return "";
}
void Player::remove_cards()
{
    card.clear();
}
