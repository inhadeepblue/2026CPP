#include <string>
#include <iostream>
using namespace std;

string reverse(const string& original)
{
    string temp(original);
    int size = original.size();
    int i = 0;
    while (i < size)
    {
        temp[i] = original[size - 1 - i];
        i++;
    }
    temp[i] = '\0';
    return temp;
}
int main()
{
    string original, copy;
    getline(cin, original);
    cout << original << endl;
    copy = reverse(original);
    cout << copy;
    return 0;
}