// Functional overloading

#include<iostream>
using namespace std;


class Area{
    public:

    int Areaa(int r){
        return 3.14*r*r;
    }
    int Areaa(int l,int b){
        return l*b;
    }
};

int main(){
    Area A1,A2;
    cout<<A1.Areaa(4)<<endl;
    cout<<A2.Areaa(4,5);

}

// Operator Overloading

#include<iostream>
using namespace std;

class Complex{
    
    int real,img;

    public:
    Complex(){

    };

    Complex(int real,int img){
        this->real = real;
        this->img = img;
    };

    void display(){
        cout<<real<<" +i"<<img<<endl;
    }
    Complex operator +(Complex &C)
    {
                 Complex ans;
                 ans.real = real+ C.real;
                 ans.img = img+ C.img;
                 return ans;
    }
};

int main(){
    Complex C1(34,5);
    Complex C2(36,2);
    Complex C3 = C1+C2;  // C1.fun(C2)
    C3.display();
}

// Virtual Function


#include<iostream>
using namespace std;

class Animal{

    public:
    virtual void speak(){
        cout<<"Sing\n";
     }  // or we can write a pure virtual function that is abstract class -- virtual void speak()=0;
};
class Dog: public Animal
{
    public:
     void speak(){
        cout<<"Bark\n";
     }
};

int main(){
    Animal *p;
    p = new Dog();
    p->speak();
}