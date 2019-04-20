/*
 * Jose Untalan, cssc0462
 * Daniel Castro, cssc0444
 * Edgar Delgado, cssc0433 
 * Instructor: Guy Leonard
 * CS 530, Spring 2019
 * Assignment #2: SIC/XE Disassembler
 * This file: main.cpp
 */ 



#include <vector>
#include xed.h



int main(int argc, char **argv) {
	
	//Gracefully exit if incorrect usage.
	if (argc != 2) {
		cout << "Incorrect input format. Usage: " << argv[0] << " <filename>.obj" << endl;
		exit(1); //exit gracefully
	}
	
	//Send file to disassembler
	xed *disassembler = new xed;
	disassembler->fileOpener(*(argv+1));
	disassembler->disassemble();
	return 0;
}
