#include<iostream>
using namespace std;
class Employee {
	int salary;
public:
	Employee(int = 0);
	void setsalary(int);
	int getSalary()const;
};
Employee::Employee(int s) {
	salary = s;
}
void Employee::setsalary(int s) {
	salary += s;
}
int Employee::getSalary() const {
	return salary;
}
int main() {
	Employee e1(50000), e2(70000), e3(80000);
	e1.setsalary(e2.getSalary() + e3.getSalary());
	e2.setsalary(e1.getSalary() + e3.getSalary());
	e3.setsalary(e2.getSalary());
	cout << e1.getSalary() << endl << e2.getSalary() << endl << e3.getSalary() << endl;
	return 0;
}
