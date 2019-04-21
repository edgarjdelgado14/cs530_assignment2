#include "Converter.main"

//taking an integer and returning that int as a string
string Converter::intToString(int number){
    string convertingToString;
    stringstream ss; 
    ss << number;
    convertingToString = ss.str();
  
    return convertingToString;
}

// Converting hex string to integer
int Converter::stringHexToInteger(string hex){
    int num = 0;
    int exponent16 = 1;

    string a = "0123456789ABCDEF";
    for(int i = hex.length() - 1; i >= 0; --i)
    {
        num += a.find(toupper(hex[i])) * exponent16;
        exponent16 *= 16;
    }
    return num;
}

// Take an integer and return binary number as a string
string Converter::hexToStringBinary(unsigned long hex) {
    if(hex == 0)
        return "0000";
    else if(hex == 1)
        return "0001";
    else if(hex == 2)
        return "0010";
    else if(hex == 3)
        return "0011";
    else if(hex == 4)
        return "0100";
    else if(hex == 5)
        return "0101";
    else if(hex == 6)
        return "0110";
    else if(hex == 7)
        return "0111";
    else if(hex == 8)
        return "1000";
    else if(hex == 9)
        return "1001";
    else if(hex == 0x0A)
        return "1010";
    else if(hex == 0x0B)
        return "1011";
    else if(hex == 0x0C)
        return "1100";
    else if(hex == 0x0D)
        return "1101";
    else if(hex == 0x0E)
        return "1110";
    else if (hex == 0x0F)
        return "1111";
    printf("Error!\n");
    exit(EXIT_FAILURE);
}

//Taking a 4 binary number as a string and returning an integer
string Converter::stringBinToHex(string x){
    if(x.compare("0000")==0)
        return "0";
    else if(x.compare("0001")==0)
        return "1";
    else if(x.compare("0010")==0)
        return "2";
    else if(x.compare("0011")==0)
        return "3";
    else if(x.compare("0100")==0)
        return "4";
    else if(x.compare("0101")==0)
        return "5";
    else if(x.compare("0110")==0)
        return "6";
    else if(x.compare("0111")==0)
        return "7";
    else if(x.compare("1000")==0)
        return "8";
    else if(x.compare("1001")==0)
        return "9";
    else if(x.compare("1010")==0)
        return "A";
    else if(x.compare("1011")==0)
        return "B";
    else if(x.compare("1100")==0)
        return "C";
    else if(x.compare("1101")==0)
        return "D";
    else if(x.compare("1110")==0)
        return "E";
    else if(x.compare("1111")==0)
        return "F";
    printf("Your input is INVALID!\n");
    exit(EXIT_FAILURE);
}
