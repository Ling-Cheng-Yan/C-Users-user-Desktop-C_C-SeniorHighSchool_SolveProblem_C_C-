#include <iostream> // #include<iostream.h>�L�k�ϥ�? ans;�j�Ѫ�
#include <cmath>
using namespace std;

int main()
{
    cout << sqrt(8) << endl ;

    cout << "Hello world!" ;
    cout << "\ntype\tbytes" ;
    cout << "\nint\t" <<sizeof(int) ;
    cout << "\nfloat\t" <<sizeof(float) ;
    cout << "\nshort\t" <<sizeof(short) ;
    cout << "\ndouble\t" <<sizeof(double) ;
    cout <<"\nchar\t" <<sizeof(char) <<"\n" ;
    cout << 26 <<"\n" ;
    cout << 032 <<"\n" ;
    cout <<0x1A << endl ;
    cout << "hello world!" <<endl ;  // <<endl�M <<"\n"���t��?  ans:�S�t
    cout << 3.14f <<endl ; //���S����f���t��?
    cout << 1UL <<endl ; //UL��ԣ�t?
    cout << 2e4 <<endl ;
    int x = 5 ;
    cout << x <<endl ;
    char y= 'A' ;
    double z=3.14 ;
    cout << y <<endl << z <<endl ;


    const int e =5 ;

    cout << "\n���A\t�j�p(bytes)" ;
    cout << "\nint\t" << sizeof(int) ;
    cout << "\nlong\t" << sizeof(long) ;
    cout << "\nfloat\t" << sizeof(float) ;
    cout << "\ndouble\t" << sizeof(double) ;
    cout << "\nchar\t" << sizeof(char) ;
    cout << "\n" ;

    int number = 10 ;
    cout << (double) number / 3  <<endl ;

    int g ;
    cout << "��J��3�����ƪ���:" ;
    cin >> g ;
    cout << (g%3? 'N': 'Y') <<endl;

    x = -1;
    if (x > 0){
        cout << "x�O����" << endl;
        cout << "x =" << x << endl;
    } else {
        cout << "x�D����" << endl;
    }

    int score = 66;


    if(score >= 90) {
        cout << "�oA" << endl;
    } else if(score >= 80 && score < 90) {
        cout << "�oB" << endl;
    } else if(score >= 70 && score < 80) {
        cout << "�oC" << endl;
    } else if(score >= 60 && score < 70) {
        cout << "�oD" << endl;
    }else {
        cout << "�oE(���ή�)" << endl;
    }

    int num = 75;
    cout <<  (num > 70 && num < 80) << endl;
    cout << (num > 80 || num < 75) << endl;
    cout << !(num > 80 || num < 75) << endl;


    cout << "AND�B��G" << endl;
    cout << "0 AND 0\t\t" << (0 & 0) << endl;
    cout << "0 AND 1\t\t" << (0 & 1) << endl;
    cout << "1 AND 0\t\t" << (1 & 0) << endl;
    cout << "1 AND 1\t\t" << (1 & 1) << endl;

    cout << "OR�B��G" << endl;
    cout << "0 OR 0\t\t" << (0 | 0) << endl;
    cout << "0 OR 1\t\t" << (0 | 1) << endl;
    cout << "1 OR 0\t\t" << (1 | 0) << endl;
    cout << "1 OR 1\t\t" << (1 | 1) << endl;

    cout << "XOR�B��G" << endl;
    cout << "0 XOR 0\t\t" << (0 ^ 0) << endl;
    cout << "0 XOR 1\t\t" << (0 ^ 1) << endl;
    cout << "1 XOR 0\t\t" << (1 ^ 0) << endl;
    cout << "1 XOR 1\t\t" << (1 ^ 1) << endl;

    cout << "NOT�B��G" << endl;
    cout << "NOT 0\t\t" << (!0) << endl;
    cout << "NOT 1\t\t" << (!1) << endl;

    int i = 0;
    cout << ++i << endl;
    cout << --i << endl;

    int b = 0 ;
    int c ;
    c = b++ ;
    cout << c << endl ;
    c = i-- ;
    cout << c << endl;

 int d = 0;
    int f = 0;

    cout << "��J���ơG";
    cin >> d;
    f = d/10;

    switch(f) {
        case 10: //�O�_���A���D�O���r���~�����A�Ҧp'A'; �C
        case 9:
            cout << "�oA" << endl;
            break;
        case 8:
            cout << "�oB" << endl;
            break;
        case 7:
            cout << "�oC" << endl;
            break;
        case 6:
            cout << "�oD" << endl;
            break;
        default:
            cout << "�oE(���ή�)" << endl;
    }

    for(int j = 1; j < 10; j++) {
        for(int h = 2; h < 10; h++) {
            int tmp = h * j;
            cout << h << "*" << j;
            if(tmp >= 10)
                cout << "=" << tmp;  //�h���@�|?
            else
                cout << "= " << tmp; //�h���@�|?
                cout << "\t" ;
        }
        cout << endl;
    }

    int k = 0;
    int l = 0;
    int count = -1;
    while(k != -1) {
        count++;
        l += k;
        cout << "��J����(-1����)�G";
        cin >> k;
    }

    cout << "�����G"  << (double) l / count  << endl;


    int input = 0;
    bool replay = false;
    do {
        cout << "��J��ƭȡG";
        cin >> input;
        cout << "��J�Ƭ��_�ơH" << ((input % 2) ? 'Y': 'N') << "\n";
        cout << "�~��(1:�~�� 0:����)�H";
        cin >> replay;
    } while(replay); //�H�����@�����C

    for(int m = 1; m < 10; m++) {
    if(m == 5)
        break;
    cout << "m= " << m << endl;
    }

    for(int n = 1; n < 10; n++) {
    if(n == 5)
        continue;

    cout << "n = " << n << endl;
    }

    return 0 ;
}
