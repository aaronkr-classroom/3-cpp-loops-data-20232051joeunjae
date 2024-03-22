//chp2ex2
#include <iostream>
#include <string>

using std::cin;       using std::cout;
using std::endl;      using std::string;
int main() {

	cout << "what's your name?";

	string name;
	cin >> name;
	//����ҷ��� �޽��� ����
	const string greeting = "hello, " + name + "!";

	//�λ縻�� �ѷ��� ������ ����
	const int pad = 5;

	//����� ��� �� ���� 
	const int rows = pad * 2 + 3; //ù��°, ������ ��°, greeting
	const string::size_type cols = greeting.size() + pad * 2 + 2;


	//�Է� �κа� ��ºκ��� �����Ϸ��� �� ���� �ǳ� ��
	cout << endl;

	//rows���� ���� ����Ѵ�
	//�Һ���: ���ݱ��� R���� ���� ���
	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;
		//�Һ���: ���� �࿡�� c���� ���ڸ� ���
		while (c != cols) {
			if (r == pad + 1 && c == pad + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				//�׵θ� ��� ���θ� �Ǻ�
				if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
					cout << "*";
				}
				else {
					cout << " ";
				}
				++c;



			} // if - else ��



		} //while ��
		cout << endl;
	}//for ��

	return 0;
} //main ��
