    #include<stdio.h>
 #include<stdlib.h>
    void main(){
    FILE *fp;
    char c;

    fp=fopen("myfile.txt","r");
    //printf("%s",fgets(c,20,fp));

    while(!feof(fp)){
      c=fgetc(fp);
    printf("%c",c);
    }
    fclose(fp);

    }
