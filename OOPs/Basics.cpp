//ABSTRATICON AND ENSCAP AND STATIC KEYWWORD
//
//```cpp
#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc_num,balance;
    int amount;
    static int total_cus;
    static int total_balance;

    public:
    void deposit(int amount){
        if(amount>0){    //encapsulation
            balance+=amount;
            total_balance+=amount;
        }
    }
    void withdraw(int amount){
        if(amount<=balance&&amount>0){
            balance-=amount;
            total_balance-=amount;

        }
    }

    Customer(string name,int acc_num,int balance){
        this->name = name;
        this->acc_num = acc_num;
        this->balance = balance;
        total_cus++;
        total_balance+=balance;
        

    }
    void display(){
        cout<<name<<" "<<acc_num<<" "<<balance<<" "<<endl;
    }
    static void acces_static(){ // can only acces static one.
        
        cout<<"Total Customer:"<<total_cus<<endl<<"Total Balance:"<<total_balance<<endl;
    }
   

};
int Customer::total_cus=0;
int Customer::total_balance=0;
int main(){
    Customer A1("HIMANSHU",123,1000);
    Customer A2("KRISHNA",1234,2000);
    A1.display();
    A2.display();
    Customer A3("SHIVAM",1231,3000);
    A3.display();
    A1.deposit(800);
    A2.withdraw(500);
    Customer::acces_static();  // acces through class.
   
 }
//------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;

class Customer
{
    string Name;
    int acc_num;
    int balance;
    public:
    //paramatrized constructor
    Customer(string Name,int acc_num,int balance){
        this->Name = Name;
        this->acc_num = acc_num;
        this->balance = balance;
    }

    //   use one of these 
    //inline consructor
    inline Customer(string a,int b,int c):Name(a),acc_num(b),balance(c){

    }

    void display(){
        cout<<Name<<endl<<acc_num<<endl<<balance;

    }
};
int main(){

    Customer A1("rohit",123,21323);
    Customer A2("pahul",234,5988);
    A1.display();
    A2.display();
}

//Constructer and Destructer

#include<iostream>
using namespace std;

class Customer
{
    string Name;
    
    public:
    Customer(){
        Name = "4";
        cout<<"COnst"<<Name<<endl
    }
    
    Customer(string Name){
        this->Name = Name;
        cout<<"the constructor called is:"<<Name<<endl;
    }
    ~ Customer(){ //DESTROY THE DYNAMMICALLY ALKLOCTED MEMORY
        
        cout<<"destructer called is:"<<Name<<endl;


    }

};
int main(){

    Customer A1("1"),A2("2"),A3("3");
    Customer *A4 = new Customer ;
    delete A4;

}