/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: main.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 19-May-2018 22:32:46
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/
/* Include Files */
#include "rt_nonfinite.h"
#include "CastRay.h"
#include "main.h"
#include "CastRay_terminate.h"
#include "CastRay_initialize.h"

/* Function Declarations */
static void argInit_278x417_real_T(double result[115926]);
static void argInit_3x1_real_T(double result[3]);
static double argInit_real_T(void);
static void argInit_struct0_T(struct0_T *result);
static void main_CastRay(void);

/* Function Definitions */

/*
 * Arguments    : double result[115926]
 * Return Type  : void
 */
static void argInit_278x417_real_T(double result[115926])
{
  int idx0;
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 278; idx0++) {
    for (idx1 = 0; idx1 < 417; idx1++) {
      /* Set the value of the array element.
         Change this value to the value that the application requires. */
      result[idx0 + 278 * idx1] = argInit_real_T();
    }
  }
}

/*
 * Arguments    : double result[3]
 * Return Type  : void
 */
static void argInit_3x1_real_T(double result[3])
{
  int idx0;

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 3; idx0++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx0] = argInit_real_T();
  }
}

/*
 * Arguments    : void
 * Return Type  : double
 */
static double argInit_real_T(void)
{
  return 0.0;
}

/*
 * Arguments    : struct0_T *result
 * Return Type  : void
 */
static void argInit_struct0_T(struct0_T *result)
{
  /* Set the value of each structure field.
     Change this value to the value that the application requires. */
  result->dx = argInit_real_T();
  result->dy = argInit_real_T();
  result->Nx = argInit_real_T();
  result->Ny = argInit_real_T();
  argInit_278x417_real_T(result->map);
  result->xmax = argInit_real_T();
  result->ymax = argInit_real_T();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_CastRay(void)
{
  double dv0[3];
  static struct0_T r0;
  double hx;
  double hy;

  /* Initialize function 'CastRay' input arguments. */
  /* Initialize function input argument 'X'. */
  /* Initialize function input argument 'map'. */
  /* Call the entry-point 'CastRay'. */
  argInit_3x1_real_T(dv0);
  argInit_struct0_T(&r0);
  CastRay(dv0, &r0, &hx, &hy);
}

/*
 * Arguments    : int argc
 *                const char * const argv[]
 * Return Type  : int
 */
int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* Initialize the application.
     You do not need to do this more than one time. */
  CastRay_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_CastRay();

  /* Terminate the application.
     You do not need to do this more than one time. */
  CastRay_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */