#include "dynamicarray.h"
#include "myexception.h"

int main()
{  
    try {
        DynamicArray da1(5);
        da1.setAt(0, 54);
        cout << da1.getAt(0) << '\n';
 //       cout << da1.getAt(7) << '\n';
        da1.setAt(6, -19);
        //cout << da1.getAt(6) << '\n';
    }
    catch (int err) {
        cout << "에러코드: " << err <<"\n";
    }
    //catch (string err) {
    catch (const char* err) {
        cout << err << "\n";
    }
    catch (const MyException& err) {
        cout << "에러코드 : " << err.errorCode << '\n';
        cout << "에러설명 : " << err.errorDescription << '\n';
        cout << "에러주소 : " << err.errorAddress << '\n';
    }
    catch (...) {
        cout << "에러발생\n";
    }

    return 0;
}