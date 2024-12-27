#include <iostream>
using namespace std;

// 기본 클래스: Animal
class Animal {
public:
    // 가상 함수: 자식 클래스에서 재정의 가능
    virtual void makeSound() = 0; // 순수 가상 함수
};

// 파생 클래스: Dog
class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

// 파생 클래스: Cat
class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};

// 파생 클래스: Fox
class Fox : public Animal {
public:
    void makeSound() {
        cout << "Fox: Hatee-hatee-hatee-ho!" << endl;
    }
};

int main() {
    // Animal 타입 포인터로 다양한 객체를 가리킴
    Animal* myAnimals[3];
    Dog myDog;
    Cat myCat;
    Fox myFox;

    // Dog 객체 가리키기
    myAnimals[0] = &myDog;
    // Cat 객체 가리키기
    myAnimals[1] = &myCat;
    // Fox 객체 가리키기
    myAnimals[2] = &myFox;

    for (int i = 0; i < 3; i++)
    {
        myAnimals[i]->makeSound();
    }

    return 0;
}
