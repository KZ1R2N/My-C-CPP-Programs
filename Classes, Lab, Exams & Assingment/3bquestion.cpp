#include<iostream>
using namespace std;

class animal {
    int age;
    string name;

public:
    void setName(string a){
        name = a;
    }
    void setAge(int a){
        age = a;
      
    }
    int getAge() {
         return age;
    }
    string getName(){
        return name;
    }
};

class addAnimalClass {
    int noOfAnimal = 3;
    animal ob[3];
public:
    void addAnimal(){
        string temp;
        int t;
        for(int i = 0; i < 3; i++){
            cout << "Enter name: ";
            cin >> temp;
            ob[i].setName(temp);
            cout << "Enter age: ";
            cin >> t;
            ob[i].setAge(t);
        }
    }

    void removeLion(){
        for(int i = 0; i < 3; i++){
            if(ob[i].getName() == "Lion" || ob[i].getName() == "lion"){
                noOfAnimal--;
                for(int j = i; j < 2; j++){
                    ob[j] = ob[j+1];
                }
                cout << "Lion removed" << endl;
                break;
            }
        }
    }

    void printAnimal(){
        for(int i = 0; i < noOfAnimal; i++){
            cout << i+1 << "/ Name: " << ob[i].getName() << endl;
            cout << "Age: " << ob[i].getAge() << endl;
        }
    }
};

int main(){
    addAnimalClass ob1;
    ob1.addAnimal();
    ob1.removeLion();
    ob1.printAnimal();
}