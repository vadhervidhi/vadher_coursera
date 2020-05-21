/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <header file with dfunction delclarations that are used in main c file>
 *
 * <Add Extended Description Here>
 *
 * @author <Vidhi Vadher>
 * @date <May 21,2020>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

void print_array(char* ,int );
/**@brief <print_array will print the given array>
 

 *
 * <It will simply print the given unsigned char array without any modification>
 *
 * @param <unsigned char pointer to array> <which has 40 elements and of total 80 bytes> 
 * @param <integer number n> <it will represent total number of array elements or lenght of an array> 

*/
float find_mean(char* ,int );
/**@brief <find_mean will find the mean of given array>
 

 *
 * <It will find the mean of given unsigned char array by dividing length of an array to the sum of all elements>
 *
 * 
 * @param <unsigned char pointer to array> <which has 40 elements and of total 80 bytes> 
 * @param <integer number n> <it will represent total number of array elements or lenght of an array> 

 * @param <sum> <It will sum up all the elements>

 *
 * @return <the final answer of mean will be returned by the mean variable  with return type as float>
 */
void sort(int,char* );
/**@brief <sort will sort the array in ascending order>
 

 *
 * <to find the meadian 1st array is  needed to be arranged into an ascending order so 1st array sorting is done with the help of function sort>
 *   
 *
 * 
 * @param <unsigned char pointer to array> <which has 40 elements and of total 80 bytes> 
 * @param <integer number n> <it will represent total number of array elements or lenght of an array> 

 * @param <temp> <It will temporarily store the value to swap between to values>

 *
 * 
 */
float find_median(char [],int);
/**@brief <find_median will find the median of given array>
 

 *
 * <to find the meadian 1st array is arranged into an ascending order with the help of function sort
 *   then check whether the length of an array is odd or even and accordingly find the median>
 *
 * 
 * @param <unsigned char array> <which has 40 elements and of total 80 bytes> 
 * @param <integer number n> <it will represent total number of array elements or lenght of an array> 

 * 

 *
 * @return <the final answer of median will be returned by the median variable with return type as float>
 */

float find_maximum(char [],int);
/**@brief <find_maximum will find the maximum number from the given array>
 

 *
 * <To find maximum 1st we assigned the 1st element of an array to the variable max. Then compare each and every element of an array with this max value ,
 * the value which is higher than max will be replaced with the previously stored value in max. Thus all the values will be checked and finally we will get maximum value out of given array>
 * 
 * @param <unsigned char array> <which has 40 elements and of total 80 bytes> 
 * @param <integer number n> <it will represent total number of array elements or lenght of an array> 

 * 

 *
 * @return <It  will  return the maximum value in max variable with return type as float>
*/

float find_minimum(char [],int);
/**@brief <find_manimum will find the minimum number from the given array>
 

 *
 * <To find minimum 1st we assigned the 1st element of an array to the variable min. Then compare each and every element of an array with this min value ,
 * the value which is lower than min will be replaced with the previously stored value in min. Thus all the values will be checked and at the end of the loop, we will get minimum value
 * of given array>
 * 
 * @param <unsigned char array> <which has 40 elements and of total 80 bytes> 
 * @param <integer number n> <it will represent total number of array elements or lenght of an array> 

 * 

 *
 * @return <It  will  return the minimum value in min variable with return type as float>
 */



void sort_array(char* ,int);
/**@brief <sort_array will sort the array in descending order>
 

 *
 * <It will sort the array using bubble sort mathod in descending order>
 *   
 *
 * 
 * @param <unsigned char pointer to array> <which has 40 elements and of total 80 bytes> 
 * @param <integer number n> <it will represent total number of array elements or lenght of an array> 

 * @param <temp> <It will temporarily store the value to swap between two values>
 */
float print_statistics(float,float,float,float);
/**@brief <print_statistics will print the value of mean, median, maximum and minimum from the given char array>
 

 *
 * <In this function the previously returned value of mean , median , maximum and minimum from different functions will be passed as an argument and will print all these statistics values>
 *   
 *
 * 
 * @param <float> <datatype for  minimum variable> 
 * @param <float> <datatype for  minimum variable>
 * @param <float> <datatype for  minimum variable> 
 * @param <float> <datatype for  minimum variable>  

 */

#endif /* __STATS_H__ */
