#include<iostream>
using namespace std;
class Encap{
    private:
    int age;
    string name;
    public:
    void setvalue(int b,string c){
    age=b;
    name=c;
    cout<<age<<endl;
    cout<<name<<endl;
}
};
int main()
{
    Encap E;
    E.setvalue(22, "Hamna");
}
