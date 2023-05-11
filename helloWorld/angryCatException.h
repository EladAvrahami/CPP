#ifndef ANGRY_CAT_EXCEPTION
#define ANGRY_CAT_EXCEPTION

#include<stdexcept>
using namespace std;

class AngeyCatException : public runtime_error //passing that as argument to the runtime error class constructor that pass it to the except class
{
public:
	//no args defult exception constructor
	AngeyCatException() :runtime_error("made kitty angry!!!! (custom exception)")
	{
	}
	//args con - also called parametized con where u can specify a massege
	AngeyCatException(const string& err) : runtime_error(err) //אופציה לזריקת שגיאה עם טקסט מותאם 
	{
	
	}


};






#endif // !ANGRY_CAT_EXCEPTION