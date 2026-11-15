//Task #2 (Default Cnstructor)

#include <iostream>
using namespace std;

class Fan{

    public:
        int speed;
        string color;
    
        void setSpeed(){
            speed =1;
        }

        void setColor(){
            color = "White";
        }

        void showFan(){
            cout << "Fan Speed: " << speed << endl;
            cout << "Fan Color: " << color << endl;
        }


};

int main(){
    Fan fan1;
    fan1.setSpeed();
    fan1.setColor();
    fan1.showFan();
    return 0;
}