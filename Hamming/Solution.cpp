using namespace std;

#include <iostream>;
#include <vector>;
/*
std::vector<int> binary(int num){
	std::vector<int> value;
	while (num != 0){
		if (num % 2 == 0){
			value.push_back(0);
		}
		else{
			value.push_back(1);
		}
		num = num / 2;
	}
	return value;
}
int hammingDistance(int x, int y){
//translate decimal number into binary number
	std::vector<int> x_vec = binary(x);
	std::vector<int> y_vec = binary(y);
	int length = 0;
	int diff = 0;
	if (x_vec.size() >= y_vec.size()){
		length = x_vec.size();
	}
	else{
		length = y_vec.size();
	}
	for (int i = 0; i < length; i++){
		if (i >= x_vec.size()){
			x_vec.push_back(0);
		}else if(i >= y_vec.size()){
			y_vec.push_back(0);
		}
		if (x_vec[i] != y_vec[i]){
			diff = diff + 1;
		}
	}
	return diff;
}
*/

int hammingDistance(int x, int y) {
	int dist = 0, n = x ^ y;
	while (n) {
		++dist;
		n &= n - 1;
	}
	return dist;
}

void main(){
	int diff = hammingDistance(1, 4);
	cout << diff;
	cin >> diff;
}