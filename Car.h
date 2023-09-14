#ifndef CAR_H
#define CAR_H

class Car {
    protected:
        int _price;
        int _emission;

    public:
        car();
        car(int price);
        
        int get_price() const;
        int set_price(int price);

        int get_emission () const;
        int set_emission(int emission);
        

        


        virtual void drive (int kms);


};
#endif