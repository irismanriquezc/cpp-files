#include <iostream>
#include <vector>

using namespace std;

int main(){


int namenum;
string name;

vector<string>names;

cout<< "How many names?\n";
cin >> namenum;

for (int i = 0; i<namenum; i++){
	cin>> name;
	names.push_back(name);
	}
	
cout << "The names you entered are:\n";

 for (int i = 0; i<namenum; i++){
	cout << names[i]<< endl;
	}
}
