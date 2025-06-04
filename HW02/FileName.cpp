#include <iostream>
using namespace std;

// 기본 클래스 Animal
class Animal {
public:
    virtual void makeSound() = 0; // 순수 가상 함수
    virtual ~Animal() {} // 가상 소멸자
};

// Dog 클래스
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "멍멍" << endl;
    }
};

// Cat 클래스
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "야옹" << endl;
    }
};

// Cow 클래스
class Cow : public Animal {
public:
    void makeSound() override {
        cout << "음메" << endl;
    }
};

int main() {
    // Animal 타입 포인터 배열 선언
    Animal* animals[3];

    // Dog, Cat, Cow 객체 생성 및 배열에 저장
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    // 배열 순회하며 울음소리 출력
    for (int i = 0; i < 3; ++i) {
        animals[i]->makeSound();
    }

    // 메모리 해제
    for (int i = 0; i < 3; ++i) {
        delete animals[i];
    }

    return 0;
}
