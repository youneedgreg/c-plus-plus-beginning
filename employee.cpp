#include <iostream>
using namespace std;

class employee
{
private:
string empName, empNumber;

public:
void empDisplay() 
{
cout<<"Emloyee Name=" << empName << "\n";
}
void empAdd() 
{
cout << "Enter a  Name";
cin >> empName;
}};
int main()
{
employee emp1,emp2;

emp1.empAdd();
emp2.empAdd();

emp1.empDisplay();
emp2.empDisplay();

return 0;
