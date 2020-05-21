/******************************************************************************
 * Copyright (C) 20 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <A c file which has different statistical functions to find mean, median ,maximum and minimum of char array entered by user>
 *
 * <Add Extended Description Here>
 *
 * @author <Vidhi Vadher>
 * @date <May 21, 2020>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)



void print_array(char* p,int n)
{
	printf("origional array is=");
	for(int i=0;i<n;i++)
	{
		printf(" %d", *(p+i));
	}
}

float find_mean(char* p,int n)
{	
	float mean=0,sum=0;


	for(int j=0;j<n;j++)
	{
		sum =sum+ (*(p+j));
		mean=(sum/n);
	}
	
	return mean;
}
float find_median(char test[],int n)
{
		
	
	float median;
	///void sort(n,test);
	
	if(n%2==0)
	{
		median= (test[(n-1)/2] + test[n/2])/2;
	}
	else
	{
		median= test[n/2];
	}

	return median;
}
void sort(int n,char* p)
{
	int i,j,t;
	
	for(int i=0;i<n;i=i+1)
	{
		for(int j=i+1;j<n;j=j+1)
		{
			if(*(p+i)>*(p+j))
			{
				t=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=t;
			}
		}
	}
	
}

float find_maximum(char p[],int n)
{
	float max;
	//max=test[0];
	//int *p;
	
	max= p[0];	
	
	for(int j=0;j<n;j++)
	{
		if( p[j]>max)
		{
			max= p[j];
		}	
	}
	
	return max;
}


float find_minimum(char p[],int n)
{
	float min;
	min=p[0];	
	
	for(int j=0;j<n;j++)
	{
		if( p[j]<min)
		{
			min= p[j];
		}	
	}
	
	return min;
}

void sort_array(char* p,int n)
{
	int i,j,t;
	
	for(int i=0;i<n;i=i+1)
	{
		for(int j=i+1;j<n;j=j+1)
		{
			if(*(p+i)<*(p+j))
			{
				t=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=t;
			}
		}
	}
	
}

float print_statistics(float m,float me,float ma, float mi)
{
	//float mean,median,max,min;
	
	printf("mean is= %f",m);
	printf("median is= %f",me);
	printf("maximum value is= %f",ma);
	printf("minimum value is= %f",mi);
	
}

int main()
{

  unsigned  char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
                                                                

  /* Other Variable Declarations Go Here */
  int n;
  char *p;
  float mean,median,max,min;
  p=test;
  n=SIZE;
  
  
  /* Statistics and Printing Functions Go Here */
  
  
 	print_array(test,n);
 
 	mean=find_mean(test,n);
 	
 	sort(n,test);
 	printf("acending sorted array is==");
	for(int i=0;i<n;i++)
	{
		printf(" %d",*(p+i));
	}
	
 	median=find_median(test,n); 
 	
 	max=find_maximum(test,n);
 	
 	min=find_minimum(test,n);
 	
 	print_statistics(mean,median,max,min);
 	
 	sort_array(test,n);
 	printf("descending sorted array is==");
 	
 	for(int i=0;i<n;i++)
 	{
		printf(" %d",*(p+i));
	}
 
 
 return 0;
  
  

}

/* Add other Implementation File Code Here */
