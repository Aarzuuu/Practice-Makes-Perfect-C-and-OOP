#include<iostream>
using namespace std;
class car{
    public:
 string model;
 int year;
 string price;
 string colour;
 car (string m, int y, string p, string c)
 { model=m;
   year=y;
   price=p;
   colour=c; 
 }
 void car_intro(){
    cout<<model<<" looks good in "<<colour<<endl;
 }
};
int main(){
car sportage = car ("KIA",24,"60k","Black");
sportage.car_intro();
return 0;
}
