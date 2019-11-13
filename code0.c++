#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	fstream fFile;

	fFile.open("file.txt"); //open txt file

	if (fFile.fail()) //check errors
	{
		cerr << "An error occured" << endl; //print errors
		exit(1);
	}

	string x, y;

	fFile >> x >> y; //import data to variables x and y

	fFile.close(); //close fFile (good to do)

	cout << x << endl << y << endl;

	return 0;
}
