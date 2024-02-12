#include <stdio.h>

// a) feladat:

typedef struct {int foot; int inch;} imperial;

double imperial_to_metric (imperial a) {
    // inch to feet then to metric
    return a.foot * 0.3048 + a.inch * 0.0254;
}

imperial plus(imperial a, imperial b) {
    imperial out;
    out.foot = a.foot + b.foot;


    if ((a.inch+b.inch)>=12) {
        out.inch = (a.inch+b.inch) -12;
        out.foot = out.foot + 1;
    }
    else {
        out.inch = a.inch + b.inch;
    }
    return out;
}

// b) feladat:


int main() {
    imperial in;
    while(scanf("%d%d", &in.foot, &in.inch) == 2) {
        printf("%.4f ", imperial_to_metric(in));
    }
    return 0;
}
