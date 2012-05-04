#include "mGPUContext.h"
#include <iostream>

namespace mmga
{

mGPUContext::mGPUContext()
{
    std::clog << __FILE__ << "::" << __FUNCTION__ << "\n";
}

mGPUContext::~mGPUContext()
{
    std::clog << __FILE__ << "::" << __FUNCTION__ << "\n";

}

mGPUContext * mGPUContext::getContext()
{
    static mGPUContext __ctx;
    return & __ctx;        
}

void mGPUContext::evaluate(GAPopulation & pop)
{
    //(a) convert pop into a float array using the mPArrayAdapter
    //(b) (1) copy the array to the GPU, (2) make the evaluation, (3) copy back the fitness values
    //(c) assign the fitness values to each element of pop


    //todo: reuse (if possible) the float array between evaluations	
    //all operations must be performed using ctx
}

}


