#include <iostream>
using namespace std;
class Instance
{
private:
static int count;
public:
Instance()
{
count++;
}
~Instance(){
count--;
}
static int getCount()
{
return count;
}
};
int Instance::count=0;
int main()
{
Instance obj1;
Instance obj2;
cout<<Instance::getCount()<<endl;
{
Instance obj3;
cout<<Instance::getCount()<<endl;
}
cout<<Instance::getCount()<<endl;
return 0;

}
