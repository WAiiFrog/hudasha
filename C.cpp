#include<bits/stdc++.h>

using namespace std;
class Number{
public:
	Number(){}
	Number(int _num,int _r):num(_num),r(_r){}
	void get_stak(vector<int> &s){
		int tmp;
		while(num){
			tmp = num%r;
			s.push_back(tmp);
			num/=r;
		}
	}
	void show_ans(){
		vector<int>stak;
		get_stak(stak);
		for(int i=stak.size()-1;i>=0;--i){
			cout<<stak[i];
		}
		cout<<endl;
	}
private:
	int num,r;	
}number;
int n,a,b;
int main(){
	cin>>n;
	while(n--){
		cin>>a>>b;	
		number = Number(a,b);
		number.show_ans();	
	}
	return 0;
}
