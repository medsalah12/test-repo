/**
  ******************************************************************************
  * @file    main.c
  * @author  Mohamed salah alaya yozbachi
  * @brief   How to develop structured code
  * @version V1.0.0
  * @date    27-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
/* Macros --------------------------------------------------------------------*/
#define MUL(x,y) x*y
#define MAX(x,y) x > y ? x : y
//#define INTEL
#define OTHERS
#define MIN(x,y) x < y ? x : y
#define SOM(x,y) x+y

/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
  int A = 9;
  int B = 6;
  int  MULT = MUL(A,B);
  int SOMME = SOM(A,B);
  int MIN   = MIN(A,B);
  int MAX   = MAX(A,B);
  while(1)
  {
  printf("La Somme de deux valeur ==: %d\n",SOMME);
  printf("La Multplication de deux valeur ==: %d\n",MULT);
  printf("la MIN ==: %d\n",MIN);
  printf("MAX ==: %d\n",MAX);
  }
 
}

/**************************************END OF FILE**************************************/