#include <string>
#include <iostream>
using namespace std;

int main()
{
    string a("123");
    string b = "123";
    
    cout << boolalpha;
    cout << (a < b) << '\n';
    cout << noboolalpha;
    cout << (a == b) << '\n';
      
    return 0;
}