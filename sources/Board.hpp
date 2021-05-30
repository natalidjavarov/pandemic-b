#pragma once
#include "City.hpp"
#include "Color.hpp"
#include <stdio.h>
#include <map>
#include <set>
#include "string"
#include <iostream>
using namespace std;
namespace pandemic
{

    class Board
    {
        
    private:
        struct data
        {
            std::set<City> neighbors; // neighbors
            int diseaseLevel = 0; // ramat mahala
            bool researchStation = false;
            Color color;
            string name;  //city to string
            string colors; // color to string
        };
        
                    std::map<City, data> dataList;
                   std::map<Color,bool> cureList;
              
    public:

        Board();
        bool is_connect(City c1, City c2);
        bool has_researchStation(City c);
        int &operator[](City c);
        bool is_clean();
        void remove_cures();
        void remove_station();
        void add_researchStation(City c);
        Color get_color(City c);
        bool is_cure(Color color);
        void add_newCure(Color color);
        friend std::ostream &operator<<(std::ostream &out, Board &board);
    };
}
