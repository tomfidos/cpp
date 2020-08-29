#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>
#include <vector>

int getHeight() {
    std::string dimensions;
    std::getline(std::cin >> std::ws, dimensions);
    std::stringstream is(dimensions);
    int dimension;
    int bothDimensions [2]; 
    for (int i = 0; i < 2; i++) {
        is >> dimension;
        bothDimensions[i] = dimension;
    }
    return bothDimensions[1];
}

std::vector<int> getBuildingHeights() {
    int buildingsNumber;
    std::cout << "Podaj liczbę budynków, a potem ich wymiary (długość wysokość): " << std::endl;
    std::ios_base::sync_with_stdio(false);
    std::cin >> buildingsNumber;
    std::vector<int> buildingHeights;
    for (int i = 0; i < buildingsNumber; i++) {
        int height = getHeight();
        buildingHeights.push_back(height);
    }
    return buildingHeights;
}

int getUtilizedPosters(std::vector<int> buildingHeights) {
    std::vector<int> posters;
    int utilizedPosters = 0;
    for (std::vector<int>::iterator it = buildingHeights.begin(); it != buildingHeights.end(); ++it) {
        while (posters.size() != 0 && posters.front() > *it) {
            posters.erase(posters.begin());
        }
        if (posters.size() == 0 || posters.front() < *it) {
            posters.insert(posters.begin(), *it);
            utilizedPosters++;
        }
    }
    return utilizedPosters;
}

int main() {
    std::vector<int> buildingHeights = getBuildingHeights();
    int utilizedPosters = getUtilizedPosters(buildingHeights);
    std::cout << utilizedPosters << std::endl;
}
