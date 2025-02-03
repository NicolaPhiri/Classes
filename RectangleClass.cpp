#include <iostream>
using namespace std;
class Rectangle{
    //encapsulation
    //A private class means that there is more control over who has access to these variables
    private:
    int Length=0;
    int Width=0;

    public:
    int getLength(){
        return Length;
    }
    void setLength(int Length){
        this->Length=Length;
    }

    int getWidth(){
        return Width;
    }
    void setWidth(int Width){
        this->Width=Width;
    }
};
int main()
{
    Rectangle rectangle;
    rectangle.setLength(15);// the 15 is the value that is being used as a parameter
    rectangle.setWidth(12);
    cout<<"The length is:";
    cout<<rectangle.getLength()<<endl; //use "getLength" since the length has been set alrady and in this it just need to be displayed
    cout<<"And the width is:";
    cout<<rectangle.getWidth();
    return 0;
}