#include <iostream>

using namespace std;

int pass(int a[], int size){
    int sum = 0;
    double avg;
    for(int i = 0; i < size; i++){
        sum += a[i];
    }
    avg = (double)sum / size;
    if(avg >= 60){
        return 1;
    }
    else{
        return 0;
    }
}

struct student{
    string name;
    int math[3], eng[3];
};

int main(){ //�@�Ӿǥͦ�2��ءA�C��ئ��T���ҸաA�p��ǥͦ��Z�O�_�ή�C
    struct student student1;
    cout << "��J�@�Ӿǥͩm�W:";
    cin >> student1.name;
    cout << "��J3���ƾǦ��Z:";
    for(int i = 0; i < 3; i++){
        cin >> student1.math[i];
    }
    cout << "��J3���^�妨�Z:";
    for(int i = 0; i < 3; i++){
        cin >> student1.eng[i];
    }

    cout << student1.name << endl;
    for(int i = 0; i < 3; i++){
        cout << student1.math[i] <<" ";
    }
    cout << endl;
    for(int i = 0; i < 3; i++){
        cout << student1.eng[i] << " ";
    }
    cout << endl;

    cout << pass(student1.math,3);
    cout << endl;
    cout << pass(student1.eng,3);

    cout << endl;
    return 0;
}
