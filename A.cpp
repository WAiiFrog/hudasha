#include<bits/stdc++.h>

using namespace std;
class Gcd{
public:
	Gcd(int _a,int _b):a(_a),b(_b){}
	Gcd(){}
	int get_ans(){
		return __gcd(a,b);
	}
private:
	int a,b;
};
int n,a,b;
int main(){
	cin>>n;
	Gcd ans;
	while(n--){
		cin>>a>>b;
		ans = Gcd(a,b);
		cout<<ans.get_ans()<<endl;
	}
	return 0;
}
