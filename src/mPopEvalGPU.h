/* 
 * File:   mPopEvalGPU.h
 * Author: andrasjoo
 *
 * Created on April 12, 2012, 1:10 PM
 */

#ifndef MPOPEVALGPU_H
#define	MPOPEVALGPU_H

#include "ga/GAPopulation.h"

namespace mmga
{

/**
 * Evaluates a population on GPU.
 * @param pop population to evaluate.
 */
void mPopEvalGPU(GAPopulation & pop);

}
#endif	/* MPOPEVALGPU_H */

