#include<stdio.h>
#include <string>

using namespace std;

struct Person {
    string name;
    int age;
    float height;
};

int main() {
    
    Person person = {"John Doe", 30, 1.75};

    
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Height: " << person.height << " meters" << endl;

    return 0;
}
