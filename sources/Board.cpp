#include <iostream>
#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"
#include "string"
#include <fstream>
using namespace std;
using namespace pandemic;

namespace pandemic
{
    Board::Board()
    {
    dataList[City::Algiers].neighbors.insert({City::Madrid, City::Paris, City::Istanbul, City::Cairo});
    dataList[City::Atlanta].neighbors.insert({City::Chicago, City::Miami, City::Washington});
    dataList[City::Baghdad].neighbors.insert({City::Tehran, City::Istanbul, City::Cairo, City::Riyadh, City::Karachi});
    dataList[City::Bangkok].neighbors.insert({City::Kolkata, City::Chennai, City::Jakarta, City::HoChiMinhCity, City::HongKong});
    dataList[City::Beijing].neighbors.insert({City::Shanghai, City::Seoul});
    dataList[City::Bogota].neighbors.insert({City::MexicoCity, City::Lima, City::Miami, City::SaoPaulo, City::BuenosAires});
    dataList[City::BuenosAires].neighbors.insert({City::Bogota, City::SaoPaulo});
    dataList[City::Cairo].neighbors.insert({City::Algiers, City::Istanbul, City::Baghdad, City::Khartoum, City::Riyadh});
    dataList[City::Chennai].neighbors.insert({City::Mumbai, City::Delhi, City::Kolkata, City::Bangkok, City::Jakarta});
    dataList[City::Chicago].neighbors.insert({City::SanFrancisco, City::LosAngeles, City::MexicoCity, City::Atlanta, City::Montreal});
    dataList[City::Delhi].neighbors.insert({City::Tehran, City::Karachi, City::Mumbai, City::Chennai, City::Kolkata});
    dataList[City::Essen].neighbors.insert({City::London, City::Paris, City::Milan, City::StPetersburg});
    dataList[City::HoChiMinhCity].neighbors.insert({City::Jakarta, City::Bangkok, City::HongKong, City::Manila});
    dataList[City::HongKong].neighbors.insert({City::Bangkok, City::Kolkata, City::HoChiMinhCity, City::Shanghai, City::Manila, City::Taipei});
    dataList[City::Istanbul].neighbors.insert({City::Milan, City::Algiers, City::StPetersburg, City::Cairo, City::Baghdad, City::Moscow});
    dataList[City::Jakarta].neighbors.insert({City::Chennai, City::Bangkok, City::HoChiMinhCity, City::Sydney});
    dataList[City::Johannesburg].neighbors.insert({City::Kinshasa, City::Khartoum});
    dataList[City::Karachi].neighbors.insert({City::Tehran, City::Baghdad, City::Riyadh, City::Mumbai, City::Delhi});
    dataList[City::Khartoum].neighbors.insert({City::Cairo, City::Lagos, City::Kinshasa, City::Johannesburg});
    dataList[City::Kinshasa].neighbors.insert({City::Lagos, City::Khartoum, City::Johannesburg});
    dataList[City::Kolkata].neighbors.insert({City::Delhi, City::Chennai, City::Bangkok, City::HongKong});
    dataList[City::Lagos].neighbors.insert({City::SaoPaulo, City::Khartoum, City::Kinshasa});
    dataList[City::Lima].neighbors.insert({City::MexicoCity, City::Bogota, City::Santiago});
    dataList[City::London].neighbors.insert({City::NewYork, City::Madrid, City::Essen, City::Paris});
    dataList[City::LosAngeles].neighbors.insert({City::SanFrancisco, City::Chicago, City::MexicoCity, City::Sydney});
    dataList[City::Madrid].neighbors.insert({City::London, City::NewYork, City::Paris, City::SaoPaulo, City::Algiers});
    dataList[City::Manila].neighbors.insert({City::HongKong, City::Taipei, City::SanFrancisco, City::HoChiMinhCity, City::Sydney});
    dataList[City::MexicoCity].neighbors.insert({City::LosAngeles, City::Chicago, City::Miami, City::Lima, City::Bogota});
    dataList[City::Miami].neighbors.insert({City::Atlanta, City::MexicoCity, City::Washington, City::Bogota});
    dataList[City::Milan].neighbors.insert({City::Essen, City::Paris, City::Istanbul});
    dataList[City::Montreal].neighbors.insert({City::Chicago, City::Washington, City::NewYork});
    dataList[City::Moscow].neighbors.insert({City::StPetersburg, City::Istanbul, City::Tehran});
    dataList[City::Mumbai].neighbors.insert({City::Karachi, City::Delhi, City::Chennai});
    dataList[City::NewYork].neighbors.insert({City::Montreal, City::Washington, City::London, City::Madrid});
    dataList[City::Osaka].neighbors.insert({City::Taipei, City::Tokyo});
    dataList[City::Paris].neighbors.insert({City::Algiers, City::Essen, City::Madrid, City::Milan, City::London});
    dataList[City::Riyadh].neighbors.insert({City::Baghdad, City::Cairo, City::Karachi});
    dataList[City::SanFrancisco].neighbors.insert({City::LosAngeles, City::Chicago, City::Tokyo, City::Manila});
    dataList[City::Santiago].neighbors.insert({City::Lima});
    dataList[City::SaoPaulo].neighbors.insert({City::Bogota, City::BuenosAires, City::Lagos, City::Madrid});
    dataList[City::Seoul].neighbors.insert({City::Beijing, City::Shanghai, City::Tokyo});
    dataList[City::Shanghai].neighbors.insert({City::Beijing, City::HongKong, City::Taipei, City::Seoul, City::Tokyo});
    dataList[City::StPetersburg].neighbors.insert({City::Essen, City::Istanbul, City::Moscow});
    dataList[City::Sydney].neighbors.insert({City::Jakarta, City::Manila, City::LosAngeles});
    dataList[City::Taipei].neighbors.insert({City::Shanghai, City::HongKong, City::Osaka, City::Manila});
    dataList[City::Tehran].neighbors.insert({City::Baghdad, City::Moscow, City::Karachi, City::Delhi});
    dataList[City::Tokyo].neighbors.insert({City::Seoul, City::Shanghai, City::Osaka, City::SanFrancisco});
    dataList[City::Washington].neighbors.insert({City::Atlanta, City::NewYork, City::Montreal, City::Miami}); 
    

//city->color

     dataList[City::Algiers].color = Black;
     dataList[City::Atlanta].color  = Blue;
     dataList[City::Baghdad].color  = Black;
     dataList[City::Bangkok].color  = Red;
     dataList[City::Beijing].color = Red;
     dataList[City::Bogota].color  = Yellow;
    dataList[City::BuenosAires].color  = Yellow;
    dataList[City::Cairo].color  = Black;
     dataList[City::Chennai].color  = Black;
     dataList[City::Chicago].color  = Blue;
     dataList[City::Delhi].color  = Black;
     dataList[City::Essen].color  = Blue;
     dataList[City::HoChiMinhCity].color  =Red;
     dataList[City::HongKong].color  = Red;
     dataList[City::Istanbul].color  = Black;
     dataList[City::Jakarta].color  = Red;
    dataList[City::Johannesburg].color  = Yellow;
     dataList[City::Karachi].color  = Black;
     dataList[City::Khartoum].color  = Yellow;
     dataList[City::Kinshasa].color  = Yellow;
     dataList[City::Kolkata].color  = Black;
     dataList[City::Lagos].color  = Yellow;
     dataList[City::Lima].color  = Yellow;
    dataList[City::London].color  = Blue;
    dataList[City::LosAngeles].color  = Yellow;
     dataList[City::Madrid].color  = Blue;
     dataList[City::Manila].color  = Red;
    dataList[City::MexicoCity].color  = Yellow;
     dataList[City::Miami].color  = Yellow;
     dataList[City::Milan].color  = Blue;
    dataList[City::Montreal].color  = Blue;
    dataList[City::Moscow].color  = Black;
     dataList[City::Mumbai].color  = Black;
     dataList[City::NewYork].color  = Blue;
    dataList[City::Osaka].color  = Red;
    dataList[City::Paris].color  = Blue;
    dataList[City::Riyadh].color  = Black;
     dataList[City::SanFrancisco].color  = Blue;
     dataList[City::Santiago].color  = Yellow;
     dataList[City::SaoPaulo].color  = Yellow;
     dataList[City::Seoul].color  = Red;
     dataList[City::Shanghai].color  = Red;
     dataList[City::StPetersburg].color  = Blue;
     dataList[City::Sydney].color  = Red;
     dataList[City::Taipei].color  = Red;
    dataList[City::Tehran].color  = Black;
    dataList[City::Tokyo].color  = Red;
    dataList[City::Washington].color  = Blue;

//string name citytostring;

     dataList[City::Algiers].name = "Algiers";
     dataList[City::Atlanta].name  = "Atlanta";
     dataList[City::Baghdad].name  = "Baghdad";
     dataList[City::Bangkok].name  ="Bangkok";
     dataList[City::Beijing].name = "Beijing";
     dataList[City::Bogota].name  = "Bogota";
    dataList[City::BuenosAires].name  = "BuenosAires";
    dataList[City::Cairo].name  = "Cairo";
     dataList[City::Chennai].name  = "Chennai";
     dataList[City::Chicago].name  = "Chicago";
     dataList[City::Delhi].name = "Delhi";
     dataList[City::Essen].name  = "Essen";
     dataList[City::HoChiMinhCity].name  ="HoChiMinhCity";
     dataList[City::HongKong].name  = "HongKong";
     dataList[City::Istanbul].name  = "Istanbul";
     dataList[City::Jakarta].name  = "Jakarta";
    dataList[City::Johannesburg].name  = "Johannesburg";
     dataList[City::Karachi].name  = "Karachi";
     dataList[City::Khartoum].name  = "Khartoum";
     dataList[City::Kinshasa].name  = "Kinshasa";
     dataList[City::Kolkata].name  = "Kolkata";
     dataList[City::Lagos].name  = "Lagos";
     dataList[City::Lima].name  = "Lima";
    dataList[City::London].name  = "London";
    dataList[City::LosAngeles].name  = "LosAngeles";
     dataList[City::Madrid].name  = "Madrid";
     dataList[City::Manila].name = "Manila";
    dataList[City::MexicoCity].name  = "MexicoCity";
     dataList[City::Miami].name  = "Miami";
     dataList[City::Milan].name  = "Milan";
    dataList[City::Montreal].name  = "Montreal";
    dataList[City::Moscow].name  = "Moscow";
     dataList[City::Mumbai].name  = "Mumbai";
     dataList[City::NewYork].name  ="NewYork";
    dataList[City::Osaka].name  = "Osaka";
    dataList[City::Paris].name = "Paris";
    dataList[City::Riyadh].name  = "Riyadh";
     dataList[City::SanFrancisco].name  = "SanFrancisco";
     dataList[City::Santiago].name  = "Santiago";
     dataList[City::SaoPaulo].name  = "SaoPaulo";
     dataList[City::Seoul].name  = "Seoul";
     dataList[City::Shanghai].name  = "Shanghai";
     dataList[City::StPetersburg].name  = "StPetersburg";
     dataList[City::Sydney].name  = "Sydney";
     dataList[City::Taipei].name  = "Taipei";
    dataList[City::Tehran].name  = "Tehran";
    dataList[City::Tokyo].name  = "Tokyo";
    dataList[City::Washington].name = "Washington";

    }

    int &Board::operator[](City c)
    {
        return dataList[c].diseaseLevel;
    }

    bool Board::is_clean()
    {
        for (const auto &City : dataList)
        {
            if (City.second.diseaseLevel != 0)
            {
                return false;
            }
        }
        return true;
    }

    void Board::remove_cures()
    {
        cureList.clear();

    }

    void Board::remove_station()
    {
        for (auto City : dataList)
        {
            City.second.researchStation = false;
        }
    }
    bool Board::is_connect(City c1, City c2)
    {
        return dataList[c1].neighbors.count(c2) > 0;
    }
    bool Board::has_researchStation(City c){
     return  dataList[c].researchStation;
      }

    void Board::add_researchStation(City c){
         dataList[c].researchStation=true;
    }
    Color Board::get_color(City c){
        return dataList[c].color;
    }
       void Board::add_newCure(Color color){
         cureList[color]=true;
  }
   bool  Board::is_cure(Color color){
       return cureList[color];
   }

          ostream &operator<<(std::ostream &out, Board &board){
        cout << "***********************PANDEMIC GAME!***********************\n" << endl;
        for(auto city : board.dataList){
            string name = (city.second).name;
            int level = board[city.first];
            if(level != 0){
                cout << "City: " << name << ", Disease Level :" << level <<endl;
            }
        }
        cout << "^^^^^^^^^^^^^^^^^^CURE LIST:^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n" << endl;
        for(auto color : board.cureList){
            if(color.second==true){
                string color_name = NameColor.find(color.first)->second;
                cout << color_name << endl;
            }
        }
        cout << "\n\n^^^^^^^^^^^^^^^^^^^^STATION LIST:^^^^^^^^^^^^^^^^^^^^^^^^^^\n" << endl;
        for(auto station : board.dataList){
            if(station.second.researchStation != false){
                string station_name = station.second.name;
                cout << station_name <<endl;
            }
        }
        cout << "\n\n\n*********************GAME OVER*********************" << endl;
        return out;
    }
    
    
}
