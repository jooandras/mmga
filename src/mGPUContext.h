/** 
 * File:   mGPUContext.h
 * Author: andrasjoo
 *
 * Created on May 2, 2012, 8:42 AM
 */

#ifndef MGPUCONTEXT_H
#define	MGPUCONTEXT_H

#include "ga/GAPopulation.h"

namespace mmga
{

/**
 * Singleton class representing the GPU context. 
 * --NOT-- to be called from a multi-threading section.
 */

class mGPUContext
{
    //todo: members from the OpenCL context to be declared here        

    /**
     * Default constructor. Builds the OpenCL context.
     */

    mGPUContext();

    /**
     * Destructor. Cleans up allocated GPU resources.
     */

    ~mGPUContext();

    /**
     * Get pointer to the unique context.
     * @return GPU context.
     */

    mGPUContext * getContext();

    //todo: delete the copy constructor and the assignment operator
    
public:

    /**
     * GPU evaluation routine.
     * @param pop Population to evaluate.
     */

    static void evaluate(GAPopulation & pop);

};

}

#endif

