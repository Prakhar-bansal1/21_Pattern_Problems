#include<iostream>
using namespace std;

void rhombusPattern(int n) {
    for(int i=1; i<=n; i++) {
        //Spaces 
        for(int j=1; j<=n-i; j++) {
            cout<<" ";
        }
        for(int j=1; j<=n; j++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

/**
    * * * * * 
   * * * * * 
  * * * * *
 * * * * * 
* * * * * 

*/

void hollow_rhombus_pattern(int n) {
    for(int i=1; i<=n; i++) {
        //spaces
        for(int j=1; j<=n-i; j++) {
            cout<<"  ";
        }
        for(int j=1; j<=n; j++) {
            if(i==1 || i==n || j==1 || j==n) {
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

/*

        * * * * * 
      *       * 
    *       * 
  *       * 
* * * * * 

*/

void rectangle(int r, int c) {
    for(int i=1; i<=r; i++) {
        for(int j=1; j<=c; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}

/*

* * * * * 
* * * * * 
* * * * *
* * * * *
* * * * *

*/

void hollow_rectangle(int r, int c) {
    for(int i=1; i<=r; i++) {
        for(int j=1; j<=c; j++) {
            if(i==1 || i==r || j==1 || j==c) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

/*

* * * * * 
*       *
*       *
*       * 
* * * * *

*/

void half_pyramid(int r) {
    for(int i=1; i<=r; i++) {
        for(int j=1; j<=i; j++) {
           cout<<"* ";
        }
        cout<<endl;
    }
}

/*

* 
* * 
* * * 
* * * * 
* * * * *

*/
 
void inverted_half_pyramid(int r) {
    for(int i=r; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}

/*

* * * * *
* * * *
* * * 
* * 
*

*/

void half_pyramid_after_180_degree_rotation(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(j <= n-i) {
                cout<<" ";
            }
            else cout<<"*";
        }
        cout<<"\n";
    }
} 

/*

        *
      * * 
    * * *
  * * * * 
* * * * * 

*/

void column_number_half_pyramid(int r) {
     for(int i=1; i<=r; i++) {
        for(int j=1; j<=i; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
     }
}

/*

1
1 2 
1 2 3 
1 2 3 4
1 2 3 4 5

*/

void column_number_inverted_half_pyramid(int r) {
    for(int i=r; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

/*
 
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1

*/


void row_number_half_pyramid(int r) {
    for(int i=1; i<=r; i++) {
        for(int j=1; j<=i; j++) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

/*

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

*/

void row_number_inverted_half_pyramid(int r) {
    for(int i=1; i<=r; i++) {
        //formula for calculate the number of elements = row no. - i + 1
        //ex; row no. = 5
        //5 - 1 + 1 = 5 elements in first row
        //5 - 2 + 1 = 4 elements in second row
        //and so on
        for(int j=1; j<=r-i+1; j++) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

/*

1 1 1 1 1 
2 2 2 2 
3 3 3 
4 4 
5 

*/

void floyd_triangle(int n) {
    int count = 1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}


/*

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/

void zero_one_pattern(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if((i+j) % 2 == 0) {
                cout<<"1"<<" ";
            }
            else {
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
}

/*

1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 

*/

void palindromic_pattern(int n) {
    int i, j;
    for(i=1; i<=n; i++) {
        //spaces
        for(j=1; j<=(n-i); j++) {
           cout<<" "<<" ";
        }
        //printing elements
        int count = i;
        for(; j<=n; j++) {
            cout<<count<<" ";
            count--;
        }
        count = 2;
        for(; j<(n+i); j++) {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}

/*

        1     
      2 1 2    
    3 2 1 2 3   
  4 3 2 1 2 3 4  
5 4 3 2 1 2 3 4 5 

*/

void star_diamond(int n) {
    int i, j;
    for(i=1; i<=n; i++) {
        //spaces
        for(j=1; j<=n-i; j++) {
           cout<<" "<<" ";
        }
        //printing stars
        for(; j<n+i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    //inverted
    for(i=n-1; i>=1; i--) {
        //spaces
        for(j=1; j<=n-i; j++) {
           cout<<" "<<" ";
        }
        //printing stars
        for(; j<n+i; j++) {
           cout<<"* ";
        }
        cout<<endl;
    }
}

/*
 
                  * 
                * * * 
              * * * * * 
            * * * * * * * 
          * * * * * * * * * 
        * * * * * * * * * * * 
      * * * * * * * * * * * * * 
    * * * * * * * * * * * * * * * 
  * * * * * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * * * * * 
  * * * * * * * * * * * * * * * * * 
    * * * * * * * * * * * * * * * 
      * * * * * * * * * * * * * 
        * * * * * * * * * * * 
          * * * * * * * * * 
            * * * * * * * 
              * * * * * 
                * * * 
                  * 

*/

void hollow_star_diamond(int n) {
    for(int i=1; i<=n; i++) {
        //spaces
        for(int j=1; j<=n-i; j++) {
           cout<<" "<<" ";
        }
        //printing stars
        for(int j=1; j<=2*i-1; j++) {
            if(j == 1 || j == 2*i-1) {
                cout<<"* ";
            }
            else {
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
    //inverted
    for(int i=n-1; i>=1; i--) {
        //spaces
        for(int j=1; j<=n-i; j++) {
           cout<<" "<<" ";
        }
        //printing stars
        for(int j=1; j<=2*i-1; j++) {
            if(j == 1 || j == 2*i-1) {
                cout<<"* ";
            }
            else {
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
}


/*

                  * 
                *   * 
              *       * 
            *           * 
          *               * 
        *                   * 
      *                       * 
    *                           * 
  *                               * 
*                                   * 
  *                               * 
    *                           * 
      *                       * 
        *                   * 
          *               * 
            *           * 
              *       * 
                *   * 
                  * 

*/


void column_number_pattern(int n) {
    for(int i=1; i<=n; i++) {
        //spaces
        for(int j=1; j<=n-i; j++) {
            cout<<" ";
        }
        //printing elements
        for(int j=1; j<=i; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

/*

    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5 

*/

void row_number_pattern(int n) {
    for(int i=1; i<=n; i++) {
        //spaces
        for(int j=1; j<=n-i; j++) {
            cout<<" ";
        }
        //elements
        for(int j=1; j<=i; j++) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

/*

    1 
   2 2 
  3 3 3 
 4 4 4 4 
5 5 5 5 5

*/

void zigzag_pattern(int col) {
     for(int i=1; i<=3; i++) {
        for(int j=1; j<=col; j++) {
            if((i+j)%4 == 0 || (i==2 && j%4==0)) {
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
     }
}

/*

    *       *       *       *     
  *   *   *   *   *   *   *   *   
*       *       *       *       * 

*/

void hollow_diamond_inscribed_in_rectangle(int n) {
     int space = (2*n-1)/2;
     for(int i=1; i<=n; i++) {
        for(int j=1; j<=space; j++) {
            cout<<"*";
        }
        for(int j=1; j<=2*i-1; j++) {
            if(j == 1 || j == 2*i-1) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        for(int j=1; j<=space; j++) {
            cout<<"*";
        }
        cout<<endl;
        space--;
     }
     space = 0;
     for(int i=n; i>=1; i--) {
        for(int j=1; j<=space; j++) {
            cout<<"*";
        }
        for(int j=1; j<=2*i-1; j++) {
            if(j == 1 || j == 2*i-1) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        for(int j=1; j<=space; j++) {
            cout<<"*";
        }
        cout<<endl;
        space++;
     }
}


/*

*****************
******** ********
*******   *******
******     ******
*****       *****
****         ****
***           ***
**             **
*               *
*               *
**             **
***           ***
****         ****
*****       *****
******     ******
*******   *******
******** ********
*****************

*/

//calculates factorial of any number, we'll use this for calculate nCr
int factorial(int n) {
    int fact = 1;
    for(int i=2; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

void pascal_triangle(int n) {
    //pascal triangle using nCr concept of mathematics
    //nCr formula is : n!/r!*(n-r)!
    for(int i=0; i<n; i++) {
        //spaces 
        for(int j=0; j<=n-i; j++) {
            cout<<" ";
        }
        for(int j=0; j<=i; j++) {
           cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
        }
        cout<<endl;
    }
}

/*

    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1

*/

void nextLine() {
    cout<<endl;
}

int main() {
    rhombusPattern(5);
    nextLine();
    rectangle(5, 4);
    nextLine();
    hollow_rectangle(5, 4);
    nextLine();
    half_pyramid(5);
    nextLine();
    inverted_half_pyramid(5);
    nextLine();
    half_pyramid_after_180_degree_rotation(5);
    nextLine();
    column_number_half_pyramid(5);
    nextLine();
    column_number_inverted_half_pyramid(10);
    nextLine();
    row_number_half_pyramid(5);
    nextLine();
    row_number_inverted_half_pyramid(5);
    nextLine();
    floyd_triangle(5);
    nextLine();
    zero_one_pattern(5);
    nextLine();
    palindromic_pattern(5);
    nextLine();
    star_diamond(10);
    nextLine();
    hollow_star_diamond(10);
    nextLine();
    column_number_pattern(5);
    nextLine();
    zigzag_pattern(17);
    nextLine();
    hollow_diamond_inscribed_in_rectangle(9);
    nextLine();
    hollow_rhombus_pattern(5);
    nextLine();
    row_number_pattern(5);
    nextLine();
    pascal_triangle(6);
    return 0;
}