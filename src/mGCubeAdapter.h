/* 
 * File:   mGCubeAdapter.h
 * Author: andrasjoo
 *
 * Created on April 12, 2012, 8:53 AM
 */

#ifndef MGCUBEADAPTER_H
#define	MGCUBEADAPTER_H

#include "mGenome.h"
#include "armadillo/armadillo"

namespace mmga
{

/**
 * Converts an mGenome object into three arma::cubes corresponding to the
 * bilinear coefficients of the matrix multiplication algorithm.
 */
struct mGCubeAdapter
{
    /**
     * Conversion operator.
     * @param in_g mGenome object to convert.
     * @param out_a Cube corresponding to coefficient a.
     * @param out_b Cube corresponding to coefficient b.
     * @param out_c Cube corresponding to coefficient c.
     */
    void operator()(const mGenome & in_g, arma::cube & out_a, arma::cube & out_b,
            arma::cube & out_c);
};
}
#endif	/* MGCUBEADAPTER_H */

