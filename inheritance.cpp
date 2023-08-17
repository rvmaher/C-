#include <iostream>

class Shape
{
public:
    int volume;
    int area;
};

class Square : public Shape
{
public:
    int size;
    Square(int size)
    {
        this->size = size;
        this->area = size * size;
        this->volume = size * size * size;
    }
};

int main()
{
    Square sq(10);
    std::cout << "Volume is" << sq.volume << " \n";
    std::cout << "Area is" << sq.area << " \n";
    return 0;
}