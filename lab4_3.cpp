#include<iostream>

using namespace std;

int findDivisor(int x){
    int y=2;
    while (y>0){
        if(x%y==0){
            return y;
        }else
        {
            y=y+1;
        }

        

    }
    
        
        
        
    
}
int main(){
    int x;
    cout << "input ";
    cin >> x;
    cout << findDivisor(x);
    

    
}
