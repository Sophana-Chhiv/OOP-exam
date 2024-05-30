#ifndef MODIFIER_H
#define MODIFIER_H
#include <tuple>
#include "GridUnit.h"
using namespace std;

class Modifier
{
public:
	virtual void apply(GridUnit& unit) = 0;
};



#endif
