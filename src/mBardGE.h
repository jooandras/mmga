/* 
 * File:   mBardGE.h
 * Author: andrasjoo
 *
 * Created on April 12, 2012, 12:43 PM
 */
#ifndef MBARDGE_H
#define MBARDGE_H

#include "ga/GARealGenome.h"

namespace mmga
{

/**
 * Based on Bard's method: A practical algorithm for massively-parallel dense 
 * matrix multiplication in time n^2.7777 over any field someday but for now the 
 * reals (2008)
 *
 * The essence: we measure the performance of the MM algorithm on all pairs of 
 * matrices taken from the canonical matrix basis. 
 * 
 * Fitness ranges from 0.0f to 1.0f, inclusive. 1.0f corresponds to a perfect
 * genome.
 * 
 * The evaluator runs on the CPU and is based on Armadillo.
 *
 * @param gen Genome to evaluate. 
 * @return The fitness corresponting to gen.
 */ 

float mBardGE(GAGenome & gen);

}

#endif