#include <iostream>

using namespace std;

/*int main(){
  for(int i=1;i<=100;i++){
  if(i%2==0)
    cout<<i<< " es par"<<endl;
  else
    cout<<i<< " es impar"<<endl;  
 } 
}*/
//
//void serie(int i, int n ){ 
//	if(n > 0 ){ 
//		cout<< i*2-1 << " ";
//		serie( i + 1, n - 1); 
//	}
//}
//
//int main(){ 
//	int n;
//	
//	cout<<"Favor ingresar la cantidad"; 
//	cin>>n;
//	serie(1, n); 
//	
//}

void serie(){ 
	for(int i=1; i<=100; i++){ 
		if(i%2==0){ 
			cout<< i << " Es par" << endl; 
		}else{ 
			cout<< i << " Es impar" << endl;
		}
	}
}

int main(){ 
	serie();
}
