#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {
	queue<int> a;
	cout << "Enter the size: ";
	int size;
	cin >> size;
	for (int i = 0; i < size; i++) {
		cout << "Enter the data: ";
		int ele;
		cin >> ele;
		a.push(ele);
		for (int i = 0; i < a.size() - 1; i++) {
			int x = a.front();
			a.pop();
			a.push(x);
		}
	}
	queue<int> temp = a;
	while (!temp.empty()) {
		cout << temp.front() << " ";
		temp.pop();
	}
	cout << '\n';
}