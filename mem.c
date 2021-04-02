/******************************************************************************
*
* File Name: mem.c
*	      (c) 2018 AED
*
* COMMENTS
*    Memory operations
*
*****************************************************************************/

#include "mem.h"

void free_matrix(int **matrix, int *values)
{
  int i = 0;
  for(i = 0; i <= values[0]; i++){
    free(matrix[i]);
  }
  free(matrix);
}

int** alloc_matrix(int **matrix, int *values)
{
  int i;
  matrix = (int**)malloc((values[0]+1)*sizeof(int*));
  for(i = 0; i < (values[0] + 1); i++){
    matrix[i] = (int*)malloc((values[1]+1)*sizeof(int));
  }
  return matrix;
}

void free_matrix_aux(int **m_aux, int *values)
{
  int i = 0;
 
 
  for(i = 0; i <=values[0]; i++){
    free(m_aux[i]);
  }
  free(m_aux);
}

/* aloca o tamnho da matriz de acordo com o passo e com os limites da matriz inicial */
int **matrix_k(int **m_aux, int *values)
{
  int i = 0, j = 0; /*, l, c,l_up, l_down, c_right, c_left   */

  

  
  m_aux = (int**)malloc((values[0]+1)*sizeof(int*));
  for(i = 0; i < (values[0] + 1); i++){
    m_aux[i] = (int*)malloc((values[1]+1)*sizeof(int));
  }

  for(i = 0; i <= values[0]; i++){
    for(j = 0; j <=values[1]; j++){
      m_aux[i][j] = 0;
    }
  }

  return m_aux;
}

