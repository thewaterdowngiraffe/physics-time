


int main(){
     int mode;
    for(int done = 1; done <= mode;){
        printf("\n\nwhat do u want:\n");
        printf("exit = 0\n");
        printf("the five equations = 1\n");
        printf("Box On A Slope = 2\n");
        printf("cart on a ramp minilab = 3\n");


 scanf("%d",&mode);
        if (mode == 1){
            kenimatics();}
        if (mode == 2){
            BoxOnASlope();}
        if(mode == 3){
            lanchedoffaramp();}

    }
    return 0;
}
