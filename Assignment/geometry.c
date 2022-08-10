#include<stdio.h>
#include<math.h>
int main() {
    //variable declaration
    int passcode;
    //user interaction
    printf("Hey user, Enter the 4 digit passcode: \n");
    //user input asking the passcode
    scanf("%d", &passcode);
    if(passcode==2002)//if the passcode is correct
    {
        printf("Valid Passcode \n ");
        //calculator will work finding geometric functions
        //variable declaration
        int shape;
        //user interaction
        printf("Choose number according to shape; 1 for square, 2 for circle, 3 for rectangle, 4 for cube, 5 for cuboid, 6 for cylinder \n ");
        //asking user the shape number to find geometric functions of that specific shape
        scanf("%d", &shape);
        if (shape==1) //if user wants to work with square 
        {
            int square;
            //user interaction
            printf("Type 1 for area of square, type 2 for perimeter of square \n");
            //user input 
            scanf("%d",&square);
            if(square==1) //nested if 
            {
               //variable declaraction
               float length;
               float area;
               //user interaction
               printf("enter the length of one side of square: \n");
               //user input
               scanf("%f", &length);
               //formula of area of square
               area=length*length;
               printf("\n Area of square=%.2f \n", area);
            }
            else if(square==2) //perimeter of square
            {
               //variable declaration
               float length;
               float perimeter;
               //user interaction
               printf("enter the length of one side of square: \n");
               //user input
               scanf("%f", &length);
               //formula for perimeter of square
               perimeter=4*length;
               printf("\n Perimeter of square=%.2f \n",perimeter);  
            }
            else //if user typed any other number than 1 or 2
            {
                printf("can't find the required thing for a square \n");
            }
        }
        else if(shape==2) //condition for working on circle
        {
            //variable declaraction
           int circle;
           //user interaction
            printf("Type 1 for area of circle, type 2 for circumference of circle \n");
            //user input
            scanf("%d",&circle);
            if(circle==1) //circle area
            {
                //variable declaration
               float radius;
               float area;
               //user interaction
               printf("enter the radius of circle: \n");
               //user input
               scanf("%f", &radius);
               //formula
               area=3.14*radius*radius;
               printf("\n Area of circle=%.2f \n", area);
            }
            else if(circle==2) //circle circumference
            {
                //variable declaration
               float radius;
               float circumference;
               //user interaction
               printf("enter the radius of one side of circle: \n");
               //user input
               scanf("%f", &radius);
               //formula
               circumference=2*3.14*radius;
               printf("\n circumference of circle=%.2f \n",circumference);  
            }
            else //if typed number other than 1 or 2
            {
                printf("can't find the required thing for a circle \n");
            } 
        }
        else if(shape==3) //for rectangle
        {
            //variable declaration
            int rectangle;
            //user interaction
            printf("Type 1 for area of rectangle, type 2 for perimeter of rectangle \n");
            //user input
            scanf("%d",&rectangle);
            if(rectangle==1) //area of rectangle
            {
                //variable declaraction
               float length;
               float breadth;
               float area;
               //user interaction
               printf("enter the length and breadth of rectangle: \n");
               //user input
               scanf("%f %f", &length, &breadth);
               //formula
               area=length*breadth;
               printf("\n Area of rectangle=%.2f \n", area);
            }
            else if(rectangle==2) //perimeter of rectangle
            {
                //variable declaration
               float length;
               float breadth;
               float perimeter;
               //user interaction
               printf("enter the length and breadth of rectangle: \n");
               //user input
               scanf("%f %f", &length, &breadth);
               //formula
               perimeter=2*(length+breadth);
               printf("\n perimeter of rectangle=%.2f \n",perimeter);  
            }
            else //if typed number other than 1 or 2
            {
                printf("can't find the required thing for a rectangle \n");
            } 
        }
        else if(shape==4) //for cube
        {
            //variable declaration
            int cube;
            //user interaction
            printf("Type 1 for volume of cube, type 2 for surface area of cube \n");
            //user input
            scanf("%d",&cube);
            if(cube==1) //volume of cube
            {
                //variable declaration
               float length;
               float volume;
               //user interaction
               printf("enter the length of one side of cube: \n");
               //user input
               scanf("%f", &length);
               //formula
               volume=length*length*length;
               printf("\n Volume of cube=%.2f \n", volume);
            }
            else if(cube==2) //surface area of cube
            {
                //variable declaraction
               float length;
               float surface_area;
               //user interaction
               printf("enter the length of one side of cube: \n");
               //user input
               scanf("%f", &length);
               //formula
               surface_area=6*(length*length);
               printf("\n surface_area of cube=%.2f \n",surface_area);  
            }
            else //if typed number other than 1 or 2
            {
                printf("can't find the required thing for a cube \n");
            } 
        }
        else if(shape==5) //for cuboid
        {
            //variable declaration
            int cuboid;
            //user interaction
            printf("Type 1 for volume of cuboid, type 2 for surface area of cuboid \n");
            //user input
            scanf("%d",&cuboid);
            if(cuboid==1) //volume of of cuboid
            {
                //variable declaration
               float length;
               float width;
               float height;
               float volume;
               //user interaction
               printf("enter the length, width, height of cuboid: \n");
               //user input
               scanf("%f %f %f", &length, &width, &height);
               //formula
               volume=length*width*height;
               printf("\n Volume of cuboid=%.2f \n", volume);
            }
            else if(cuboid==2) //surface area of cuboid
            {
                //variable declaration
               float length;
               float width;
               float height;
               float surface_area;
               //user interaction
               printf("enter the length, width, height of cuboid: \n");
               //user input
               scanf("%f %f %f", &length, &width, &height);
               //formula
               surface_area=2*((length*width)+(length*height)+(height*width));
               printf("\n surface_area of cuboid=%.2f \n",surface_area);  
            }
            else //if typed number other than 1 or 2
            {
                printf("can't find the required thing for a cuboid \n");
            } 
        }
        else if(shape==6) //for cylinder
        {
            //variable declaration
            int cylinder;
            //user interaction
            printf("Type 1 for volume of cylinder, type 2 for surface area of cylinder \n");
            //user input
            scanf("%d",&cylinder);
            if(cylinder==1) //volume of cylinder
            {
                //variable declaration
               float radius;
               float height;
               float volume;
               //user interaction
               printf("enter the radius, height of cylinder: \n");
               //user input
               scanf("%f %f",&radius, &height);
               //formula
               volume=3.14*radius*radius*height;
               printf("\n Volume of cylinder=%.2f \n", volume);
            }
            else if(cylinder==2) //surface area of cylinder
            {
                //variable declaration
               float radius;
               float height;
               float surface_area;
               //user interaction
               printf("enter the radius, height of cylinder: \n");
               //user input
               scanf("%f %f", &radius, &height);
               //formula
               surface_area=(2*3.14*radius)*(height+radius);
               printf("\n surface_area of cylinder=%.2f \n",surface_area);  
            }
            else //if typed number other than 1 or 2
            {
                printf("can't find the required thing for a cylinder \n");
            } 
        }
    }
    else //if user typed wrong passcode
    {
        printf("Invalid password \n");
    }  
    return 0;
}