#include <iostream>
#include <string>

using namespace std;


int main()
{
    int n; //�X��
    int sum = 1; //��l
    cin >> n;
    for(int i =0; i < n; i++) {
        string str; //input
        cin >> str;
        for(int k = 0; k < str.size(); k++) {
            sum = sum * (str[k] - 48);
        }
        cout << sum << endl;
        sum = 1;
    }
    return 0;
}

