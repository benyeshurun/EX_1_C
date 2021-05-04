#include <stdio.h>
#include <ctype.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>


#define sqr (x) ((x)*(x))

double calc_distance(int dim,double* vector_1, double* vecotr_2); /* returns the distance between 2 vectors*/
int finding_cluster(list_of_centroids, double *a_vector); /* returns the index of the cluster this vector shuld go*/
void update_central (); /*updates the centroid central vector*/



typedef struct{
    double *data;
    int key;
    struct node *next;
}list_of_vectors;


typedef struct
{
    double *central_cluster;
    list_of_vectors cluster_vectors;
}centroids ;


void fail(char *str)
{
    printf(str);
    exit(-1);
}

int main(int argc, char *argv[]) {

/*myprogram, 1 , 100?, <, text
 * 0         1     2   3   4  */

    assert((isdigit(argv[1])) != 0 || ((int)argv[1]<1));
    int k = atoi(argv[1]);
    int min_iter = 200;
    if (argc == 5){
        assert((isdigit(argv[2])) != 0 || ((int)argv[1]<1));
        min_iter = atoi(argv[2]);
    }
    char input_as_string [1000];/*todo - use maloc */
    FILE *file_handle = fopen(argv[(argc-1)], "r");
    int line = 0;
    while(fgets(input_as_string, 1000, file_handle)){
        line++;
    }

    int dimension = 0;
    char str[] = input_as_string[0];
    char *token = strtok(str, ",");
    while (token != NULL)
    {
        dimension++;
        token = strtod (NULL, ",");
    }
    double vector_array [line][dimension];
    fclose(file_handle);
    int i = 0;
    int j = 0;
    while (i<line){
        while(j<dimension){

        }
    }
        return 0;
}

double calc_distance(int dim, double *vector_1, double *vector_2) {
    double distance_sq_sum = 0;

    for (int ii = 0; ii < dim; ii++)
        distance_sq_sum += sqr(vector_1[ii] - vector_2[ii]);

    return distance_sq_sum;
}