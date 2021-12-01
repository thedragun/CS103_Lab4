#include <iostream>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

struct shoes {
	string color, material, size;
	int price = 0;
};

int main()
{
	ofstream file;

	shoes stuff[5];

	for (int i = 0; i != 5; i++) {
		cout << "\nplease enter the color of the shoe: ";
		cin >> stuff[i].color;

		cout << "\nplease enter the material the shoe is made of: ";
		cin >> stuff[i].material;

		cout << "\nplease enter the size of the shoe: ";
		cin >> stuff[i].size;

		cout << "\nplease enter the price of the shoe: ";
		cin >> stuff[i].price;
	}

	file.open("C:\\Users\\weste\\source\\repos\\CS103_Lab_4\\shoes.txt");

	for (int i = 0; i != 5; i++) {

		file << stuff[i].color << "," << stuff[i].material << "," << stuff[i].size << "," << stuff[i].price << "\n";

	}
	file.close();

	string text;


	fstream readfile("C:\\Users\\weste\\source\\repos\\CS103_Lab_4\\shoes.txt");

	while (getline(readfile, text)) {
		cout << text;
	}


	readfile.close();
}