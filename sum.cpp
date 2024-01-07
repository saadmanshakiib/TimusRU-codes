#include<iostream>
using namespace std;
int main(){
signed int N;
cin>>N;
int loop;
signed int sum = 0;
if(N>10000){
    abort();
}
else if(N<=10000){
for(loop=1;loop<=N;loop++){
    sum = sum+loop;
}
}
cout<<sum;
}
