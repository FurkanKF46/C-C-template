#include <iostream>
using namespace std;

template <class cikar1, class cikar2>

 cikar1 cikarma(cikar1 deger1, cikar2 deger2) {
  return deger1 - deger2;
}

int main(){
	double gir1,gir2;
cout<<"Herhangi bir turde sayı yazarak cıkarma yapın"<<endl;
cin>>gir1;cin>>gir2;
cout<<"Sonuc: "<<cikarma(gir1,gir2);

  return 0;
}
