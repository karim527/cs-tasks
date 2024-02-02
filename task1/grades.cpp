#include <iostream>

using namespace std;

int main()
{
   string name1;
   cout <<"what is studend1 name/";
   cin >>name1;

   string id1;
   cout <<"what is studend1 id/";
   cin >>id1;

   int grade1;
   cout <<"what is studend1 grade/";
   cin >>grade1;



   string name2;
   cout <<"what is studend2 name/";
   cin >>name2;

    string id2;
   cout <<"what is studend2 id/";
   cin >>id2;

   int grade2;
   cout <<"what is studend2 grade/";
   cin >>grade2;

   cout<<"students grades in math\n";

   cout << name1 << " (with id " << id1 << ")had grade/ " << grade1 << "\n";

   cout << name2 << " (with id " << id2 << ")had grade/ " << grade2 << "\n";


   cout<<"the averdge grade is"<<(grade1+grade2)/2<<"\n";







    return 0;
}
