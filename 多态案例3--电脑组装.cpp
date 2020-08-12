#include<iostream>
using namespace std;

class CPU {
public:
	virtual void calculate() = 0;
};

//抽象显卡
class VideoCard {
public:
	//抽象显示函数
	virtual void display() = 0;
};

//抽象内存条类
class Memory {
public:
	//抽象的存储函数
	virtual void storage() = 0;
};

//电脑类
class Computer {
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//提供工作的函数
	void work() {
		//让零件工作起来，调用接口
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}

	//提供析构函数，释放3个电脑零件
	~Computer() {
		//释放CPU零件
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}
		//释放显卡零件
		if (m_vc != NULL) {
			delete m_vc;
			m_vc = NULL;
		}
		//释放内存条零件
		if (m_mem != NULL) {
			delete m_mem;
			m_mem = NULL;
		}
	}

private:
	CPU* m_cpu; //CPU 指针零件
	VideoCard* m_vc; //显卡指针零件
	Memory* m_mem; // 内存条指针零件
};

//具体厂商
//Intel厂商
class InterCPU : public CPU {
public:
	virtual void calculate() {
		cout << "Inter的CPU开始计算了" << endl;
	}
};

class InterVideoCard : public VideoCard {
public:
	virtual void display() {
		cout << "Inter的显卡开始显示了" << endl;
	}
};

class InterMemory : public Memory {
public:
	virtual void storage() {
		cout << "Inter的内存条开始存储了" << endl;
	}
};

//lenevo厂商
class LenevoCPU : public CPU {
public:
	virtual void calculate() {
		cout << "Lenevo的CPU开始计算了" << endl;
	}
};

class LenevoVideoCard : public VideoCard {
public:
	virtual void display() {
		cout << "Lenevo的显卡开始显示了" << endl;
	}
};

class LenevoMemory : public Memory {
public:
	virtual void storage() {
		cout << "Lenevo的内存条开始存储了" << endl;
	}
};

void test01() {
	//第一台电脑零件
	CPU* interCpu = new InterCPU;
	VideoCard* interCard = new InterVideoCard;
	Memory* interMem = new InterMemory;

	cout << "第一台电脑开始工作" << endl;

	//创建第一台电脑
	Computer* computer1 = new Computer(interCpu, interCard, interMem);
	computer1->work();
	delete computer1;

	cout << "--------------------------------" << endl;
	cout << "第二台电脑开始工作了" << endl;
	//创建第二台电脑
	Computer* computer2 = new Computer(new LenevoCPU, new LenevoVideoCard, new LenevoMemory);
	computer2->work();
	delete computer2;

	cout << "--------------------------------" << endl;
	cout << "第三台电脑开始工作了" << endl;

	Computer* computer3 = new Computer(new LenevoCPU, new LenevoVideoCard, new LenevoMemory);
	computer3->work();
	delete computer3;


}

int main() {
	test01();

	system("pause");
	return 0;
}