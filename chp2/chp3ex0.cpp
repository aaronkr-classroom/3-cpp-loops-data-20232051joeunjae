//chp3ex0.cpp
//�߰����, �⸻���, �׸��� ���� ���� ��� �ް�
// ������ ��� ������ ����ϱ�
#include <ios>
#include <iomanip>
#include <iostream>
#include <string>

using std::cin; using std::setprecision;
using std::cout; using std::string;
using std::endl; using std::streamsize;

int main() {
	//�л��� �̸� ���� �Է��ϱ�
	cout << "you name: ";
	string name;
	cin >> name;
	cout << "helllo, " << name << "!" << endl;

	//�߰����� �⸻ ��� ������ ���� �ޱ�

	cout << "�߰��⸻ ������ �Է��ϼ���: ";
	double midterm, final;
	cin >> midterm >> final;
	//���� ������ ����
	cout << "enter all homework grades"
		"followed by eof:";
	//���ݱ��� �Էµ� ���� ������ ������ ��
	int count = 0; //���� 
	double sum = 0;

	//�Է��� ���� ����
	double x; //cin���� ���
	//�Һ���: ���ݱ��� count���� ������ �޾����� �Է¹��� ������ ���� sum
	while (cin >> x) {
		++count; //���� 1,2,3,4,5
		sum += x;
	



	}
	//����� ���
	streamsize prec = cout.precision();
	cout << "final grade" << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * sum / count
		<< setprecision(prec) << endl;







	return 0;
}