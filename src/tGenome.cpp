//test functions for mGenome

#include "mGenome.h"
#include "mBardGE.h"
#include <cassert>

using namespace std;
using namespace mmga;

void tevalstrassen()
{
	cout << "[test]::" << __FILE__ << "::" << __FUNCTION__ << "::";

	//todo: fill it with the coefficients of the Strassen algorithm
	string strassen = "1 0 0 1 ...";

	mGenome g(2, 7, strassen);
	g.evaluator(mBardGE);
	g.evaluate();
	assert(g.score() == 1.0f);
	
	cout << "passed" << endl;		
}

int main()
{
	tevalstrassen();
	return 0;
}