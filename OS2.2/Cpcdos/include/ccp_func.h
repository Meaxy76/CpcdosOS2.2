
#include <string>
using namespace std;

string mid(string name, int pos, int size);
string mid(string name, int pos);

string rtrim(string cmdarg, string sp);

string rtrim(string cmdarg, int sp);
string ltrim(string cmdarg, int pos, int size);
string ltrim(string cmdarg, int pos, string str);

int len(string length);
int find(string var, string token);

string lcase(string lc);
int instrcpc(string incmd, string findcmd);
string ucase(string uc);
