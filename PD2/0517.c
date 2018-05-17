/* fstat => 知道檔案多大
作業7 sorting comparison 
        bonus:stat 
        random generator
        srand(3217)
        for(i=0;i<n;i++)
        {
            lines[ldx]=(char*)malloc(linelength+1);
            for(j=0;j<LineLength;j++){
                line[ldx][j]=rand()
            }
        }
    
    作業8
    通訊錄web版
    php
    python
    javascript
    GO

*/


int main (int argc,char **argv){

    FILE *fp;
    fp = fopen(f_path,"r");
    //fp=stdin;
    char *lines[Maxline];
    char line[Maxline];
    int ldx=0;
    while(fgets(line,Maxline,fp))
    {
        lines[ldx++]=strdup(line);
    }

}