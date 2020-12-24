#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    float fX;                   // X and Y will always be positive floats 0-1
    float fY;
    int iMaxIter = 1500000000;  // 1.5 billion iterations
    int iHitCount = 0;          // increments on hit target (i.e. X^2 + Y^2 < 1 hits unit circle)
    float fEstimate;
    time_t iStart = time(NULL);
    printf("Estimating the value for pi via Monte Carlo simulation.\n\n");
    for (int i = 1; i <= iMaxIter; i++) {
        fX = (float)rand()/RAND_MAX;
        fY = (float)rand()/RAND_MAX;
        if (fX*fX + fY*fY < 1.0) {
            iHitCount++;
        }
        if (i % 20000000 == 0) {      // every 20 million iterations
            fEstimate = 4*(float)(iHitCount)/(float)(i);
            if (i < 1000000000) {     // less than a billion
                printf("Current estimate: %f after %d million iterations.\n", fEstimate, i/1000000);
            } else if (i < iMaxIter) {
                printf("Current estimate: %f after %.2f billion iterations.\n", fEstimate, (float)i/1000000000);
            }
        } 
    }
    time_t iDuration = time(NULL) - iStart;
    int iOpsPerSec = 1500000000/iDuration; 
    printf("\n%.1f billion iterations completed in ~%ld seconds ", (float)iMaxIter/1000000000, iDuration);
    printf("(~%d iterations/second).\n", iOpsPerSec);
    printf("Final estimate: %f.\n\n", fEstimate);
    return 0;
}
