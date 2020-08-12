#include<iostream>
using namespace std;

class Person {
public:
	int m_A;
	mutable int m_B;

public:
	Person() {
		m_A = 0;
		m_B = 0;
	}
};