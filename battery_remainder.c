#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int num;
    FILE *fptr;
    fptr = fopen("/sys/class/power_supply/BAT0/capacity","r");
    if (fptr == NULL)
    {
        printf("Error");
        exit(1);
    }
    char open_dialog[500];
    fscanf(fptr,"%d",&num);
    printf("Battery percentage : %d\n", num);
    fclose(fptr);
    strcpy(open_dialog,"zenity --info --text \"Join us at irc.freenode.net #lbe.\"");
    system(open_dialog);
    return 0;
    
}