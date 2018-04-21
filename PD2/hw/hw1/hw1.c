#include<stdio.h>
#include<string.h>
#define MaxLine 1000
#define MaxPat 100

void removed(char *B)
{
	int n=0,i;
	while(B[n]!='\n')n++;
	//remove tail space
	for(i=n-1;i>=0;i--)
		if(B[i]==' '||B[i]=='\t')B[i]='\0';
		else break;
	n=i+1;
	//remove head space
	int s=0;
	while(B[s]==' '||B[s]=='\t')s++;
	for(i=s;i<n;i++)
		B[i-s]=B[i];
	n=n-s;
	B[n]='\0';
	//remove middle space
	int count=0,j,flag=0;
	for(i=0;i<n;i++)
	{
		if(B[i]==' '||B[i]=='\t')
		{	flag=1;count++;}
		else flag=0;
		if((flag==0)&&(count>=1))
		{
			if(count==1)count=0;
			if(count>1)
			{
				for(j=i;j<n;j++)
					B[j-count+1]=B[j];
				n=n-count+1;
				B[n]='\0';
				count=0;
			}
		}
	}
	B[n]='\n';
    B[n+1]='\0';
}

int main(int argc,char **argv){

    char pat1[MaxPat],pat2[MaxPat];
    char line[MaxLine];
    char *s="-s",*l="-l",*r="-r";
   
    while(fgets(line,MaxLine,stdin))
    {
        int n=strlen(line);
        int i=1; //record argv usage 
        while(argc!=i)
        {   
            if(!strcmp(argv[i],s))
            {
                i++;
                strcpy(pat1,argv[i]);
                i++;
                strcpy(pat2,argv[i]);
                i++;
                
                char *pch;
                int n1=strlen(pat1),n2=strlen(pat2);
                if(n1==n2)
                {
                    while((pch = strstr(line,pat1)))
                    strncpy(pch,pat2,n1);
                }
                else if (n1>n2)
                {
                    int d=n1-n2;
                    while((pch = strstr(line,pat1)))
                    {
                        strncpy(pch,pat2,n2);
                        int k,plen=strlen(pch);
                        for(k=n1;k<plen;k++)
                        pch[k-d]=pch[k];
                        pch[plen-d]='\0';
                    }
                }
                else
                {
                    int d=n2-n1;
                    while((pch = strstr(line,pat1)))
                    {
                        int k,plen=strlen(pch);
                        for(k=plen;k>=n1;k--)
                        pch[k+d]=pch[k];
                        strncpy(pch,pat2,n2);
                    }
                }



            }if(i==argc)break;
            
            if(!strcmp(argv[i],l))
            {             
                int j;
                for(j=0;j<n;j++)
                {
                    if(line[j]>=65 && line[j]<90)
                    line[j]=line[j]+32;
                }
                if((++i)==argc)break;
            }

            if(!strcmp(argv[i],r))
            {
                removed(line);
                if((++i)==argc)break;
            }
        }

        printf("%s",line);

    }

    return 0;
}

