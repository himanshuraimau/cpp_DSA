// Single Inheritance

#include<iostream>
using namespace std;

class Human{
    
    protected:
    
    string name;
    int age;

    public:
    Human(string name, int age){
        this->name = name;
        this->age = age;

    }

    void work(){
        cout<<"\n I am working";
    } 

};

class Student:public Human
{
    int roll_num,fees;

    public:

    Student(string name, int age , int roll_num , int fees): Human(name, age)
    {
        //this->name = name; or we can call parent constructer here like 
        //this->age = age;
        this->roll_num = roll_num;
        this->fees = fees;

    }
    void display(){
        cout<<name<<" "<<age<<" "<<roll_num<<" "<<fees<<endl; 
    }
};

int main(){

    Student A1("Himanshu",19,16,99990);
    A1.display();
}

//------------------------------------------------------------------------------------------------------

// multi level inheritance
#include<iostream>
using namespace std;

class Person{
    
    protected:
    
    string name;
    

    public:

    void introduce(){
        cout<<" Hello my name is "<<name<<endl;
    } 

};
class Employee: public Person{
    protected:
    int salary;

    public:
    void monthly_salary(){
        cout<<"My Monthly salary is "<<salary;
    }

};

class Manager: public Employee{
    public:
    string Department;

    Manager(string name, int salary,string Department){
        this->name = name;
        this->salary = salary;
        this->Department = Department;
    };
    void work(){
        cout<<" I am leading "<<Department<<" Department."<<endl;
    }


};

int main(){
    Manager A1("Himanshu",200000,"Finance");
    A1.work();
    A1.introduce();
    A1.monthly_salary();
}


//----------------------------------------------------------------------------------------------------------

// Multiple Inheritance
#include<iostream>
using namespace std;

class Engineer{
    public:
    string specialization;

    void work(){
        cout<< " I have specializtion in "<<specialization<<endl;

    }
};

class Youtuber{
    public:
    int subscribers;
    
    public:
    void contentCreator(){
        cout<<" I have a subscriber base of "<<subscribers<<endl;
    }

};

class CodeTeacher: public Engineer,public Youtuber{
    public:
    string name;

    CodeTeacher(string name , string specialization,int subscriber){
        this->name = name;
        this->specialization = specialization;
        this->subscribers = subscriber;
       };
       void showCase(){
          cout<<"My name is "<<name<<endl;
          work();
          contentCreator();

       }
};
int main(){

   CodeTeacher S2 ("Himanshu","CSE",490348);
   S2.showCase();
   
}




//----------------------------------------------------------------------------------------------------
// heiercal Inheritance--Giving Properties to others

#include<iostream>
using namespace std;

class Human{
    
    protected:
    
    string name;
    int age;

    public:
    Human(){

    }
    Human(string name, int age){
        this->name = name;
        this->age = age;

    }

    void work(){
        cout<<"\n I am working";
    } 

};

class Student:public Human
{
    int roll_num,fees;

    public:

    Student(string name, int age , int roll_num , int fees): Human(name, age)
    {
        //this->name = name; or we can call parent constructer here like 
        //this->age = age;
        this->roll_num = roll_num;
        this->fees = fees;

    }
    void display(){
        cout<<name<<" "<<age<<" "<<roll_num<<" "<<fees<<endl; 
    }
};

class Teacher: public Human{
     int salary;
     public:
     Teacher(int salary,string name,int age){
        this->salary = salary;
        this->name = name;
        this->age = age;

     };

     void display(){
        cout<<name<<" "<<age<<" "<<salary<<" "<<endl;
     }
};

int main(){

    Teacher A1(4738,"Himanshu",23);
    A1.display();
}




//---------------------------------------------------------------------------------------------------------------------------
// Hybrid Inheritance

#include<iostream>
using namespace std;

class Student{
    public:

    void Boyprint(){
        cout<<"I am Student\n";
    }
};
class Male{
    
    public:
    void Maleprint(){
        cout<<"I am Male\n";

    }
};
class Female{
     public:
     void Femaleprint(){
        cout<<"I am a Female\n";
     }
};

class Boy: public Student,public Male
{
    public:

    void Boyprint(){
        cout<<"I am boy\n";
    }
};

class Girl: public Student, public Female{
    public:
    void Girlprint(){
        cout<<"I am a Girl\n";

    }
};




int main(){
    Girl G1;
    G1.Girlprint();
    Boy B1;
    B1.Boyprint();
}


//--------------------------------------------------------------------------------------------------------------------

// Multipath Inheritance
#include<iostream>
using namespace std;

class Human {
public:
    string name;
};

class Engineer : public virtual Human {
public:
    string specialization;
};

class Youtuber : public virtual Human {
public:
    int subscribers;
};

class CodeTeacher : public Engineer, public Youtuber {
public:
    int salary;

    CodeTeacher(string name, string specialization, int subscribers, int salary) {
        this->name = name;
        this->specialization = specialization;
        this->subscribers = subscribers;
        this->salary = salary;
    }

    // You might want to add a function to display information
    void showCase() {
        cout << "Name: " << name << "\nSpecialization: " << specialization
             << "\nSubscribers: " << subscribers << "\nSalary: " << salary << endl;
    }
};

int main() {
    CodeTeacher S2("Himanshu", "CSE", 490348, 45);
    S2.showCase();
    return 0;
}


//----------------------------------------------------------------------------------

