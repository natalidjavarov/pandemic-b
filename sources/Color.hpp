#pragma once
namespace pandemic{

    enum Color{
        Yellow,
        Black,
        Red,
        Blue
    };
     const std::map<std::string , Color> ColorName{// string to color
            {"Yellow",Color::Yellow},
            {"Red",Color::Red},
            {"Blue",Color::Blue},
            {"Black",Color::Black},
    };
    const std::map<Color , std::string> NameColor{// color to sring
            {Color::Yellow, "Yellow"},
            {Color::Red, "Red"},
            {Color::Blue, "Blue"},
            {Color::Black,"Black"},
    };
}
