#define G 9.80665
#define PI 3.141592654
int BoxOnASlope(){
    float Fu,m,a,N,angle;
    int x,y;
    printf("what info do we have\n");
    printf("|   1   |   Fu  |    N      |\n");
    printf("|   2   |   m   |    Kg     |\n");
    printf("|   3   |   a   |   m/ss    |\n");
    printf("|   4   |   N   |    s      |\n");
    printf("|   5   | angle |  degree   |\n");
    scanf("%d%d",&x,&y);
    printf("input the following:\n");

    if (x == 1 || y == 1){
        printf("Fu:") ;
        scanf("%f",&Fu);}
    if (x == 2 || y == 2){
        printf("M:") ;
        scanf("%f",&m);}
    if (x == 3 || y == 3){
        printf("a:") ;
        scanf("%f",&a);}
    if (x == 4 || y == 4){
        printf("N:") ;
        scanf("%f",&N);}
    if (x == 5 || y == 5){
        printf("angle:") ;
        scanf("%f",&angle);}

        if(x == 1 && y == 2){}
        if(x == 1 && y == 3){}
        if(x == 1 && y == 4){}
        if(x == 1 && y == 5){}
        if(x == 2 && y == 3){}
        if(x == 2 && y == 4){}
        if(x == 2 && y == 5){}
        if(x == 3 && y == 4){}
        if(x == 3 && y == 5){}
        if(x == 4 && y == 5){

        }




        if(x == 4 && y == 5){
           angle = ((asin(Fu / (m * G)))/PI)* 180;
        }



printf("fu: %.3f\nm: %.3f\na: %.3f\nN: %.3f\nangle: %.3f",Fu,m,a,N,angle);
}
