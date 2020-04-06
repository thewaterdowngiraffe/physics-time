#include <math.h>
#include <stdio.h>


int kenimatics(){
    float v1,v2,d,t,t1,a;
    int x,y;
    printf("whats missing\n");
    printf("|   1   |   v1  |   m/s     |\n");
    printf("|   2   |   V2  |   m/s     |\n");
    printf("|   3   |   a   |   m/ss    |\n");
    printf("|   4   |   t   |   s       |\n");
    printf("|   5   |   d   |   m       |\n");
    scanf("%d%d",&x,&y);
    printf("input the following:\n");
    if (x != 1 && y != 1){
        printf("v1:") ;
        scanf("%f",&v1);}
    if (x != 2 && y != 2){
        printf("v2:") ;
        scanf("%f",&v2);}
    if (x != 3 && y != 3){
        printf("a:") ;
        scanf("%f",&a);}
    if (x != 4 && y != 4){
        printf("t:") ;
        scanf("%f",&t);}
    if (x != 5 && y != 5){
        printf("d:") ;
        scanf("%f",&d);}
    for (int loop = 1; loop <= 2; loop++){
        if (x == 1 && y ==2){
            v1 =((d/t)-((a*t)/2));
            v2 =((d/t)+((a*t)/2));}
        if (x == 1 && y ==3){
            a = (((2*v2 - ((2 * d)/t)))/t);
            v1 = (v2 - (a*t));}
        if (x == 1 && y ==4){
            v1 = (v2 * v2) - (2*a*d);
            v1 = sqrt(v1);
            t = (v2 - v1)/a;}
        if (x == 1 && y ==5){
            v1 = v2 - (a * t);
            d = ((v2 * v2)- (v1 *v1))/(2*a);}
        if (x == 2 && y ==3){
            v2 = (2*(d/t))-v1;
            a = (v2 - v1)/t;}
        if (x == 2 && y ==4){
            v2 = (v1 * v1) + (2*a*d);
            v2 = sqrt(v2);
            t = (v2 - v1)/a;}
        if (x == 2 && y ==5){
            v2 = v1 +(a*t);
            d = t*(v1 +((a*t)/2));}
        if (x == 3 && y ==4){
            t = (2*d)/(v1+v2);
            a = (v2-v1)/t;}
        if (x == 3 && y ==5){
            a = (v2-v1)/t;
            d = t*(v1 +((a*t)/2));}
        if (x == 4 && y ==5){
            t = (v2-v1)/a;
            d = t*(v1 +((a*t)/2));}
        int z = x;
        x = y;
        y = z;}
    printf("\n\nanswers\n________\nV1: %.2f\n",v1);
    printf("V2: %.2f\n",v2);
    printf("Acceleration: %.2f\n",a);
    printf("Distance: %.2f\n",d);
    printf("Time: %9.2f\n\n\n\n",t);

}
