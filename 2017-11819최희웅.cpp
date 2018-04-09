#include <iostream>
#include <vector>

using namespace std;

void main() {
	vector<int> NumberList;
	int num;
	while (cin >> num) {
		NumberList.push_back(num);
	}
	for (int i = 0; i < NumberList.size(); i++) {
		for (int j = 0; j < i; j++) {
			if (NumberList[i] > NumberList[j]) {
				int temp = NumberList[i] ;
				NumberList[i] = NumberList[j];
				NumberList[j] = temp;
			}
		}
	}

	cout << "ordered array" << endl;
	for (auto a : NumberList) {
		cout << a << " ";
	}
	cout << endl;
	system("pause");
}