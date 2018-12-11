 #include<bits/stdc++.h>
 using namespace std;
 class Student
 {
 private:
     string name;
     double cgpa;
 public :
     //string name;
     string phn;
     //double cgpa;

     Student(string name, string phn, double cgpa) //constructor
     {
         this->name = name;
         this->phn = phn;
         this->cgpa = cgpa;
     }

     void setPhn(string phn)
     {
         this->phn = phn;
     }
     double getcgpa()
     {
         return cgpa; //abstraction
     }
 };
 int main()
 {
     Student object1("nasif","axc",3.48) , object2("jubu","bxc",2.70);
     object1.setPhn("123456789");
     object2.setPhn("987654321");
     //object1.name = "nasif";
     //object1.phn = "01957066874";
     //object1.cgpa=3.48;

     //object2.name = "joba";
     //object2.phn = "01957066874";
     //object2.cgpa=2.70;

     cout << object1.getcgpa() << " " << object2.phn << endl;

     return 0;
 }
