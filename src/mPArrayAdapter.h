/* 
 * File:   mPArrayAdapter.h
 * Author: andrasjoo
 *
 * Created on April 12, 2012, 12:43 PM
 */

#ifndef MPARRAYADAPTER_H
#define	MPARRAYADAPTER_H

#include "ga/GAPopulation.h"

namespace mmga
{

/**
 * Converts a GAPopulation object into a flattened float array.  
 */
struct mPArrayAdapter
{
    /**
     * Conversion operator.
     * @param in_p populaion object to convert
     * @param out output array. 
     *
     * NB. The memory is managed by the caller.
     */
     
    void operator()(const GAPopulation & in_p, float * out);
};

}
#endif	/* MPARRAYADAPTER_H */

