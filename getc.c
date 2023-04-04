    #include<stdio.h>
 #include<stdlib.h>
    void main(){
    FILE *fp;
    char c;

    fp=fopen("myfile.txt","r");
    //printf("%s",fgets(c,20,fp));

    while((c=fgetc(fp))!=EOF){
    printf("%c",c);
    }
    fclose(fp);

    }
