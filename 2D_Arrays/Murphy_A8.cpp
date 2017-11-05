//----------------------------------------------------------------------------
// EGR 126 ELI Fall 2017
//----------------------------------------------------------------------------
// Developer : Rich MURPHY
// Project : Assignment #8
// Submission Date : 10/21/17
// Complier Info : MacOS, Xcode
// Purpose : This program allows a user to modify a given matrix by adding to a range of values in a given array.
//----------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#define myRow 7
#define myClmn 7

using namespace std;

int x,y,sClmn,sRow,eClmn,eRow,number;

int main ()
{
// This is matrix that we were given to start with.
    int mymatrix[myRow][myClmn] = {     {2,5,6,3,5,9,1},
                                        {3,0,8,5,6,1,2},
                                        {6,4,9,6,5,2,3},
                                        {1,-4,2,5,1,0,4},
                                        {4,9,6,2,2,7,5},
                                        {7,1,6,9,8,9,6},
                                        {-2,-3,-4,5,-6,-7,7}};
    
    cout << "---------------------------------------------------" <<endl;
    cout << "\tRich MURPHY" <<endl;
    cout << "\tSolution for Assignment #8" <<endl;
    cout << "---------------------------------------------------" <<endl;
    cout << endl;
    
//------Here we display the initial matrix before adjustment------//
            cout << "Section #1 : Display The Matrix" << endl;
            cout << endl;
            for (x=0;x<myRow; x++) // builds a matrix of "myRow" number of rows.
                {
                for (y=0; y<myClmn; y++) // builds a matrix of "myClmn" number of cols.
                    cout<< setw(7)<<mymatrix[x][y]; // displays the matrix
                    cout<<endl;
                }
            cout << endl;
    
//------We get the user to give us an amount to add as well as the range to add it to------//
            cout <<"Section #2 : Get Input from the User" <<endl;
            cout << endl;
            cout <<"\t\tWhat number would you like to add: ";
            cin >> number;
            cout << endl;
            cout <<"\tDefine the section of the matrix to add the number"<<endl;
            cout << endl;
            cout <<"\t\tEnter the starting cell address:"<<endl;
            cout <<"\t\t\tRow: ";
            cin >>sRow;
            cout <<"\t\t\tColumn: ";
            cin >>sClmn;
            cout << endl;
            cout <<"\t\tSelect ending cell address: "<<endl;
            cout <<"\t\t\tRow: ";
            cin >> eRow;
            cout <<"\t\t\tColumn: ";
            cin >> eClmn;
            cout << endl;
    
    
//------Here we redisplay the matrix after adding the entered quantity to the desired range-----//
            cout <<"Section #3 : Matrix after the process"<<endl;
            cout << endl;
    
                    for(x=sRow;x<=eRow;x++) // iterates for the desired row span
                                {
                            for (y=sClmn;y<=eClmn;y++) // iterates for the desired col span
                                mymatrix[x][y]=number+mymatrix[x][y]; // adds the desired amount to the desired range in the matrix
                                }
    
                    for(x=0;x<myRow;x++)
                            {
                            for (y=0;y<myClmn;y++)
                            cout <<setw(7)<<mymatrix[x][y]; // redisplays the matrix with the changes
                            cout<<endl;
                            }
            cout << endl;
            cout<< "---------------------------------------------------"<<endl;
            cout<< "\tEnd of Assignment #8"<<endl;
            cout<< "---------------------------------------------------"<<endl;
    
    system("pause");
    
return 0;
}


