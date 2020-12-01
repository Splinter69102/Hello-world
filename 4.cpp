#include <iostream>

using namespace std;
 int main(){
 int n;
 int i, r;
 cout<<"Enter how many participants:  "<<endl;
 cin>>n;
 cout<<"Enter how many points each participant got:";
 cin>>r;
 int tmax=r;
 int tmin=r;
 for(i=1;i<=n;i++){
cin>>r;
if (r>tmax)
    tmax=r;
if (r<tmin)
    tmin=r;


 }
cout<<"tmax= "<<tmax<<endl;
cout<<"tmin=  "<<tmin<<endl;


 return 0;
 }
