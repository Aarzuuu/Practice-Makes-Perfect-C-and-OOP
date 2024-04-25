#include<iostream>
using namespace std;
class employee{
    public:
string name;
string company;
int age;
void intro(){
    cout<<"name "<<name<<endl;
    cout<<"age "<<age<<endl;
    cout<<"company "<<company<<endl;
}
};
int main(){
    employee e1;
    e1.name="Hamna";
    e1.age=19;
    e1.company="google";
    e1.intro();
}