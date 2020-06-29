
// Under construction!!!

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

const int Max_N=1000000;
const int Max_log_N=25;

//n is size of s
int n;
string s;
//results
int suffix_array [Max_N];



// naive n^2*log n

/*
int smaller(int a,int b){
return  s.substr(a)<s.substr(b);
}

void find_suffix_array(){
for(int i=0;i<n;i++){
    suffix_array[i]=i;
}
std::sort(suffix_array,suffix_array+n,smaller);
return;
}
*/



//better n*log^2 n

int mem [Max_N][Max_log_N];

bool smaller(){


}

void find_suffix_array(){



}


int main(){
cin>>s;
n=s.length();
find_suffix_array();
for(int i=0;i<n;i++){
    cout<<suffix_array[i];
}
return 0;
}
