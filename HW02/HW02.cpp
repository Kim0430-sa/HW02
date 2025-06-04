//Animal이라는 기본 클래스를 정의 합니다. o
//Animal 클래스에는 `makeSound()`라는 순수 가상 함수를 포함합니다. o
//Animal 클래스를 상속받아 다양한 동물 클래스를 생성합니다.예) Dog, Cat, Cow o
//각 클래스에서 makeSound()함수를 재정의하여 해당 동물의 소리를 출력합니다.o
//메인 함수에서 Animal 타입의 포인터 배열을 선언합니다. o
//Dog, Cat, Cow 자료형의 변수를 선언하고, 배열에 저장해봅니다.
//Animal 배열을 반복문으로 순회하면서 각 동물의 울음소리를 내게 합니다.

#include <iostream>
using namespace std;

//기본 클래스: Animal
class Animal {
public:
	// 가상함수 
	virtual void makeSound() = 0;
};

//파생 클래스 : Dog
class Dog : public Animal {
public:
	void makeSound() {
		cout << "개 소리 : 월 월!" << endl;
	}
};

//파생 클래스 : Cat
class Cat : public Animal {
public:
	void makeSound() {
		cout << "고양이 소리 : 야옹" << endl;
	}
};

//파생 클래스 : Cow
class Cow : public Animal {
public:
	void makeSound() {
		cout << "소 소리 : 음머~" << endl;
	}
};

int main() {
	//Animal 타입의 포인트 배열
	Animal* myAnimal[3];
	Dog myDog; // Dog 자료형 변수 선언
	Cat myCat; // Cat 자료형 변수 선언
	Cow myCow; // Cow 자료형 변수 선언

	myAnimal[0] = &myDog; // Dog 배열 저장
	myAnimal[1] = &myCat; // Cat 배열 저장
	myAnimal[2] = &myCow; // Cow 배열 저장 

	for (int i = 0; i < 3; i++) {
		myAnimal[i]->makeSound(); // 배열을 반복문으로 순회하면서 각 동물의 울음소리를 내게 함
	}

	return 0;
}
