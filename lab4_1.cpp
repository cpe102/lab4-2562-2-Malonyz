#include<iostream>
#include<cmath>

using namespace std;
float find(float x){
    float y,e=2.71828;
    y=(3*pow(x,3))+(2*e)+(pow(2,(2*x+1)))+(sqrt(pow(x,2)+1));
    cout<<y;
}

int main(){
    float x;
    cout << "Enter x =";
    cin >> x;
    find(x);


    

}
