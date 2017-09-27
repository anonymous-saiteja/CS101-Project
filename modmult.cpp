#include "bigint.h"
#include <sstream>
#include <map>
using namespace std;
bigint mult(bigint a,bigint b,bigint c){
	bigint temp=(a*b)%c;
	return temp;
}