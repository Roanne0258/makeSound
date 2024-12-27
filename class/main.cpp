#include <iostream>
using namespace std;

// �⺻ Ŭ����: Animal
class Animal {
public:
    // ���� �Լ�: �ڽ� Ŭ�������� ������ ����
    virtual void makeSound() = 0; // ���� ���� �Լ�
};

// �Ļ� Ŭ����: Dog
class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

// �Ļ� Ŭ����: Cat
class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};

// �Ļ� Ŭ����: Fox
class Fox : public Animal {
public:
    void makeSound() {
        cout << "Fox: Hatee-hatee-hatee-ho!" << endl;
    }
};

int main() {
    // Animal Ÿ�� �����ͷ� �پ��� ��ü�� ����Ŵ
    Animal* myAnimals[3];
    Dog myDog;
    Cat myCat;
    Fox myFox;

    // Dog ��ü ����Ű��
    myAnimals[0] = &myDog;
    // Cat ��ü ����Ű��
    myAnimals[1] = &myCat;
    // Fox ��ü ����Ű��
    myAnimals[2] = &myFox;

    for (int i = 0; i < 3; i++)
    {
        myAnimals[i]->makeSound();
    }

    return 0;
}
