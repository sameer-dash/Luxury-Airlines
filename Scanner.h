#include "EFScanner.h"

EFScanner::int int_scanner()
{
    while(!std::cin>>int_val)
    {
        std::cout<<"Please enter an integer value: "<<std::endl;
        std::cin.clear();
        std::cin.ignore();
    }
    return int_val;
}
EFScanner::float float_scanner()
{
    while(!std::cin>>float_val)
    {
        std::cout<<"Please enter a real number constant: "<<std::endl;
        std::cin.clear();
        std::cin.ignore();
    }
    return float_val;
}
EFScanner::double double_scanner()
{
    while(!std::cin>>double_val)
    {
        std::cout<<"Please enter a real number constant: "<<std::endl;
        std::cin.clear();
        std::cin.ignore();
    }
    return double_val;
}
EFScanner::char char_scanner()
{
    while(!std::cin>>char_val)
    {
        std::cout<<"Please enter a character only: "<<std::endl;
        std::cin.clear();
        std::cin.ignore();
    }
    return char_val;
}
EFScanner::std::string string_scanner()
{
    std::getline(std::cin,string_val);
    std::cin.clear();
    std::cin.ignore();
    return string_val;
}