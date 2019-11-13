#include <iostream>
#include <string>
#include <fstream> //you need to include fstream

using namespace std;

int main()
{
	ofstream fFile; //its important to use ofstream not ifstream like in reading data

	fFile.open("file.txt"); //open txt file or create if it does not exist

	if (fFile.fail()) //check errors
	{
		cerr << "An error occured" << endl; //print errors
		exit(1);
	}

	string x = "tekst1", y = "tekst2";

	fFile << x << endl << y;  //export data from variables x and y to txt file

	fFile.close(); //close fFile (good to do)

	cout << x << endl << y << endl;

	return 0;
}

