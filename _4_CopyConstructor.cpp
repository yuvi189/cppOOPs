#include<iostream>
#include<string>
using namespace std;
class Yuvraj
{
    public:
    int age;
    string name;
    Yuvraj(int age,string name)//parameterized constructor 
    {
        this-> age=age;
        this -> name = name;
    }

    Yuvraj(Yuvraj &m)/* This is a copy constructor.
                        Here,m is the object from which the 
                        details for the new object are 
                        being copied
                    */ 
                    
    {
        this ->age=m.age;// x.age is the age of obj1 in this case 
        this ->name=m.name;// x.name is the name of obj1 in this case
    }
    Yuvraj(Yuvraj *obj)
    {
        this->age=obj->age;
        this->name=obj->name;
    }

};
int main()
{
    Yuvraj obj1(18,"ghodu");

    Yuvraj *obj3=new Yuvraj(13,"minty");
    Yuvraj obj4(obj3);

    Yuvraj obj2(obj1);//creating an object "obj2" with the same details as obj1
                     // copy constructor will be called
                      
    cout<<"The name of obj1 is :- "<<obj1.name<<endl;
    cout<<"The age of obj1 is :- "<<obj1.age<<endl;
    cout<<"The name of obj2 is :- "<<obj2.name<<endl;
    cout<<"The age of obj2 is :- "<<obj2.age<<endl;

    cout<<"The name of obj3 is :- "<<obj3->name<<endl;
    cout<<"The age of obj3 is :- "<<obj3->age<<endl;

    cout<<"The name of obj4 is :- "<<obj4.name<<endl;
    cout<<"The age of obj4 is :- "<<obj4.age<<endl;

}