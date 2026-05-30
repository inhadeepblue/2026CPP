#include "dynamicarray.h"

int main()
{
    DynamicArray da1(5);

    bool ok = da1.setAt(0, 54);
    if (ok == 1)
        cout << "할당 성공\n";
    else
        cout << "할당 실패\n";

    cout << da1.getAt(0) << '\n';
    //cout << da1.getAt(7) << '\n';
    ok = da1.setAt(6, -19);
    if (ok == 1)
        cout << "할당 성공\n";
    else
        cout << "할당 실패\n";
    //cout << da1.getAt(6) << '\n';

    return 0;
}