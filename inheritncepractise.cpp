#include<iostream>
using namespace std;
class Book{
    public:
    string author;
    string title;
    int year;
    int ISBN;
};
class Novel: public Book{
    public:
void show(){
    cout<<"Name "<<author<<endl;
    cout<<"Novel "<<title<<endl;
    cout<<"Year "<<year<<endl;
    cout<<"ISBN "<<ISBN<<endl;
}
};
class Text_Book: public Book{
    public:
void disp(){
    cout<<"Name "<<author<<endl;
    cout<<"Book "<<title<<endl;
    cout<<"Year "<<year<<endl;
    cout<<"ISBN "<<ISBN<<endl;
}
};
int main(){
    Novel n1;
    n1.author="Elizebeth";
    n1.title="One Day";
    n1.year=2016;
    n1.ISBN=140896;
    n1.show();
    Text_Book t1;
    t1.author="Mario";
    t1.title="C++_OOP";
    t1.year=2018;
    t1.ISBN=6789830;
    t1.disp();
}
