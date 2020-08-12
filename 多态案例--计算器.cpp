#include<iostream>
using namespace std;

class Calculator {
public:
	int getResult(string oper) {
		if (oper == "+") {
			return m_Num1 + m_Num2;
		}
		else if (oper == "-") {
			return m_Num1 - m_Num2;
		}
		else if (oper == "*") {
			return m_Num1 * m_Num2;
		}
	}

public:
	int m_Num1;
	int m_Num2;
};

void test01() {
	//��ͨʵ��
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 20;

	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;

	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;

	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
}

//��̬ʵ��

class AbstractCalculator {
public:
	virtual int getResult() {
		return 0;
	}

	int m_Num1;
	int m_Num2;
};

//�ӷ�
class AddCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 + m_Num2;
	}
};

//����
class SubCalculator : public AbstractCalculator {
	int getResult() {
		return m_Num1 - m_Num2;
	}
};

//�˷�
class MulCalculator : public AbstractCalculator {
	int getResult() {
		return m_Num1 * m_Num2;
	}
};

void test02() {
	//�����ӷ�������
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;
	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;

	//����������
	abc = new SubCalculator;
	abc->m_Num1 = 20;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;

	//�˷�������
	abc = new MulCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;

}

int main() {
	test02();

	system("pause");
	return 0;
}