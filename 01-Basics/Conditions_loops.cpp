#include <iostream>
using namespace std;
int main () {
 
    cout <<"First we will leran about conditions"<<endl;
    
    int a;
    cin >> a;
    
    if(a>0) {
    	cout<<"A is positive"<<endl;
	}
	else{
		cout<<"A is negative"<<endl;
	}
    
    cout<<"enter the number pls"<<endl;
    int b , c;
    cin>> b;
    cin >> c;
    
    if (a>b) {
    	cout<<"A is greater then B"<< endl;
    	
	}
	
	else{
		cout<<"B is greater then C"<< endl;
	}
	
	// Loops IN C++ 
	
	int k = 1;
	while (k <= 10) {
		cout<< k;
		k = k+1;
	}
	
	int n;
	cin >> n;
	
	int j = 0;
	int sum = 0;
	while( j <= n) {
			sum = sum + j;
			j = j+1;
	}
	cout << "the value of j is " <<j <<endl;	

    return 0;
}
