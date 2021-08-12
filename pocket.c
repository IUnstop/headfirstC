#include<stdio.h>

int main(){
    float latitude;
    float longitude;
    char info[80];
    int started = 0;
    puts("DATA=[");
    while (scanf("%f ,%f,%79[^",&latitude,&longitude,info) == 3) 
    {
        if(started)
        printf(",\n");
        else
            started = 1;
                printf("{latitude: %f, longtitude= %f, info:'%s'}",latitude,longitude,info);
    }
    puts("\n]");
    return 0;   
}