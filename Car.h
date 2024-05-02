#ifndef CAR_H
#define CAR_H

class Car{
    protected:
        int price = 0;
        int emissions = 0;


    public:
        Car();
        Car(int price);

        int get_price();
        void set_price(int newPrice);

        int get_emission();

        virtual void drive(int kms);

};




#endif