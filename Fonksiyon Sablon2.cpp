#include <iostream>

using namespace std;
//FURKAN KOCA 221030910028
template <class carp>
carp carpma(carp deger1, int deger2) {
  return deger1*deger2;
}

int main(){
	float gir1;
	int gir2;
cout<<"Herhangi turde bir deger girin ardindan bir tam sayi girin"<<endl;
cin>>gir1;cin>>gir2;
cout<<"Sonuc: "<<carpma(gir1,gir2);

  return 0;
}
