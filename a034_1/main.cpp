#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    string str;
    while(getline(cin, str)) {
        int sum = 0;
        for(int i = 0; i < str.size(); i++) { // for loop ��i=0�b�G�i�1100�O���q�̥��䪺1�}�l��index�C

            sum += pow(2,str.size() - i - 1) * (str[i] - 48);
        }
        cout << sum << endl;
    }
    return 0;
}


