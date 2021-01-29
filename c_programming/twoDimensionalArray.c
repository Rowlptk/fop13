

void main() {
    /*int mat[3][3] = {
                        {1,4,2},
                        {5,78,0},
                        {-8,6,10}
                    };
    printf("%d",mat[2][0]);
    mat[2][0] = -90;
    printf("%d",mat[2][0]);*/
    int mat1[3][3], mat2[3][3];

    printf("Enter value of mat1: \n");
    for(int j=0; j<3; j++) {
        for(int i=0; i<3; i++) {
            printf("mat1[%d][%d] = ", j, i);
            scanf("%d",&mat1[j][i]);
        }
    }

    printf("\nEnter value of mat2: \n");
    for(int j=0; j<3; j++) {
        for(int i=0; i<3; i++) {
            printf("mat2[%d][%d] = ", j, i);
            scanf("%d",&mat2[j][i]);
        }
    }

    printf("\nThe Sum of Mat1 and Mat2 is : \n");
    for(int j =0; j<3; j++) {
        for (int i=0; i<3; i++) {
            printf("%d  ",mat1[j][i] + mat2[j][i]);
        }
        printf("\n");
    }


    /*printf("Values of matrix is : \n");
    for(int j=0; j<3; j++) {
        for(int i=0; i<3; i++) {
            printf("%d  ",mat[j][i]);
        }
        printf("\n");
    }*/


}



// string
