#include<iostream>
#include<cmath>

using namespace std;

float findDistance(float u,float a,float t){
  float s;
  s=(u*t)+(0.5*a*(pow(t,2)));
  cout << s;
} 

int main(){
float u,a,t;
cout <<"Enter u ";
cin >> u;
cout <<"Enter a ";
cin >> a;
cout <<"Enter t ";
cin >> t;
findDistance(u,a,t);



  return 0;
}
