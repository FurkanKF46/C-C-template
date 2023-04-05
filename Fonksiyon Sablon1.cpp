#include<iostream>
using namespace std;
//FURKAN KOCA 221030910028
template <class top>
top toplama(top deger1,top deger2) {
	return deger1+deger2;
}
int main() {
	double gir1,gir2;
	cout<<"Toplamak istediginiz ayni türden degerleri giriniz"<<endl;
	cin>>gir1;cin>>gir2;
	cout<<"Sonuc: "<<toplama(gir1,gir2);
}
