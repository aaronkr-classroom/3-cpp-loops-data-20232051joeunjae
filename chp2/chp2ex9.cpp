//chp2ex9

#include <iostream>
#include <string>
using std::cin;       using std::cout;
using std::endl;      using std::string;
int main() {
   

    cout << " 첫번째 숫자를 입력하세요";
    string x;
    cin >> x;
    cout << " 두번째숫자를 입력하세요";
    string y;
    cin >> y;
    


    if (x > y) {
        cout <<  x << "가" << y << "보다 큽니다" << endl;
    }
    else if (y>x){
        cout << y << "가" << x << "보다 큽니다" << endl;
    }
    else {

        cout << "같습니다" << endl;
    }







    
    return 0;
}