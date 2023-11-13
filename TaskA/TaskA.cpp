#include <iostream>

using namespace std;

bool isalive(int dX, int dY, int gX, int gY, int nX, int nY) {

}

int main()
{
	int gopherX, gopherY;
	int dogX, dogY;
	cin >> gopherX >> gopherY;
	cin >> dogX >> dogY;
	int n;
	bool stop = 0;
	bool found = 0;
	cin >> n;
	int norX, norY;
	for (int i = 0; i < n && stop==0; i++) {
		cin >> norX >> norY;
		found = isalive(dogX,dogY,gopherX,gopherY,norX,norY);
	}

}