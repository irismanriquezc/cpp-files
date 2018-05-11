#include <iostream>
#include <vector>

using namespace std;

int main(){

vector<int>nums;

for (int i = 10; i>0 ; i--){
	nums.push_back(i);
	}
 for (int i = 0; i<10; i++){
	cout << nums[i]<< endl;
	}
}
