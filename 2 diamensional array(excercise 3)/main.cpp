//
//  main.cpp
//  2 diamensional array(excercise 3)
//
//  Created by MARTIN on 28/10/2021.
//

 

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    //declare variables
    double Array[8][2];
    double M1[2],M2[2];
    double distance,tmp;
    int i=0,j=1;

    //prompt user to enter the points
    cout<<"Enter 8 points on the cartasian plane here: ";

     for(int i=0;i<8;i++)
    {
        cin>>Array[i][0]>>Array[i][1]; //user input
        
    }
    
    //algorithm to compute the distance between two points
    tmp = sqrt((Array[i][0]-Array[j][0])*(Array[i][0]-Array[j][0])+(Array[i][1]-Array[j][1])*(Array[i][1]-Array[j][1]));
    
    distance= tmp;
    
    M1[0] = Array[i][0];
    
    M1[1] = Array[i][1];
    
    M2[0] = Array[j][0];
    
    M2[1] = Array[j][1];
    
    //for loop to continue until number of points reaches 8
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            //if i is equal to j continue
            if(i==j)
            {
                continue;
                
            }
            
            //algorithm to compute the distance between two points
            tmp = sqrt((Array[i][0]-Array[j][0])*(Array[i][0]-Array[j][0])+(Array[i][1]-Array[j][1])*(Array[i][1]-Array[j][1]));
            
            //if tmp is less than distance
            if(tmp<distance)
            {
                distance=tmp;
                
                M1[0] = Array[i][0];
                
                M1[1] = Array[i][1];
                
                M2[0] = Array[j][0];
                
                M2[1] = Array[j][1];
                
            }
            
        }
        
    } //end of for loop
    
    cout << fixed;
    cout << setprecision(2);
    
    //outputs the nearest points on the cartasian plane
    cout<<"The closest two points are ("<<M1[0]<<", "<<M1[1]<<") and ("<<M2[0]<<", "<<M2[1]<<")"<<endl;
    
    return 0;

}//end of program
