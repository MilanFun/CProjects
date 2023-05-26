#include <iostream>
#include <iomanip>
#include <sys/times.h>
#include <cmath>
#include <omp.h>

int main(int argc, char** argv)
{
    const unsigned long numSteps=500000000;                     /* default # of rectangles */
    double step;
    double PI25DT = 3.141592653589793238462643;
    double pi=0;
    double sum=0.0;
    double x;

    double time = omp_get_wtime();

    #pragma omp parallel
    {
    #pragma omp master
        {
            int cntThreads=omp_get_num_threads();
            std::cout<<"OpenMP. number of threads = "<<cntThreads<<std::endl;
        }
    }

    step = 1./static_cast<double>(numSteps);
    #pragma omp parallel for private (x), reduction (+:sum)
      for (int i=0; i<numSteps; i++) {
          x = (i + .5)*step;
          sum = sum + 4.0/(1.+ x*x);
      }
      pi = sum*step;

    std::cout << "The value of PI is " << pi << " Error is " << fabs(pi - PI25DT) << std::endl;
    std::cout << "The time to calculate PI was " ;
    double delay = omp_get_wtime() - time;
    std::cout << delay << " seconds\n" << std::endl;
    return 0;
}
