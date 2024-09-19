#include <iostream>
#include <string>

using namespace std;

void sortit(string array[], int length) {

	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[currentIndex] < array[smallestIndex])
				smallestIndex = currentIndex;
		}

		swap(array[startIndex], array[smallestIndex]);
	}
}

int main() {
	int ans = 0;
	cout << "How much names you want enter?: ";
	cin >> ans;

	string* arr = new string[ans]{};

	for (int i = 0; i < ans; i++) {
		cout << "Enter name #" << i + 1 << ":";
		cin >> arr[i];
	}

	sortit(arr, ans);

	for (int a = 0; a < ans; a++) {
		cout << arr[a]<<" ";
	}

	/*string name1("Alex");
	string name2("Max");

	cout << static_cast<char>(name1[0]) << " " << name2 << endl;
	cout << name1 << " " << name2;*/
}
