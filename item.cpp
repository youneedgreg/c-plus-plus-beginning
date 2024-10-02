#include <iostream>
using namespace std;

class item
{
    private:
    string itemName, itemCost;
    
    public:
    void itemDisplay()
    {
        cout<<"Item Name"<<itemName << "\t";
        cout<<"Item cost"<<itemCost << "\n";
    }
    void itemAdd()
    {
        cout<< "enter item name\n";
        cin>>itemName;
        cout<<"enter item cost\n";
        cin>>itemCost;
    }
};
int main(){
    item item1, item2;
    
    item1.itemAdd();
    item2.itemAdd();
    
    item1.itemDisplay();
    item2.itemDisplay();
}