#include<bits/stdc++.h>

using namespace std;
class Hx{
public:
	Hx(int _a,int _b,int _c):a(_a),b(_b),c(_c){tot = -1;}
	Hx(){}
	void show(){
		if(tot == -1)cout<<"Impossible\n";
		else cout<<tot<<endl;
	}
	int get_tot(){
		int i;
		for(i=10;i<=100;++i){
			if(i%3==a && i%5==b && i%7==c){
				tot = i;
				break;
			}
		}
	}
private:
	int a,b,c,tot;		
}hx;
int n;
int main(){
	cin>>n;
	int a,b,c;
	while(n--){
		cin>>a>>b>>c;
		hx = Hx(a,b,c);
		hx.get_tot();
		hx.show();
	}
	return 0;
}

