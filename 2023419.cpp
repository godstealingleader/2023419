#include <iostream>
#include <string>
struct piza
{
	std::string name;
	int diameter;
	double weight;
};

int main()
{
	using std::cout;
	using std::cin;
	piza one{"0",0,0};
	cout << "pleause enter the piza name:"; getline(cin, one.name);
	cout << "please enter the piza diameter:"; cin >> one.diameter;
	cout << "please enter the piza weighr:"; cin >> one.weight;
	cout << "the piza named " << one.name << " and it have " << one.diameter << " in diameter and " << one.weight << " kg in wright";
	return 0;
}