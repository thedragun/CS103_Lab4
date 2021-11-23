#include <iostream>
#include <fstream>

using namespace std;

struct shoes {
	string brand, material, colour;
	string size, price;

};

int main()
{
	shoes inf[6];

	for (int i = 1; i != 5; i++) {
		cout << "please enter the brand name: ";
		cin >> inf[i].brand;
		cout << "Please enter the material: ";
		cin >> inf[i].material;
		cout << "Please enter the colour of the shoes: ";
		cin >> inf[i].colour;
		cout << "Please enter the size of the shoes: ";
		cin >> inf[i].size;
		cout << "please enter the price of the shoes: ";
		cin >> inf[i].price;


		fstream shoeFile;
		shoeFile.open("C:\\Users\\weste\\OneDrive\\Desktop\\New folder\\shoeFile.txt", fstream::in | fstream::out | fstream::app);

		shoeFile << inf[i].brand << "," << inf[i].material << "," << inf[i].colour << "," << inf[i].size << "," << inf[i].price << "\n";

		shoeFile.close();
	}
}
