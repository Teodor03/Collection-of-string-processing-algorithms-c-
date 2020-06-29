#include<iostream>
#include<string>
using namespace std;

const int Max_N=1000000;

string s;
int prefix_array [Max_N];

void prefix_function(int n){
int j;
for(int i=1;i<n;i++){
    j=prefix_array[i-1];
    while(s.at(i)!=s.at(j) and j>0){
        j=prefix_array[j-1];
    }
    if(s[i]==s[j]){
        j++;
    }
    prefix_array[i]=j;
}
return;
}


int main(){
cin>>s;
prefix_function(s.size());
for(int i=0;i<s.size();i++){
    cout<<prefix_array[i]<<" ";
}
return 0;
}
