#include <iostream>
#include "ClassA.h"
//struct는 멤버 변수들의 집합으로 구성된 타입
struct ObjectA 
{
	int x;
	float y;
};

//class는 멤버(변수, 함수)들의 집합으로 구성된 타입
class ObjectB 
{
public:
	int x;
	void MyFunction() 
	{
		std::cout << "Do Something~" << std::endl;
	}	//함수가 들어가는 것이 차이
};
//--------------------------------------------

class Dog 
{
public:
	int age;

	//void DoSomething( Dog* this ) 
	void DoSomething() 
	{
		//this->age = 1;
		age = 1;
	}
	void Bark();
};

void Dog::Bark()
{
	std::cout << "Bark" << std::endl;
}

class Point2D 
{
public:
	int m_X;
	int m_Y;

	void Print() 
	{
		std::cout << m_X << "," << m_Y << std::endl;
	}
};

int main() 
{
	ObjectA a;	//ObjectA 타입의 a라는 변수	 - 변수 선언
	a.x = 1;
	a.y = 1.0f;

	ObjectB b;	//ObjectB 클래스의 b라는 인스턴스	- 인스턴스화
	b.x = 1;
	b.MyFunction();

	ObjectB *p;
	p = &b;
	p->x = 10;	//(*p).x = 10;
	p->MyFunction();	//(*p).MyFunction();
	//-----------------------------------------
	
	Dog baekgoo;

	baekgoo.age = 1;

	//-------------------------
	ClassA t;
	t.DoSomething();

	//-------------------------
	Point2D pt1;
	pt1.m_X = 1;
	pt1.m_Y = 1;
	pt1.Print();
}

void ClassA::DoSomething()
{
	std::cout << "ClassA" << std::endl;
}
