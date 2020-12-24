#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float fX;                   // X and Y will always be positive floats 0-1
    float fY;
    int iMaxIter = 1500000000;  // 1.5 billion iterations
    int iHitCount = 0;          // increments on hit target (i.e. X^2 + Y^2 < 1 hits unit circle)
    int iIterCount = 0;         // increments each time such that Hit:TotalIterations == pi/4:1 (approximately)
    float fEstimate;
    printf("Estimating the value for pi via Monte Carlo simulation.\n\n");
    for (int i = 0; i < iMaxIter; i++) {
        fX = (float)rand()/RAND_MAX;
        fY = (float)rand()/RAND_MAX;
        iIterCount++;
        if (fX*fX + fY*fY < 1.0) {
            iHitCount++;
        }
        if (iIterCount % 20000000 == 0) {      // every 20 million iterations
            fEstimate = 4*(float)(iHitCount)/(float)(iIterCount);
            if (iIterCount < 1000000000) {     // less than a billion
                printf("Current estimate: %f after %d million iterations.\n", fEstimate, iIterCount/1000000);
            } else {
                printf("Current estimate: %f after %.2f billion iterations.\n", fEstimate, (float)iIterCount/1000000000);
            }
        } 
    }
    printf("\nFinal estimate: %f after %.1f billion iterations.\n\n", fEstimate, (float)iMaxIter/1000000000);
    return 0;
}