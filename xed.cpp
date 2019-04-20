/*
*Student names: Jose Untalan, Daniel Castro, Edgar Delgado
*Class accounts: cssc0462, cssc0433, cssc0444
*Instructor: Guy Leonard
*Class: CS530, Spring 2019
*Assignment #2: SIC/XE Disassembler
*This file: README.txt
*/

#include <iomanip>

ifsteam objectStream;
ifstream symbolStream;
ofstream sicStream;
ofstream lisStream;

void xed::fileOpener(char *objectFile) {
	string symbolFile = objectFile;
	symbolFile.erase(symbolFile.find_last_of('.'));
	symbolFile.append(".sym");
	symbolStream.open(symbolFile.c_str());
	if (symbolSTream.is_open()==false) {
		cout<<"Error: The .sym file cannot be found."<<endl;
		exit(0);
	}
	
	objectStream.open(objectFile);
	if (objectStream.is_open()==false) {
		cout<< "Error: The .obj file cannot be not found." << endl;
		exit(0);
	}
}
