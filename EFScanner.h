#include<iostream>
#include<string>
class EFScanner
{
    private:
    int int_val;
    float float_val;
    double double_val;
    char char_val;
    std::string string_val;

    public:
    int int_scanner();
    float float_scanner();
    double double_scanner();
    char char_scanner();
    std::string string_scanner();
};
