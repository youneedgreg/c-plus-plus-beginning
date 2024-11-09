#include <iostream>
using namespace std;

class myArray
{
private:
int v[100]; //array doubles

public:
void insert()
{ 
    for(int j; j<10; j++){
        cout<<"input 10 numbers"<<(j+1)<<";";
        cin>>v[j];
    }
 } //array, at index

void display()
{for(int j=0; j<10; j++) //display items
cout << v[j] << " ";
cout << endl;
}
};

int main()
{
myArray arr; //create an object

arr.insert(); 
arr.display();

return 0;
}
