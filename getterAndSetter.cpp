#include <iostream>

class Stove
{

private:
    int temprature;

public:
    void getTemprature()
    {
        std::cout << "Temprature is " << this->temprature << "\n";
    }

    void setTemprature(int temprature)
    {
        this->temprature = temprature;
    }
    Stove(){};
    Stove(int temprature)
    {
        this->setTemprature(temprature);
    }
};

int main()
{
    Stove stove1;
    Stove stove2(20);
    stove1.getTemprature();
    stove2.setTemprature(50);
    stove2.getTemprature();
    return 0;
}