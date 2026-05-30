#include "dynamicarray.h"

int main()
{
    DynamicArray da1(5);

    try {
        da1.setAt(0, 54);
        cout << da1.getAt(0) << '\n';
        //cout << da1.getAt(7) << '\n';
        da1.setAt(6, -19);
        //cout << da1.getAt(6) << '\n';
    }
    catch (int err) {
        cout << "예외발생 : 할당불가\n";
    }


    return 0;
}