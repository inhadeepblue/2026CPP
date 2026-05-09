#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	int id = 1;
};

class UndergraduateStudent : virtual public Student{ 
public:
	void warn() {
		cout << "학사경고\n";
	}
};
class DormitoryStudent : virtual public Student {
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
	void test() {
		cout << DormitoryStudent::id << '\n';
		cout << UndergraduateStudent::id << '\n';
		cout << id << '\n';
	}
};
int main()
{
	UndergraduateDormitoryStudent uds1;
	//uds1.warn();  // ambiguous
	uds1.DormitoryStudent::warn();
	uds1.test();
	return 0;
}