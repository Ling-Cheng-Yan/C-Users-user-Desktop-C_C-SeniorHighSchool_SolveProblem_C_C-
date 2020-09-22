#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*  char id[11]
        0  1  2  3  4  5  6  7  8  9  10
        A  1  2  3  4  5  6  7  8  9  \0
        10 1  2  3  4  5  6  7  8  9
        1 + 9*0 + 8*1 + 7*2 + ... +     8*1 + 9 * 1

        int num[10]
        0  1  2  3  4  5  6  7  8  9
        -  1  2  3  4  5  6  7  8  9  */

    char id[11];
    while(cin >> id) {
        /*  cout << id << endl;

            '0' = 48  --> 0
            '1' = 49  --> 1
            '2' = 50  --> 2
            '3' = ?   --> 3
            id[i] = ?  --> ?    */

        int num[10];
        int sum = 0;
        for(int i=1; i<sizeof(id)-1; i++) {
            num[i] = id[i] - '0';

            if(i == 9) {
                //cout << num[i] * 1;
                sum += num[i] * 1;
            } else {
                //cout << num[i] * (9-i);
                sum += num[i] * (9-i);
            }
        }
        //cout << endl;

        char x = id[0]; // A
        int y; // 10

        /*  f(15) = 1     f(x) = x / 10
            g(15) = 5     g(x) = x % 10

            A = 10
            B = 11
            C = 12
            D = 13
            E = ??  */

        if( x >= 'A' && x <= 'H') {
            y = x - 'A' + 10;
        }
        if( x == 'I') {
            y = 34;
        }
        if( x >= 'J' && x <= 'N') {
            y = x - 'J' + 18;
        }
        if( x == 'O') {
            y = 35;
        }
        if( x >= 'P' && x <= 'V') {
            y = x - 'P' + 23;
        }
        if( x == 'W') {
            y = 32;
        }
        if( x >= 'X' && x <= 'Y') {
            y = x - 'X' + 30;
        }
        if( x == 'Z') {
            y = 33;
        }
        sum += (y / 10) * 1 + (y % 10) * 9;
        if( sum%10==0 ) {
            cout << "real" << endl;
        } else {
            cout << "fake" << endl;
        }
    }
    return 0;
}


int main4() //�r�����B�⬰ascii�B��
{
    char id[11];
    int ascii[11];
    int num[11];
    cin >> id;
    cout << id << endl;
    for(int i=0; i<sizeof(id)-1; i++) {
        ascii[i] = (int)id[i];
        num[i] = (int)id[i] - '0';
        cout << id[i]  << " ";
        cout << ascii[i] << " ";
        cout << num[i] << endl;
    }
}


int main3() //�r���M�ƭȪ��t��
{
    char a = '1';
    int b = 1;
    double c = 3.1415926;
    char d[] = "3.14159";
    cout << a << " " << b << " " << c << " " << d << endl;

}

int main2() //�r���M�r�ꪺ�t�O
{
    char choice;
    cout << "choose from a~e:";
    cin >> choice;
    cout << "your choice is: " << choice << endl;

    char name[5];
    cout << "input your name";
    cin >> name;
    cout << "hello " << name << endl;

}

int main1() //���޸��M��޸����t�O
{
    const int length = 15;
    char str[10] = "hello";  //�S�O�Ϊk�A�ŧi�ɤ~���ȡA�ҥH����str="hello"�A���Y�Ostr='h'�N�i

    str[0] = 'h';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    str[5] = '\0';

    int a1[10], a2[10];
    //���~:a1 = a2; �Aarray�O�@���ܼƪ����X�A���i�o�˽�ȡA���Yc++��string�i�H�A�i��@�S���i�ܰʳ�@�ܼơC
    //���~:str = "hello";

    cout << sizeof(str) << endl;
    for(int i = 0; i < sizeof(str); i++) {
        cout << str[i];
    }
    cout << endl;
    cout << str << endl;
    return 0;
}
