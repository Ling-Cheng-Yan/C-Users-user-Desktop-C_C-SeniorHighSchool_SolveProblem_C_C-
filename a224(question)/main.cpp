#include <iostream>
#include <string>

using namespace std;

int pal(string str){
    bool finished = false; //��ܰj��

    for(int i=0; i < str.size()/2 + 1; i++){
        if(str[i] != str[str.size() - i - 1]){
            finished = true; //��ܫD�j��
            break;
        }
    }
    return finished;
}

int main()
{
    string str1;
    while(cin >> str1){
            if(pal(str1) == true){
                cout << "no..." << endl;
            }
            else{
                cout << "yes !" << endl;
            }
    }
    return 0;
}
