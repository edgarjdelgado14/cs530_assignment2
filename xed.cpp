#include <iomanip>

ifsteam objectStream;
ifstream symbolStream;
ofstream sicStream;
ofstream lisStream;

void xed::fileOpener(char *objectFile) {
	objectStream.open(objectFile);
	if (objectStream.is_open()==false) {
		cout<< "Error: The .obj file is not found." << endl;
		exit(0);
	}
}
