/** 
 * File:   mGenome.cpp
 * Author: andrasjoo
 *
 * Created on April 12, 2012, 8:42 AM
 */


#include "mGenome.h"

namespace mmga
{

const float mGenome::MIN_ALLELE = -1.0f;

const float mGenome::MAX_ALLELE = +1.0f;

const GARealAlleleSet mGenome::RAS(mGenome::MIN_ALLELE, mGenome::MAX_ALLELE);



mGenome::mGenome(unsigned msize, unsigned nrmul) : GARealGenome(RAS)
{

}

mGenome::mGenome(unsigned msize, unsigned nrmul, std::string str) : GARealGenome(RAS)
{

}

mGenome::mGenome(const mGenome& orig) : GARealGenome(RAS)
{

}

unsigned mGenome::matrixSize() const
{
	return 0;
}

unsigned mGenome::numberOfMultiplications() const
{
	return 0;
}

}