#include<iostream>
using namespace std;

class car{
private:
    string name;
public:
    string model;
    float fuel;
    int CC;
public:
    car(string name,string model,float fuel,int CC){
        this->name=name;
        this->model=model;
        this->fuel=fuel;
        this->CC=CC;
    }

    void getname(){
        cout<<name<<endl;
    }
    void seter(string name)
    {
        this-> name= name;
    }
};


int main()
{
    car mycar("BMW","r8",55,5000);

    car yourcar("ODI","r5",50,4000);

    mycar.getname();
    cout<<mycar.model<<endl;
    cout<<mycar.fuel<<endl;
    cout<<mycar.CC<<endl<<endl;

    yourcar.getname();
    cout<<yourcar.model<<endl;
    cout<<yourcar.fuel<<endl;
    cout<<yourcar.CC<<endl;

    mycar.seter("lamborgini");

    mycar.getname();



}
