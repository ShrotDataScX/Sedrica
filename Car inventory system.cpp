#include<iostream>
#include<string>
using namespace std;
class Car{
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

class ElectricCar: public Car{
    public:
    float battery_range;
    void get_info(){
        cout<< "make :"<< make<<endl;
        cout<< "model :"<< model<<endl;
        cout<< "battery_range in miles:"<< battery_range<<endl; //override
        
}
};

class SportsCar: public Car{
    public:
    float top_speed;
    void get_info(){
        cout<< "make :"<< make<<endl;
        cout<< "model :"<< model<<endl;
        cout<< "top_speed in mph:"<< top_speed<<endl ;// override
        
    

    }
};


int main(){
    SportsCar Ferrari;
    Ferrari.make="Ferrari";
    Ferrari.model="Ferrari 849 Testarossa";
    Ferrari.top_speed=200;
    Ferrari.get_info();
    float p_Ferrari;
    cout<<"Enter original price to be set: ";
    cin>>p_Ferrari;
    Ferrari.set_Price(p_Ferrari) ;
    float percent_discount_Ferrari;
    cout<<"Enter percentage discount to be applied: ";
    cin>> percent_discount_Ferrari;
    cout<<"original price is:"<<Ferrari.get_Price()<<endl;
    cout<<"Discounted price is:"<<Ferrari.getDiscountedPrice(percent_discount_Ferrari)<<endl;
    // Ferrari.price  >>>would show error that its not accessible as it is private
    // cout<<Ferrari.apply.discount(1.2) >>>would also show error that its not accessible as it is private

    ElectricCar Tesla;
    Tesla.make="Tesla";
    Tesla.model="Tesla Model S";
    Tesla.battery_range=410;
    Tesla.get_info();
    float p_Tesla;
    cout<<"Enter original price to be set: ";
    cin>>p_Tesla;
    Tesla.set_Price(p_Tesla) ;
    float percent_discount_Tesla;
    cout<<"Enter percentage discount to be applied: ";
    cin>> percent_discount_Tesla;
    cout<<"original price is:"<<Tesla.get_Price()<<endl;
    cout<<"Discounted price is:"<<Tesla.getDiscountedPrice(percent_discount_Tesla)<<endl;
    // Tesla.price  >>>would show error that its not accessible as it is private
    // cout<<Tesla.apply.discount(1.2) >>>would also show error that its not accessible as it is private
return 0;
}




