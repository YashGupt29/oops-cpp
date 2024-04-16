#include <iostream>
using namespace std;
class Numbers
{
private:
int num1,num2,num3;
public:
Numbers(int x,int y,int z)
{
num1=x;
num2=y;
num3=z;
}

friend int findMax(Numbers obj);
};

int findMax(Numbers obj)
{
int max=obj.num1;
if(obj.num2>max)
{
max=obj.num2;
}
if(obj.num3>max)
{
max=obj.num3;
}
return max;
}

int main()
{
int a,b,c;
cin>>a>>b>>c;
Numbers nums(a,b,c);
cout<<findMax(nums)<<endl;
return 0;
}
