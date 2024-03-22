//chp3ex0.cpp
//중간고사, 기말고사, 그리고 과제 점수 몇개를 받고
// 마지막 결과 점수를 계산하기
#include <ios>
#include <iomanip>
#include <iostream>
#include <string>

using std::cin; using std::setprecision;
using std::cout; using std::string;
using std::endl; using std::streamsize;

int main() {
	//학생의 이름 묻고 입력하기
	cout << "you name: ";
	string name;
	cin >> name;
	cout << "helllo, " << name << "!" << endl;

	//중간고사와 기말 고사 점수를 묻고 받기

	cout << "중간기말 점수를 입력하세요: ";
	double midterm, final;
	cin >> midterm >> final;
	//과제 점수를 물음
	cout << "enter all homework grades"
		"followed by eof:";
	//지금까지 입력된 과제 점수의 개수와 합
	int count = 0; //과제 
	double sum = 0;

	//입력을 위한 변수
	double x; //cin에서 사용
	//불변성: 지금까지 count개의 점수를 받았으면 입력받은 점수의 합은 sum
	while (cin >> x) {
		++count; //과제 1,2,3,4,5
		sum += x;
	



	}
	//결과를 출력
	streamsize prec = cout.precision();
	cout << "final grade" << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * sum / count
		<< setprecision(prec) << endl;







	return 0;
}