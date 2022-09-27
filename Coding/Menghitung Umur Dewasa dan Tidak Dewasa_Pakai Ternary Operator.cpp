#include <iostream>
using namespace std;

int main ()
{
	int umur;
	printf("ENTER YOUR AGE : "); scanf("%d", &umur);
	(umur > 17) ? printf("\"YOU ARE AN ADULT\"") : printf("\"YOU ARE NOT AN ADULT\"");
	
    return 0;
}