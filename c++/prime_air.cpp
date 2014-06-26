#include <math.h>
#include <iostream>

/** https://brilliant.org/community-problem/traveling-sales-drone/?group=MP36FxMmhopW&ref_id=78034 
    Given a list of location coordinates on which an amazon prime drone must deliver packages to,
	find what's the smallest distance the drone can fly.

	In this solution, I'll make a list of coordinates, calculate the distance between each point and sum it,
	and repeat for all the possible permutations.

	I believe the order of this solution is O(n!), since n for this specific problem is only 6 packages plus the origin (0,0),
	we'd only be looking at 7! = 5,040 operations only, nothing for a computer.
*/

using namespace std;

struct Package {
public:
	const int x;
	const int y;

	Package(int xCoord, int yCoord) : x(xCoord), y(yCoord) {};
	double distance(Package* other);
};

double Package::distance(Package* other) {
	return sqrt(pow((double) other->x - x, 2) + pow((double) other->y - y, 2));
}

int main() {
	Package p1(0, 0);
	Package p2(0, 10);

	cout << "Distance " << p1.distance(&p2) << endl;

	return 0;
}