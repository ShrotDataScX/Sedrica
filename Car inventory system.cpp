#include<iostream>
#include<string>
using namespace std;
class Car{// by default , private
    // default constructor & destructor
    private:
    float price;
    float apply_discount(float percent_discount){
       price-= price*(percent_discount)/100;
       return price;
    }

    public:

    string make;
    string model;
    
    void set_Price(float p){
        price =p;
    }

    float get_Price(){
        return price;
    }
    float getDiscountedPrice(float percent_discount){
        return apply_discount(percent_discount);

    }
    
    void get_info(){
        cout<< "make :"<< make<<endl;
        cout<< "model :"<< model<<endl;
        
    }
};

int main(){
    Car Ferrari;
    Ferrari.make="Ferrari";
    Ferrari.model="Ferrari 849 Testarossa";
    Ferrari.get_info();
    float p;
    cout<<"Enter original price to be set: ";
    cin>>p;
    Ferrari.set_Price(p) ;
    float percent_discount;
    cout<<"Enter percentage discount to be applied: ";
    cin>> percent_discount;
    cout<<"original price is:"<<Ferrari.get_Price()<<endl;
    cout<<"Discounted price is:"<<Ferrari.getDiscountedPrice(percent_discount)<<endl;
    // Ferrari.price  >>>would show error that its not accessible as it is private
    // cout<<Ferrari.apply.discount(1.2) >>>would also show error that its not accessible as it is private

}
