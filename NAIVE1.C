
#include<stdio.h>
#include<conio.h>
#include<string.h>

void search(char*pattern , char*txt)
{
 int i,j,c=0;
 int M =strlen(pattern);
 int N=strlen(txt);
 for(i=0;i<=N-M;i++)
 {
 for(j=0;j<M;j++)
 {
  if(txt[i+j]!=pattern[j])
  {
  c++;
  break;
  }
  c++;
  }

    if(j==M)
    printf("pattern found at %d \n",i);
 }

  printf("\nTotal number of comparisons:%d",c);
 }
  int main()
  {
  char txt[]="AABBADACCDDAA";
  char pattern[]="ZB";
  clrscr();
  search(pattern,txt) ;
  getch();
  return 0;
  }