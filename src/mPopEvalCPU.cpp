#include "mPopEvalCPU.h"
#include "mGenome.h"

namespace mmga
{

void mPopEvalCPU(GAPopulation & pop)
{
    for (int i = 0; i < pop.size(); ++i)
        pop.individual(i).evaluate();
    
    //call the evaluation method for each genome
    //later on try to parallelize it using threads
}

}

