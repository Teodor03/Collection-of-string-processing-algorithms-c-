#include<iostream>
#include<iostream>
using namespace std;

const int Max_N=100000;
string s,t;
int prefix_array[Max_N];

void knut_moris_pratt(){
string f=s+"#"+t;
int n=f.size(),j;
for(int i=1;i<n;i++){
    j=prefix_array[i-1];
    while(f.at(i)!=f.at(j) and j>0){
        j=prefix_array[j-1];
    }
    if(f.at(i)==f.at(j)){
        j++;
    }
    prefix_array[i]=j;
    if(j==s.size()){
        cout<<"Found s at "<<(i-2*j)<<endl;
    }
}
}

int main(){
cin>>s>>t;
knut_moris_pratt();
return 0;
}
