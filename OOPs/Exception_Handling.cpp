#include<iostream>
#include<exception>
using namespace std;

class Customer{
    string name;
    int balance,account_num;

    public:
    Customer(string name, int balance,  int account_num)
   {
    this ->name = name;
    this->balance = balance;
    this->account_num = account_num;
   };

   void deposit(int amount){
     if(amount>0){
        balance+= amount;
        cout<<amount<<" is credited succesfully"<<endl;

      }
     else{
       throw  runtime_error("Amount should be greater than 0");
     }

   };

   void withdraw(int amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << amount << " is debited successfully"<<endl;
    } else if(amount<0) {
      throw runtime_error("Amount should be greater than 0");
    } 
    else {
        throw  runtime_error("Error: Insufficient funds");
    }
};

};

 int main(){
    Customer C1("himanshu",2000,123);
    try{
      C1.deposit(1000);
      C1.withdraw(5000);
      C1.deposit(1000);  // if any error occurs it will                                         come out of the try block
    }
      catch(const runtime_error &msg){
        cout<<"Exception Occured"<<msg.what()<<endl;
      }
   catch(const bad_alloc &msg){
        cout<<"Exception Occured"<<msg.what()<<endl;
      }
   catch(...){
     cout<<"Exception Occured"<<endl;
   }
   
 }
 