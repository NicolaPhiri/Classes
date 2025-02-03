#include <iostream>
using namespace std;
//Declaring class
class Animal
{
public:
bool alive=true;
 void eat()
{
    cout<<"The animal is eating";
}
};
//Sub-class, it is a class that creates something that is only specifict to that class. Eg only dogs bark
class Dog: public Animal
{
    public:
    void bark()
    {
        cout<<"The dog barks";
    }
};
class Cat: public Animal
{
    public:
    void meow()
    {
        cout<<"The cat meows";
    }
};
int main()
{
    //Creating the object.
    //A class is a data type, so you can just mention the class itself when calling it into the class
    Dog dog;//The class is in Uppercase but the object is in lowercase.
    Cat cat;
    cout<<dog.alive<<'\n';
    dog.eat();//the".""is showing that it's being inherited
    dog.bark();
    cat.meow();
    cat.eat();
    return 0;
}