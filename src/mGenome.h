/** 
 * File:   mGenome.h
 * Author: andrasjoo
 *
 * Created on April 12, 2012, 8:42 AM
 */

#ifndef MGENOME_H
#define	MGENOME_H

#include "ga/GARealGenome.h"
#include <string>

namespace mmga
{

/**
 * Class representing a MM genome.
 */

class mGenome : public GARealGenome
{
    unsigned msize, nrmul;
    static const GARealAlleleSet RAS;
    static const float MIN_ALLELE, MAX_ALLELE;
    
public:
    
    
    /**
     * Default constructor
     * @param msize Matrix size. Supported values: 2, 3, 4.
     * @param nrmul Number of multiplications (>=7).
     */
    
    mGenome(unsigned msize = 2, unsigned nrmul = 7);

    /**
     * Constructor based on a string.
     * @param msize Matrix size. Supported values: 2, 3, 4.
     * @param nrmul Number of multiplications (>=7).
     * @param str A list of space separated values.
     */

    mGenome(unsigned msize, unsigned nrmul, std::string str);
    
    /**
     * Copy constructor
     * @param orig
     */
    mGenome(const mGenome& orig);
    
    
    /**
     * Return matrix size.
     * @return Matrix size.
     */
    unsigned matrixSize() const; 
    
    /**
     * Return number of multiplications.
     * @return Number of multiplications.
     */
    unsigned numberOfMultiplications() const;
};

}
#endif	/* MGENOME_H */

