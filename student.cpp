#include <iostream>
using namespace std;

class student{
  private:
  string studName, studGPA;
  
  public:
  void studDisplay()
  {
  cout<<"\tstudent name is\t"<<studName;
  cout<<"\tand student GPA is\t"<<studGPA;
  }
  
  void studAdd()
  {
  cout<<"input student name";
  cin>>studName;
  cout<<"input student GPA";
  cin>>studGPA;
  }
};

int main(){
    student student1, student2;
    
    student1.studAdd();
    student2.studAdd();
    
    student1.studDisplay();
    student2.studDisplay();
    
    return 0;
    
}