#include<iostream>
using namespace std;

class CPU {
public:
	virtual void calculate() = 0;
};

//�����Կ�
class VideoCard {
public:
	//������ʾ����
	virtual void display() = 0;
};

//�����ڴ�����
class Memory {
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};

//������
class Computer {
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//�ṩ�����ĺ���
	void work() {
		//������������������ýӿ�
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}

	//�ṩ�����������ͷ�3���������
	~Computer() {
		//�ͷ�CPU���
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}
		//�ͷ��Կ����
		if (m_vc != NULL) {
			delete m_vc;
			m_vc = NULL;
		}
		//�ͷ��ڴ������
		if (m_mem != NULL) {
			delete m_mem;
			m_mem = NULL;
		}
	}

private:
	CPU* m_cpu; //CPU ָ�����
	VideoCard* m_vc; //�Կ�ָ�����
	Memory* m_mem; // �ڴ���ָ�����
};

//���峧��
//Intel����
class InterCPU : public CPU {
public:
	virtual void calculate() {
		cout << "Inter��CPU��ʼ������" << endl;
	}
};

class InterVideoCard : public VideoCard {
public:
	virtual void display() {
		cout << "Inter���Կ���ʼ��ʾ��" << endl;
	}
};

class InterMemory : public Memory {
public:
	virtual void storage() {
		cout << "Inter���ڴ�����ʼ�洢��" << endl;
	}
};

//lenevo����
class LenevoCPU : public CPU {
public:
	virtual void calculate() {
		cout << "Lenevo��CPU��ʼ������" << endl;
	}
};

class LenevoVideoCard : public VideoCard {
public:
	virtual void display() {
		cout << "Lenevo���Կ���ʼ��ʾ��" << endl;
	}
};

class LenevoMemory : public Memory {
public:
	virtual void storage() {
		cout << "Lenevo���ڴ�����ʼ�洢��" << endl;
	}
};

void test01() {
	//��һ̨�������
	CPU* interCpu = new InterCPU;
	VideoCard* interCard = new InterVideoCard;
	Memory* interMem = new InterMemory;

	cout << "��һ̨���Կ�ʼ����" << endl;

	//������һ̨����
	Computer* computer1 = new Computer(interCpu, interCard, interMem);
	computer1->work();
	delete computer1;

	cout << "--------------------------------" << endl;
	cout << "�ڶ�̨���Կ�ʼ������" << endl;
	//�����ڶ�̨����
	Computer* computer2 = new Computer(new LenevoCPU, new LenevoVideoCard, new LenevoMemory);
	computer2->work();
	delete computer2;

	cout << "--------------------------------" << endl;
	cout << "����̨���Կ�ʼ������" << endl;

	Computer* computer3 = new Computer(new LenevoCPU, new LenevoVideoCard, new LenevoMemory);
	computer3->work();
	delete computer3;


}

int main() {
	test01();

	system("pause");
	return 0;
}