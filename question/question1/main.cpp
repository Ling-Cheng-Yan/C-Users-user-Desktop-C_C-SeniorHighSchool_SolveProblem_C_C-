#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

int main1()
{
    int x, y;
    if( x >= 'A' && x <= 'H') { // ����ɥD�n�Hascii�h��C
        y = x - 'A' + 10;
    }
}

int main2()
{
    float num = 6.28f; // f�����ׯB�I�ơA�����g�]�S�t�C
}

int main3()
{
    char beep = '\a'; // �]�icout << "\a";
    cout << beep;
    cout << "\n";
    char line = '\n';
    cout << line;
}

int main4()
{
    for(int i = 1; i<10; i++) { //�b��27line�Acout << j; ���|���F��A�P�z�b23~28line���|���ܼ�i�C
        for(int j = 0; j<9; j++) {

        }

    }
}


int main5() /*��46��O�J���N�׵��A��49��O�J��Ŧr���~�׵�(���n���Y�즳�Ħr���A�Y��Ŧr���~�׵��Ccin >> x >> y;��J2 3�A���@�Ŧr���b2�M3�����A
              �Y��2��A�A�Y��Ŧr���N�����A���۫᭱�@���ų����|�Y��C*/
{
    string str1;
    getline(cin, str1);
    cout << str1;
    char str2[20] = {'C','S','I','E'};  // ���F char str[]="CSIE"; ���ݭn���ŧi�j�p�A��L���������ŧi�j�p�C
    cin >> str2;
    cout << str2;
}


int main6() //cout<<c1+c2���r����ASCII�A���D�����ŧi�Ochar�~�|�O�r���� �C
{
    string str; /*�̦n�ninclude<string> �A�o�OC++��type=C��type��char str[]={'c','s','i','e'}�C  �]����char str="csie" �C �t�~c++���i�۰��ܰʡA
                ��ctype������C ���L��ӭn�Ψ���w��[i]���ܡA���n���q�nSIZE�j�p�C*/

    char c1 = '!';
    char c2 = '0';
    char c3 = c1 + c2;
    cout << c1 + c2 << " " << c3;

}







