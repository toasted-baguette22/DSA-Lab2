#include <iostream>
using namespace std;

int str_rev(string* ptr) {
	int a = (*ptr).length();
	char* rev_str = new char[a+1];
	for (int i = 0; i < a; i++) {
		rev_str[a - i - 1] = (*ptr)[i];
	}
	rev_str[a] = '\0';
	*ptr = string(rev_str);
	delete[] rev_str;
	return 0;
}

int main() {
	string* str = new string;
	cout << "Enter the string to be reversed: ";
	cin >> *str;
	
	str_rev(str);

	cout << "Reversed string: " << *str << endl;
	delete str;
	return 0;
}