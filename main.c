
#include <stdio.h>
#include <stdlib.h>

int main() {

	int x,c,k;
	float vi,a,t,vt,xi,xt,d,l,m,p,o,i;
	start:
printf("	                        *|* Welcome to your first semester Physics advisor *|*\n\n\n Below you will find the Physics chapters that we will cover in Mechanics : \n\n\n -1- Motion in two Dimensions\n\n -2- Laws of Motion\n\n -3- Circular Motion\n\n -4- Energy of a System\n\n -5- Conservation of Energy\n\n -6- Linear Momentum and Collisions\n\n -7- Rotational motion of a Rigid object about a Fixed Axis\n\n -8- Angular Momentum\n\n -9- Static Equilibrium and Elasticity\n\n ");
	scanf("%d",&x);

	if (x==1)

	{
	    system("cls");
chap:
		printf("In this chapter you'll be asked to determine velocity (v),acceleration (a),time (t) or distance (x).\n\n to determine these quantities you have to keep in mind these 3 Kinematics equations :\n 1) Vt = Vi + at -> while Vt represents the final velocity and Vi the initial velocity\n\n 2) Xt = Xi + Vi*t + (1/2)*a*t(sqr)\n\n 3) Vf(sqr) = Vi(sqr)+ 2*a*d \n\n\n *-1-* Use Kinematics calculator\n\n\n *-2-*  Review exercice (Summary)\n\n\n\n *-0-*  |Return| ");
		scanf("%d",&c);

 if (c==1)
    {system("cls"); printf(" Choose the kinematics equation that you want to use \n -1- Vt = Vi + a*t\n -2- Xt= Xi + Vi*t + (1/2)*a*t(sqr)\n -3-
                           Vf(sqr) = Vi(sqr) + 2*a*d \n\n\n\n *-0-*  |Return to the main menu| \n\n\n\n *-9-*  |Return to the chapter menu|");
    scanf("%d",&k);
    if (k==1)
        {printf(" Please enter the initial velocity , the acceleration and the time in this order\n");
        scanf("%f %f %f",&vi,&a,&t);
        vt= vi+a*t;
        printf("Vt = %.2f m/s",vt);
        }
    else if (k==2)
        {
        printf(" Please enter the initial position , initial velocity , time and acceleration respectively\n");
        scanf("%f %f %f %f",&xi,&vi,&t,&a);
        xt =xi+vi*t+(1/2)*a*t*t;
        printf(" The final position is %.2f m",xt);
        }
    else if (k==3)
        {printf(" Please enter the initial velocity the acceleration and distance\n");
        scanf("%f %f %f",&vi,&a,&d);
        vt=sqrt(vi/2*a*d);
        printf(" The final velocity is %.2f m/s",vt);}
    else if (k==0)
        {
        system("cls");
        goto start;
        }
    else if (k==9)
    system("cls");
    goto chap;
}
else if (c==2)
{
    printf("review exercice check");
}
else if (c==0)
{
    system("cls");
    goto start;
}

	}

else if (x==2)
{
    system("cls");
    printf(" In this chapter you'll get familiar with Newton's 3 laws and they are the following : \n\n -*1*- Objects that are at rest will remain at rest and objects that are in motion will remain at motion unless acted\n       upon by a net force.\n\n -*2*- The second law states that the acceleration(a) of an object is dependent upon 2 variables , the mass (m) of the\n       object and the force(F) acting on it and can be summarized in the equation F = ma\n\n -*3*- Newton's 3rd law states that every action has a reaction equal in magnitude and opposite in direction. \n\n\n\n *-0-*  |Return| ");
    scanf("%d",&l);
    if (l==0)
    {
        system("cls");
        goto start;
    }
}
 chap3:
else if (x==3)
{
     system ("cls");
     printf(" In this chapter we will introduce circular motion.\n\n We have 2 types of circular motions and they are as follows\n\n\n -*1*- Uniform Circular Motion\n\n\n\n -*2*- Non Uniform Circular Motion \n\n\n\n -*0*- |Return to the main Menu|\n");
     scanf("%d",&k);

    if (k==1)
     {       system("cls");
             printf(" Uniform Circular Motion implies that the speed is constant and the direction changes.\n A particle moving in uniform circular motion has a centripetal acceleration.\n This acceleration must be provided by a net force directed toward the center of the circular path.\n\n The centripetal acceleration can be calculated by the following equation\n\n\n a = (V*V)/r \n\n\n -*0*- |Return to the main menu| \n\n\n -*9*- |Return to the chapter menu|");
             scanf("%d",&p);
             if (p==9)
         {
             system("cls");
             goto chap3;
         }
     }
     else if (p==2)
     {   system ("cls");
         printf(" Non Uniform Circular Motion implies that the speed and the direction changes. \n \n\n\n Tangential acceleration can be calculated as follows \n\n at (tangential)= dv/dt \n\n\n The Total acceleration can be calculated as follows \n\n a = sqrt(sqr(at)+sqr(ac)) ");
         scanf("%d",&p);
         if (i==9)
    {
        system("cls");
        goto chap3;
    }
    else if (i==0)
    {
        system("cls");
        goto start;
    }
     }

else if (k==0)
{
    system("cls");
    goto start;
}

}

else if (x==4)
{   system("cls");
    printf(" \n\n -*1*- Work \n\n -*2*- Kinetic Energy \n\n -*3*- Potential Energy \n\n -*4*- Mechanical Energy ");
    scanf("%d",&p);
}
if (p==1)
{
    printf("success");
}
	return 0;
}

