#include <iostream>
#include <string>

using namespace std;

int main() //�n��enter�~�X�ĤG��O�]���e�������Y���A�ҥH�׵��F�C
{
    string str;
    while(getline(cin, str)){
        for(int i = 0; i < str.size(); i++){
            cout << (char)(str[i] - 7);
            if((char)(str[i] - 7) == '.'){
                cout << endl;
            }
        }
    }
    return 0;
}
