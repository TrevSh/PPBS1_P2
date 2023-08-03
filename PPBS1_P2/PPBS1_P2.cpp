//This program demonstrates char to int and int to char conversions. Very cool program
#include <iostream>

int main()
{
    char c = 'x';           //Has the int value of 120 in 8-bit ASCII.
    int i1 = c;
    int i2 = 'x';
    char c2 = i1;           //Converting the int to char in its ASCII char value

    int a{ 10000000 };          //initializing using list notation. Accepts raw values. Outlaws narrowing
    char b = a;             //Shoving a large number into a char results in "narrowing". char b{a} would result in an error as it would conflict with the above notation. 
    std::cout <<"1000000 as a char is: " << b << "\n\n";

    std::cout <<i2 <<"\n" << c2 <<"\n\n";

    double d = 0;
    std::cout << "Enter a number (float or int): "<<"\n";
    while (std::cin >> d) {                 
        int i = d;
        char c = i;
        int i2 = c;
        std::cout << "d == " << d<<"\n";
        std::cout << "i == " << i << "\n";
        std::cout << "i2 == " << i2 << "\n";
        std::cout << "char( "<<c <<" ) \n";
    }
    system("pause");
}