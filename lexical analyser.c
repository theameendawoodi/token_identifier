#include<Stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,size;
	char string[5000];
	char control[32];
	char numbers[11]={'0','1','2','3','4','5','6','7','8','9','\0'};
	char capital[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\0'};
	char small[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
	char special1[16];
	char special2[15] = {' ','!','"','#','$','%','&','(',')','*','+','-','.','/','\0'};
	char special3[9]={':',';','<','=','>','?','@','\0'};
	char special4[7]={'[',']','^','_','`','\0'};
	char special5[6]={'{','|','}','~','\0'};
	char temp[5000];
	int *flagpoint[size];
	int store,temper,k = 0;
	int num1,cap1,smol1,num,cap,smol,sp2,sp21,sp3,sp31,sp4,sp41,sp5,sp51;
	store = 0;
	printf(".\n");
	fgets(string,5000,stdin);
	strcpy(temp,string);
	size = strlen(string);
	int array[size];
	num1 = 0;
	num = 0;
	for(i=0;i<=size;i++)
	{
		for(j=0;j<10;j++)
		{
			if(string[i] == numbers[j])
			{
				num++;
				num1++;
				k++;
				flagpoint[store] = &numbers[j];
				store++;
			}
		}
	}
	cap1 = num1 + 0;
	cap = 0;
    for(i=0;i<=size;i++)
	{
		for(j=0;j<10;j++)
		{
			if(string[i] == capital[j])
			{
				cap++;
				cap1++;
				k++;
				flagpoint[store] = &capital[j];
				store++;
			}
		}
	}
	smol1 = cap1 + 0;
	smol = 0;
	for(i=0;i<=size;i++)
	{
		for(j=0;j<10;j++)
		{
			if(string[i] == small[j])
			{
				smol++;
				smol1++;
				k++;
				flagpoint[store] = &small[j];
				store++;
			}
		}
	}
	sp21 = 0;
	sp21 = smol + sp21;
	sp2 = 0;
	for(i=0;i<=size;i++)
	{
		for(j=0;j<10;j++)
		{
			if(string[i] == special2[j])
			{
				sp2++;
				sp21++;
				k++;
				flagpoint[store] = &special2[j];
				store++;
			}
		}
	}
	sp3 = 0;
	sp31 = 0;
	sp31 = sp2+0;
	for(i=0;i<=size;i++)
	{
		for(j=0;j<10;j++)
		{
			if(string[i] == special3[j])
			{
				sp3++;
				sp31++;
				k++;
				flagpoint[store] = &special3[j];
				store++;
			}
		}
	}
	sp4 = 0;
	sp41 = sp31+0;
	for(i=0;i<=size;i++)
	{
		for(j=0;j<10;j++)
		{
			if(string[i] == special2[j])
			{
				sp4++;
				sp41++;
				k++;
				flagpoint[store] = &special4[j];
				store++;
			}
		}
	}
	sp5 = 0;
	sp51 = 0;
	sp51 = sp4+0;
	for(i=0;i<=size;i++)
	{
		for(j=0;j<10;j++)
		{
			if(string[i] == special5[j])
			{
				sp5++;
				sp51++;
				k++;
				flagpoint[store] = &special5[j];
				store++;
			}
		}
	}
	for(i=0;i<k;i++)
	{
	    printf("\nthe value are %c\n",*flagpoint[i]);
	    printf("\nthe address is %u\n",flagpoint);
	}
	printf("\nthe are %d numbers in the input\n",num);
	printf("\nthe number take their place in the array form 0 to %d\n",num1);
	printf("\nthe number of capital charecters in string are %d\n",cap);
	printf("\nthe capital charecters take their place in the array from %d to %d\n",num1,cap1);
	printf("\nthe number of small letters are %d\n",smol);
	printf("\nthe small charecters take their place inthe array from %d to %d\n",cap1,smol1);
	printf("\nthe special charecter in the input string is %d",sp2);
	printf("\nthe position in the array is from %d to %d",smol1,sp21);
}
