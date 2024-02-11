#include <iostream>
#include <string>

int main(){
    std::string myString = "Test";
    std::cout << (char) toupper(myString[1]) << '\n';
    return 0;
}