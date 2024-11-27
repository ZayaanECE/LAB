#include<stdio.h>
int main()
{
	char ch;
	int i;
	printf("Enter the alphabet ");
	scanf("%c",&ch);
    if(ch==65 ||ch==117 ||ch==69 ||ch==73 ||ch==79 ||ch==85 ||ch==97 ||ch==101 ||ch==105 ||ch==111 )
    printf("vowel");
    else
    printf("consonant");
	return 0;
}
