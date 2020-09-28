#include<stdio.h>
#include<conio.h>

int StrStr_Fork(char*,char*);

int main()
{
    int  Temp=0;
    char instr[40]="";
    char Sstr[40]="";


    printf("\n Enter The Main String=>");
    gets(instr);

    printf("\n Enter The Sub-String Of Given String=>");
    gets(Sstr);

    Temp=StrStr(instr,Sstr);

    if(Temp == 1)
    {
        printf("\n Sub-String Is Found In Given String.");
    }
    else
    {
        printf("\n Sub-String Is Not-Found In Given String.");
    }
    getch();
    return 0;
}

int StrStr(char *INSTR, char *SSTR)
{
    int i=0,j=0,Result=0;

    while(INSTR[i] != '\0')
    {
        if(INSTR[i] == SSTR[j])
        {
            j++;
            if(SSTR[j] == '\0')
            {
                Result=1;
                break;
            }
        }
        if(INSTR[i] == ' ')
        {
            i++;
            j=0;
            continue;
        }
        i++;
    }
    return Result;
}