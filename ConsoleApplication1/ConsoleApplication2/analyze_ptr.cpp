#include<iostream>
using namespace std;

void analyze_ptr(int *ptr){
	cout << ptr << endl;
	cout << *ptr << endl;
}
int main(){
	int iValue=5;
	analyze_ptr(&iValue);

	int *value = new int(8);
	analyze_ptr(value);
	return 0;
}