#include <iostream>
#define SIZE 5

using namespace std;
int show(int b[])
{
    for(int i = 0; i < SIZE; i++){
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}

int test1(int []);

int change(int b[])
{
    for(int i = 0; i < SIZE; i++){
        b[i] = {100};
    }
    return 0;
}

int main()
{
    int score[SIZE] = {89, 54, 73, 95, 71};
    cout << "�ǥͦ��Z=";
    show(score);
    change(score);
    cout << "���ᦨ�Z=" << endl;
    show(score);
    return 0;
}




int test1(int b[])
{
    int sum = 0;
    for(int i = 0; i < SIZE; i++){
        sum += b[i];
    }

}

/* �}�C��޼ƬO�ǻ���}�A�N��Otest1()��X�ӫD�ǥͦ��Z�M��? */
