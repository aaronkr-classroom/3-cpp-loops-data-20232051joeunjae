//chp2 ex 0.cpp
#include  <iostream>
#include <string>

using std::cin;       using std::cout;
using std::endl;      using std:: string;
int main() {

	cout << "what's your name?";

	string name;
	cin >> name;
	//����ҷ��� �޽��� ����
	const string greeting = "hello, " + name + "!";

	//�λ縻�� �ѷ��� ������ ����
	const int pad = 3;

	//����� ��� �� ���� 
	const int row = pad * 2 + 3; //ù��°, ������ ��°, greeting
	const string::size_type cole = greeting.size() + pad * 2 + 2;


	//�Է� �κа� ��ºκ��� �����Ϸ��� �� ���� �ǳ� ��
	cout << endl;
	
	//rows���� ���� ����Ѵ�
	//�Һ���: ���ݱ��� R���� ���� ���
	for (int r = 0; r != row; ++r) {
		string::size_type c = 0;
		//�Һ���: ���� �࿡�� c���� ���ڸ� ���
		while (c != cole) {
			if (r == pad + 1 && c == pad + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				//�׵θ� ��� ���θ� �Ǻ�
				if (r == 0 || r == row - 1 || c == 0 || c == cole - 1) {
					cout << "#";
				}
				 ++c;



			} // if - else ��



		} //while ��
		cout << endl;
	}//for ��

	return 0;
} //main ��
