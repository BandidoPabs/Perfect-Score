#include <iostream>

using namespace std;

//function prototype
int countPerfect(int alpha[10], int); 

int main() {

	int const size = 20;
	int scores[size];
	int count = 0;


	for (int i = 0; i < size; i++) {
		cout << "Enter a score 0 - 100 (-1 to quit) :  ";
		cin >> scores[i];
		while ((scores[i]<-1) || (scores[i]> 100)) {
			cout << "Invalid score! Please enter a score between 0 - 100 :";
			cin >> scores[i];
		}
		if ((scores[i] == -1) || (i == 20) && (i > 10)) {
			break;
		}
		if (scores[i]>-1) {
			count++;
		}

	}


	cout << endl << endl;

	cout << "There were " << count << " scores entered with " << countPerfect(scores, size) << " perfect scores." << endl;

	system("pause");
	return 0;
}

// function that counts the amount of perfect scores entered by the user
int countPerfect(int alpha[10], int size) {

	int count = 0;
	for (int i = 0; i < size; i++) {
		if (alpha[i] == 100) {

			count++;
		}
	}
	return count;
}