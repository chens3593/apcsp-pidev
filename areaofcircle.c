
#include <stdio.h>
float areaOfCircle( float r )
{
	return 3.14*r*r;
}
int main()
{
	float r;
	for(int i=3; i<13; i++)
	{
		r = i+0.5;
		printf("Circle of radius %f has area %f\n", r, areaOfCircle(r) );
	}
} 
