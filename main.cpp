/*
 * Jose Untalan, cssc0462
 * Daniel Castro, cssc0444
 * Edgar Delgado, cssc0433 
 * Instructor: Guy Leonard
 * CS 530, Spring 2019
 * Assignment #2: SIC/XE Disassembler
 */ 



#include <vector>
#include "xed.h"
#include "OpCode.h"


int main(int argc, char **argv) {

	if (argc != 2) {
		cout << "Incorrect input format. Usage: " << argv[0] << " <filename>.obj" << endl;
		exit(EXIT_FAILURE);
	}				        }
	xed *disassembler = new xed;
	disassembler->openFiles(*(argv+1));
	disassembler->disassemble();
	return 0;
}
