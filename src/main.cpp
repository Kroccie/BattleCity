#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <thread>

using namespace std;

void foo(int var) {
	cout << ++var << endl;
}

int main() {

	thread a([]() {cout << "hello world"; });
	a.join();

	return 0;
}