#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int tag=0,jahr=0,monat=0,tage=0;

    // For Pointer
    int a[3];
    int i=0;
    // For Start
    int st[3];
    int s=0;
    // For Ende
    int en[3];
    int e=0;


//    bool bisiesto = false;

    char point[] = "01.01.70";

    char start[] = "10.02.80";

    char ende[] = "02.01.91";

    char * pch = strtok (point,".");

    while (pch != NULL) {
        a[i] = atoi(pch);
        i++;
        //printf("%s\n",pch);
        pch = strtok (NULL, ".");
    }

    pch = strtok (start,".");

    while (pch != NULL) {
        st[s] = atoi(pch);
        s++;
        //printf("%s\n",pch);
        pch = strtok (NULL, ".");
    }

    pch = strtok (ende,".");

    while (pch != NULL) {
        en[e] = atoi(pch);
        e++;
        //printf("%s\n",pch);
        pch = strtok (NULL, ".");
    }

    jahr = en[2]-st[2];
    tage = jahr*365;

    monat = en[1]-st[1];
    tage = tage + ()


    printf("Finish");



    //printf("El Resultado es = %i", a%10);

    //bisiesto = (anno % 4 == 0  && (anno % 100 != 0  ||  anno % 400 == 0));
    //printf("en orden: %c%c", point[6],point[7]);

    return 0;

}
