#include <iostream>
#include <string>
using namespace std;
class UndergraduateStudent { 
public:
	void warn() {
		cout << "학사경고\n";
	}
};
class DormitoryStudent {
public:
	void warn() {
		cout << "벌점부여\n";
	}
};
// multiple inheritance
class UndergraduateDormitoryStudent 
	: public UndergraduateStudent, public DormitoryStudent 
{
public:
};
int main()
{
	UndergraduateDormitoryStudent uds1;
	//uds1.warn();  // ambiguous
	uds1.DormitoryStudent::warn();
	return 0;
}