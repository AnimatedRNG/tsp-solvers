#ifndef TOUR_H
#define TOUR_H

#include <graph.h>
#include <algorithm>
#include <cmath>

const double MAX_DIST_CITY = 999.0;
const double MIN_DIST_CITY = 100.0;

const long SEED = 42;

typedef std::vector< Graph::Edge > path;

class Tour: public Graph {
public:
	Tour();
	Tour(int numCities);

	double getTourLength(path& tour);

	path solveRandom();
	path solveRandomWithSwitches(double maxLength, int maxTries);
	path solveSimulatedAnnealing(double initialTemp, double finalTemp, double tempLoss);

	static void printPath(const path path);
private:
	path getRandomPath();
	std::pair<int, int> pickRand(int size);
	path swap(const path& tour, int firstVertex, int secondVertex);

	std::shared_ptr< path > currentTour;
};

#endif // TOUR_H
