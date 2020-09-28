#include<iostream>

using namespace std;

class Circle{

private:
    int radius;
    string name;
public:

    Circle():Circle(1,"circle"){
    }
    Circle(int a,string n):radius(a),name(n)
    {}
    double getArea(){

        return radius*radius*3;
    }
    double getCircumference(){
        return 2*radius*3;
    }
    void compareName(Circle a)
    {
        if(a.name==name)
            cout<<"이름이 동일합니다."<<endl;

        else
            cout<<"이름이 다릅니다."<<endl;
    }
    string getname(){
        return name;
    }

};

void compareCircle(Circle a, Circle b)
{
    if(a.getArea()>b.getArea())
    {
        cout<<"반지름이 더 큰 원의 둘레은:  "<<a.getCircumference()<<endl;
        cout<<"반지름이 더 큰 원의 면적은:  "<<a.getArea()<<endl;
    }
}
int main()
{

    Circle cir1;
    cout<<cir1.getname()<<"'s area :  "<<cir1.getArea()<<endl;
    cout<<"----------------------------"<<endl;


    Circle cir2(4,"circle");
    Circle cir3(2,"원");

    compareCircle(cir2, cir3);

    cout<<"----------------------------"<<endl;

    cir1.compareName(cir2);
    cir2.compareName(cir3);



}


