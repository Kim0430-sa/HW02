#include <iostream>
using namespace std;

// �⺻ Ŭ���� Animal
class Animal {
public:
    virtual void makeSound() = 0; // ���� ���� �Լ�
    virtual ~Animal() {} // ���� �Ҹ���
};

// Dog Ŭ����
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "�۸�" << endl;
    }
};

// Cat Ŭ����
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "�߿�" << endl;
    }
};

// Cow Ŭ����
class Cow : public Animal {
public:
    void makeSound() override {
        cout << "����" << endl;
    }
};

int main() {
    // Animal Ÿ�� ������ �迭 ����
    Animal* animals[3];

    // Dog, Cat, Cow ��ü ���� �� �迭�� ����
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    // �迭 ��ȸ�ϸ� �����Ҹ� ���
    for (int i = 0; i < 3; ++i) {
        animals[i]->makeSound();
    }

    // �޸� ����
    for (int i = 0; i < 3; ++i) {
        delete animals[i];
    }

    return 0;
}
