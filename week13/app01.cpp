#include "dynamicarray.h"

int main()
{
    DynamicArray da1(5);

    da1.setAt(0, 54);
    cout << da1.getAt(0);

    return 0;
}