#include <iostream>
using namespace std;

class Factorial{
private:
int number;
int factorial;

public:
Factorial(int num)
{
number=num;
factorial=1;
}

void calculateFactorial(){
for(int i=1;i<=number;i++)
{
factorial=factorial*i;
}
}

void printFact(){

cout<<"Factorial Of " <<number<<" Is "<<factorial<<endl;
}
};

int main()
{
int num;
cout<<"Enter a number";
cin >>num;
Factorial fact(num);
fact.calculateFactorial();
fact.printFact();
return 0;
}
