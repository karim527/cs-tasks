#include <iostream>

using namespace std;

int main()
{
int num1, num2, num3, num4, num5;
cin>>num1>>num2>>num3>>num4>>num5;

int averge1 =(num1+num2+num3+num4+num5)/5;

int sum1 =(num1+num2+num3)/(num4+num5);

int averge2 =(num1+num2+num3)/3;
int averge3 =(num4+num5)/2;

int averge4=(averge2 / averge3);

cout<<averge1<<"\n";
cout<<sum1<<"\n";
cout<<averge4<<"\n";


cout<<sum1*2/3<<"\n";













    return 0;
}
