#include<iostream>
///#include<cstdio>
using namespace std;

int main(){
	///freopen("test.in","r",stdin);
    ///freopen("ans1.out","w",stdout);
	int a,b;
	cin>>a>>b;
	a+=b;
	if(a%123==0){
		a=0;
	}
	cout<<a<<"\n";
    return 0;
}
