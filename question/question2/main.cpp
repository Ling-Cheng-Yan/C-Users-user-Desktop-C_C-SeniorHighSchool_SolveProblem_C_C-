#include <iostream>

using namespace std;

int &max(int &a, int &b) //������
{
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}


int main()
{
    int i = 10;
    int j = 20;
    max1(i,j) = 100; // �֨��Ϊk�A���ޡC
    cout << "i=" << i << "j=" << j << endl;
    return 0;
}





/* ��ƫŧi+�ۭq���e�g�bmain�e�A�O�g�� int max(int &a, int &b){ }�A�Ӧbmain���n�ϥήɬO
�gmax(x,y) (���]�n�n�Ǥ޼ƬOx�My) ��?*/  //���g�bmain�e�N�n�A�N���ݭn�ŧitest1(int, int)�F�A�i�������gmain()�@�ˡC

