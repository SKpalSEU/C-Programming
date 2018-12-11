#include <bits/stdc++.h>
using namespace std;
class Info
{
protected:
    string name;
    string phn;
    void setphn(string phn)
    {
        this->phn = phn;
    }

public:
   virtual string get()
             {
                return name;
             }
             //string get(int x)
             //{
               //  return phn;
             //}
};
class teacher : public Info
{
    friend demo();
private:
    int salary;
public:

    teacher (string name, string phn, int salary)
    {
        this->name = name;
        this->phn = phn;
        this->salary = salary;
    }

    int getsalary()
    {
        return salary;
    }
    string get()
{
    return "Teacher name is = "+name;

}
};
class student : public Info
{
private:
    double cgpa;
public :
    student(string name, string phn, double cgpa)
    {
        this->name = name;
        this->phn = phn;
        this->cgpa =  cgpa;
    }
double getcgpa()
{
    return cgpa;
}
string get()
{
    return "Student name is = "+name;

}
};
class demo
{
public:
    void print (teacher X)
    {
        cout << X.salary << endl;
    }
};
int main()
{
    Info *X;
    student object1("Hemel", "acc", 3.45);
    teacher object2("shovon", "bcc", 22);
    X = &object1;
    cout<< X->get() << endl;
    X = &object2;
    cout<< X->get() << endl;
}
