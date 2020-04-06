
#define PI 3.141592654
#define G 9.80665
#include<stdio.h>
#include<conio.h>

#include<dos.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

float sinfunction(float angle);
float cosfunction(float angle);
int lanchedoffaramp(){
    float dr,angle,Ms,Mh,df,dl,sangle,cangle;

    printf("\n\ninput length of ramp in meters:");
    scanf("%f",&dr);
    printf("input the angle of the ramp to\nthe table in degrees:");
    scanf("%f",&angle);
    printf("input the mass of the cart + ball in kg:");
    scanf("%f",&Ms);
    printf("input the hanging mass in kg:");
    scanf("%f",&Mh);
    printf("input the hight of the end of the\nramp to the floor:");
    scanf("%f",&df);

    /*angle = 4;
    dr = 0.75;
    Ms = 0.393;
    Mh = 0.110;
    df = 1.01;*/
    sangle = sinfunction(angle);
    cangle = cosfunction(angle);
    if ((Mh * G) < (Mh * G * sangle)){
        dl = ((2 * df)/(-(sangle * sqrt(2 * ((Ms*G*sangle)- (Mh*G))/(Ms+Mh) * dr)) + sqrt((-(sangle * sqrt(2 * ((Ms*G*sangle)- (Mh*G))/(Ms+Mh) * dr)) * -(sangle * sqrt(2 * ((Ms*G*sangle)- (Mh*G))/(Ms+Mh) * dr))) + (2 * G *df)))) * (cangle * sqrt(2 * ((Ms*G*sangle)- (Mh*G))/(Ms+Mh) * dr));}
    if ((Mh * G) > (Mh * G * sangle)){
        dl = ((2 * df)/(-(sangle * sqrt(2 * ((Mh*G)-(Ms*G*sangle))/(Ms+Mh) * dr)) + sqrt((-(sangle * sqrt(2 * ((Mh*G)-(Ms*G*sangle))/(Ms+Mh) * dr)) * -(sangle * sqrt(2 * ((Mh*G)-(Ms*G*sangle))/(Ms+Mh) * dr))) + (2 * G *df)))) * (cangle * sqrt(2 * ((Mh*G)-(Ms*G*sangle))/(Ms+Mh) * dr));}
    FILE * graph;
    graph = fopen("yeet.txt","w+");
    fprintf(graph,"%.0f %.0f %.0f %.0f %.0f %.0f",dr*10,angle*10,Ms*10,Mh*10,df*10,dl*10);
    fclose(graph);
    printf("place the landing point %.5f\nmeters away from the end of the ramp.\n\n",dl);








}






















float sinfunction(float angle){
    angle = (angle*PI)/180;
    float sangle = (sin(angle));
    return sangle;}

float cosfunction(float angle){
    angle = (angle*PI)/180;
    float cangle = (cos(angle));
    return cangle;}
