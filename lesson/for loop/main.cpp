#include <iostream>

using namespace std;

int main(){
    for(int i=0;i<200;i++){
        cout << i+1 ;
        if(i%6==0){
            cout <<"�K��A" ;
        }
        else if(i%6==1){
            cout <<"�K��B" ;
        }
        else if(i%6==2){
            cout <<"�K��C" ;
        }
        else if(i%6==3){
            cout <<"�K��D" ;
        }
        else if(i%6==4){
            cout <<"�K��E" ;
        }
        else if(i%6==5){
            cout <<"�K��F" ;
        }
        else if(i%6==6){
            cout <<"�K��G" ;
        }
        cout <<endl ;
        }

    return 0;
}
