#include <iostream>
#include <string>
using namespace std;

struct sinhvien{
	string name ;
	int age ;
	double totalmark;
};

int main(){
	int i;
	sinhvien sv[2];
	for( i = 0 ; i < 2 ; i++ ){
		cout << " input detail for studen " << i + 1 << " : " <<endl;
		cout << " name " << i + 1 << " : " ;
		getline (cin, sv[i].name);
		cout << " age : "<< i + 1 << " : ";
		cin >> sv[i].age;
		cout << " total mark : ";
		cin >> sv[i].totalmark;
		cin.ignore();
	}
	for( i > 0 ; i < 2 ; i++ ){
		cout << " name : " << sv[i].name << endl;
		cout << " age : " << sv[i].age << endl;
		cout << " total mark : " << sv[i].totalmark <<endl;
	}
	double sum = 0 ;
	for( i = 0 ; i < 2 ; i++ ){
		sum = sum + sv[i].totalmark;
	}
	double average = sum /2;
	cout << " average total mark : "<< average ;
	return 0;
}