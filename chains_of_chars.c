/*  Program to treat strings and chains of characters. */


#include<stdio.h>


void ascii(char word[]);

void uppercase_first_char(char word[]);

void uppercase_word(char word[]);

void string_uppercase_first(char string[]);

int string_size(char string[]);

void string_stats(char string[]);


int main(void)
{
	int option, c;
	char string[201];

	do {
		printf("\n\n Choose one of the following options:\n\n");
		printf("\t 1. Enter a word and write in ASCII code.\n");
		printf("\t 2. Enter a word in lowercase and write the first character in capital letters.\n");
		printf("\t 3. Enter a word in lowercase and write it in uppercase.\n");
		printf("\t 4. Enter a string and write the first character of each word in capital letters.\n");
		printf("\t 5. Enter a string and count how many characters it has.\n");
		printf("\t 6. Enter a string and count how many letter case, capital letters and digits it has.\n\n");
		scanf("%d", &option);
		if (option < 1 || option > 6) printf("\n\n Option not available.");
	} while(option < 1 || option > 6);

	getchar();

	switch(option)
	{
		case 1:
			printf("\n Enter a word:\t");
			scanf("%s", string);
			ascii(string);
			break;

		case 2:
			printf("\n Enter a word:\t");
			scanf("%s", string);
			uppercase_first_char(string);
			break;

		case 3:
			printf("\n Enter a word:\t");
			scanf("%s", string);
			uppercase_word(string);
			break;

		case 4:
			printf("\n Enter a string:\t");
			//gets(word);
			scanf("%[^\n]s", string);
			string_uppercase_first(string);
			break;

		case 5:
			printf("\n Enter a string:\t");
			//gets(word);
			scanf("%[^\n]s", string);
			c=string_size(string);
			printf("\n\n This string has %d characters.\n\n", c); 
			break;

		case 6:
			printf("\n\n Enter a string:\t");
			//gets(word);
			scanf("%[^\n]s", string);
			string_stats(string);
			break;

		default:
			printf("\n\n Option not available.\n\n");
			break;
	}
	
	return 0;
	
}


void ascii( char word[])
{
	int code[200], i=0;
	int j;

	while(i<200 && word[i]!='\0')
	{
		code[i]=word[i];
		i++;
	}

	for(j=0; j<i; j++) printf(" %d ", code[j]);
	printf("\n\n");
}

void uppercase_first_char( char word[])
{
	word[0]=word[0]-32;

	printf("\n %s \n\n", word);
}


void uppercase_word( char word[] )
{
	int i=0;
	
	while( i<200 && word[i]!='\0' )
	{
		word[i]=word[i]-32;
		printf("  %s  ", word);

		i++;
	}

	printf("\n\n %s \n\n", word);
}


void string_uppercase_first( char string[] )
{
	int i;

	i=1;
	string[0]=string[0]-32;
	while( i<200 && string[i]!='\0' )
	{
		if(string[i]==' ')
		{
			i++;
			string[i]=string[i]-32;
		}
		else i++;
	}

	puts(string);

}


int string_size( char string[] )
{
	int i=1, c=0;

	while( i<200 && string[i]!='\0' )
	{
		if( string[i]==' ') c=i;
		else c=i+1;
		i++;
	}
      
	return (c);
}


void string_stats ( char string[] )
{
	int digits=0, uppercase=0, lowercase=0;

	int code[200], i=0, j;


	while(i<200 && string[i]!='\0')
	{
		if ( code[i]==' ' ) code[i]=0;
		else code[i]=string[i];
		i++;
	}

	printf("\n Change the string to ASCII code:\n");

	for(j=0; j<i; j++) printf(" %d ", code[j]);

	for(j=0; j<i; j++)
	{
	       if( code[j]>=48 && code[j]<=57) ++digits;   
	       if( code[j]>=65 && code[j]<=90) ++uppercase;   
	       if( code[j]>=97 && code[j]<=122) ++lowercase;
	}

	printf("\n\n This string has %d digits, %d capital letters and %d letters cases.\n\n", digits, uppercase, lowercase);
	
}
