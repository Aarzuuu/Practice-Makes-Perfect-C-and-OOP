#include<iostream>
using namespace std;
class students{
    public:
    string Name;
    int Age;
    string Company;
    void intro(){
cout<<"Name "<<Name<<endl;
cout<<"Age "<<Age<<endl;
cout<<"Company "<<Company<<endl;
    }
    students(string name, int age, string company){
        Name = name;
        Age = age;
        Company = company;
    }
};
int main(){
students s1 = students("hamna", 24, "facebook");
s1.intro();
}

