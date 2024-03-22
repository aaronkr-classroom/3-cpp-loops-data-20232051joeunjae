//chp2 ex 0.cpp
#include  <iostream>
#include <string>

using std::cin;       using std::cout;
using std::endl;      using std:: string;
int main() {

	cout << "what's your name?";

	string name;
	cin >> name;
	//출력할려는 메시지 구성
	const string greeting = "hello, " + name + "!";

	//인사말을 둘러싼 공백의 개수
	const int pad = 3;

	//출력할 행과 열 개수 
	const int row = pad * 2 + 3; //첫번째, 마지막 번째, greeting
	const string::size_type cole = greeting.size() + pad * 2 + 2;


	//입력 부분과 출력부분을 구분하려고 한 행을 건너 뜀
	cout << endl;
	
	//rows개의 행을 출력한다
	//불변성: 지금까지 R개의 행을 출력
	for (int r = 0; r != row; ++r) {
		string::size_type c = 0;
		//불변성: 현재 행에서 c개의 문자를 출력
		while (c != cole) {
			if (r == pad + 1 && c == pad + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				//테두리 출력 여부를 판별
				if (r == 0 || r == row - 1 || c == 0 || c == cole - 1) {
					cout << "#";
				}
				 ++c;



			} // if - else 끝



		} //while 끝
		cout << endl;
	}//for 끝

	return 0;
} //main 끝
