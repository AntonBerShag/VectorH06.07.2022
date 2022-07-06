#include <iostream>
#include <vector>
#include <String>
#include <cstdlib>
using namespace std;

class Human {
public:
	int number;
	string name;
private:
};

class newHumans {
public:
	newHumans();
	newHumans(int numberNew, string nameNew) {
		nameNew = nameNew;
		numberNew = numberNew;
	}
	string nameNew;
	int numberNew;
};

class base {
public: 
	string n;
};

int main() {
	srand(time(NULL));
	int num = rand() % 10 - 1;
	int newNum = rand() % 10 - 1;
	vector<Human> humanNames{ {num, "Peter"}, {num, "Katya"}, {num, "Serega"},
		{num, "Masha"}, {num, "Sad"} };
	vector<newHumans> newHN;

	string collectionNames[5] = { "Max", "Nika", "Egor", "Lana", "Tanya" };

	for (size_t i = 0; i < 5; i++){
		newHN.push_back(newHumans(newNum, collectionNames[i]));
	}
	/*for (const auto& newHumans : newHN) {
		cout << newHumans;
	}*/

	return 0;
}