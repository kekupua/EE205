#include <iostream>
using namespace std;

struct id {
	int number;
};

void printValue(struct id person);
void printPointer(struct id* person);

int main(){
	struct id me;
	me.number = 5;
	printValue(me);
	printPointer(&me);
}

void printValue(struct id person){
	cout << person.number << endl;
}

void printPointer(struct id* person){
	cout << person->number << endl;
}
