
#include <stdio.h> // printf, scanf definitions

/*
*------------------------------------------------------------------
* Ambrose Ryan Xavier
*------------------------------------------------------------------
*/

typedef struct {
	int degrees;
	int minutes;
	char direction;
} latitude_longitude_t;

typedef struct {
	latitude_longitude_t latitude;
	latitude_longitude_t longitude;
} location_t;

int gcd (int m, int n){
	int ans;
	if (m%n == 0){
		ans = n;
	}
	else {
		ans = gcd(n, m%n);
	}
	return ans;
}

typedef union {
	int inum;
	double dnum;
} num_t;

typedef struct {
	char type;
	num_t num;
} num_type_t;

int main(){
	location_t NYC;
	NYC.latitude.degrees = 40;
	NYC.latitude.minutes = 42;
	NYC.latitude.direction = 'N';
	
	NYC.longitude.degrees = 74;
	NYC.longitude.minutes = 0;
	NYC.longitude.direction = 'W';
	
	printf("The coordinates for New York City are Latitude: %d %d %c, Longitude: %d %d %c\n", NYC.latitude.degrees, NYC.latitude.minutes, NYC.latitude.direction, NYC.longitude.degrees, NYC.longitude.minutes, NYC.longitude.direction);
	
	int a = 5, b = 7, c = 1, d = 4, e = 8, f = 12;
	printf("gcd for %d/%d is %d\n", a, b, gcd(b, a));
	printf("gcd for %d/%d is %d\n", c, d, gcd(d, c));
	printf("gcd for %d/%d is %d\n", e, f, gcd(f, e));
	
	num_type_t number1, number2;
	
	number1.type = 'd';
	number1.num.dnum = 123.456;
	
	number2.type = 'i';
	number2.num.inum = 125;
	
	printf("size of int is %d\n", (int)sizeof(int));
	printf("size of double is %d\n", (int)sizeof(double));
	
	printf("number1 num size is %d\n", (int)sizeof(number1.num));
	printf("number2 num size is %d\n", (int)sizeof(number2.num));
	
	printf("number1.num.inum is %d and number1.num.dnum is %lf\n", number1.num.inum, number2.num.dnum);
	printf("number2.num.inum is %d and number2.num.dnum is %lf\n", number2.num.inum, number2.num.dnum);
	return(0);
}