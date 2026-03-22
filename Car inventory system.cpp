#include<iostream>
#include<string>
using namespace std;
class Car{// by default , private
    // default constructor & destructor
    public:

    string make;
    string model;
    float price;
    float apply_discount(float percent_discount){
       price-= price*(percent_discount)/100;
       return price;
    }
    void get_info(){
        cout<< "make :"<< make<<endl;
        cout<< "model :"<< model<<endl;
        cout<< "price :"<< price<<endl;

    }
};

int main(){
    Car Ferrari;
    Ferrari.make="Ferrari";
    Ferrari.model="Ferrari 849 Testarossa";
    Ferrari.price=103700000;
    Ferrari.get_info();

}
