#include <iostream>
#include <memory>

class Rectangle
{
    private:
        int length,width;
    public:
        Rectangle();
        void set();
        int area();
};

Rectangle :: Rectangle()
{
    length = 0;
    width = 0;
}

void Rectangle ::set()
{
    std::cout<<"Enter lenth and width ";
    std::cin>>length>>width;
}

int Rectangle ::area()
{
    return length*width;
}

int main()
{
    std::shared_ptr<Rectangle> rt(new Rectangle());
    std::shared_ptr<Rectangle> rt1 = rt;
    rt->set();
    std::cout<<"Area of rectange : "<<rt->area()<<"\n";
    std::cout<<"Area of rectange 2nd : "<<rt1->area()<<"\n";
    std::cout<<rt.use_count();

    return 0;
}
