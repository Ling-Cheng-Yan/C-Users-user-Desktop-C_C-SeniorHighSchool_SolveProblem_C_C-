#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int decode1(const char arr[], int size) //function�޿���t�������]�L�k�ۥѹB��
{
    for(int i = 0;i < size - 1; i++){
        if(arr[i+1] > arr[i]){
            cout << arr[i+1] - arr[i];
        }
        else{
            cout << arr[i] - arr[i+1];

        }
    }
    cout << endl;
}

string decode_ss1(string str) //function�޿���n�����Bstringstream�ŧi�b�̭�
{
    string password;
    for(int i = 0;i < str.size() - 1; i++){
        stringstream ss;
        if(str[i+1] > str[i]){
            ss << str[i+1] - str[i];  //  int --> stringstream
            password += ss.str();    // stringstream --> str  --> +
        }
        else{
            ss << str[i] - str[i+1];
            password += ss.str();
        }
    }
    return password;
}

string decode_ss2(string str) //function�޿���n�����Bstringstream�ŧi�b�~��
{
    stringstream password;
    for(int i = 0;i < str.size() - 1; i++){
        if(str[i+1] > str[i]){
            password << str[i+1] - str[i];  //  int --> stringstream
        }
        else{
            password << str[i] - str[i+1];
        }
    }
    return password.str();
}

int main()
{
    string input;
    while(cin >> input){
        decode1(input.c_str(), input.size()); //input.c_str()�NC++��C����k
    }
    return 0;
}

int main1()
{
    string input;
    while(cin >> input){
        string pwd;
        pwd = decode_ss2(input);
        cout << pwd << endl;
    }
    return 0;
}



