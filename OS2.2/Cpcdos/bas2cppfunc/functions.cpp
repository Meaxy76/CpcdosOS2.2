#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
#include "../include/ccp_func.h"
using namespace std;

// _COMMANDE_ = LTRIM(LTRIM(_COMMANDE_), CHR(09))

string rtrim(string cmdarg, string sp){
    
    size_t found = cmdarg.find(sp);
    for(int i = cmdarg.length(); i > found; i--){
        cmdarg.pop_back();
    }
    return cmdarg;
}	

string rtrim(string cmdarg, int sp){
    
    //size_t found = cmdarg.find(sp);
    cmdarg.erase(cmdarg.begin()+sp, cmdarg.end());
    return cmdarg;
}	

string ltrim(string cmdarg, int pos, int size){
    cmdarg.erase(pos, size);
    return cmdarg;
}

string ltrim(string cmdarg, int pos, string str){
    size_t found = cmdarg.find(str);
    cmdarg.erase(pos, found + 2);
    return cmdarg;
}

int find(string var, string token){
    return var.find(token);
}

int len(string length){
    return length.length();
}

string mid(string name, int pos, int size){
    string str;
    str.substr(pos,size);
    return str;
}

string mid(string name, int pos){
    string str;
    const char * c = name.c_str();
    str.substr(pos,strlen(c));
    return str;
}

int instrrev(){
    return 0;
}

string lcase(string lc)
{
	for(int i=0;lc[i]!='\0';i++)
	{
		if (lc[i] >= 'A' && lc[i] <= 'Z')    //checking for uppercase characters
			lc[i] = lc[i] + 32;         //converting uppercase to lowercase
	}
    return lc;
}

string ucase(string uc){	
    for(int i=0;uc[i]!='\0';i++)
	{
		if (uc[i] >= 'a' && uc[i] <= 'z')   //checking for lowercase characters
			uc[i] = uc[i] - 32;        //converting lowercase to uppercase
	}
    return uc;
}

int instrcpc(string incmd, string findcmd){
    if(incmd.find(findcmd)!=incmd.npos){
        //cout << "Command: " << incmd.find(findcmd)+1 << endl;
        return incmd.find(findcmd)+1;
    } else {
        //cout << "sad" << endl;
        return 0;
    }
}
