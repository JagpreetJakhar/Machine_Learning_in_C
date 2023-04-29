
#include<stdio.h>

#define WIDTH 20
#define HEIGHT 20

typedef float Layer[HEIGHT][WIDTH];

float forward_pass(Layer inputs,Layer weights)
{
    float output = 0.0f;
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++) 
        {
            output += inputs[i][j] * weights[i][j];
        }
    }
  return output;  
}

static Layer inputs;
static Layer weights;



int main(void)
{
    float output = forward_pass(inputs,weights);
    printf("output = %f\n",output);
    return 0;
}
