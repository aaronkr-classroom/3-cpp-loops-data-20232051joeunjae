//chp2ex9

#include <iostream>
#include <string>
using std::cin;       using std::cout;
using std::endl;      using std::string;
int main() {
   

    cout << " ù��° ���ڸ� �Է��ϼ���";
    string x;
    cin >> x;
    cout << " �ι�°���ڸ� �Է��ϼ���";
    string y;
    cin >> y;
    


    if (x > y) {
        cout <<  x << "��" << y << "���� Ů�ϴ�" << endl;
    }
    else if (y>x){
        cout << y << "��" << x << "���� Ů�ϴ�" << endl;
    }
    else {

        cout << "�����ϴ�" << endl;
    }







    
    return 0;
}