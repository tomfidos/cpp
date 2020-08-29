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

std::vector<int> getBuildings() {
    int buildingsNumber;
    std::cout << "Podaj liczbę budynków, a potem ich wymiary (długość wysokość): " << std::endl;
    std::ios_base::sync_with_stdio(false);
    std::cin >> buildingsNumber;
    std::vector<int> buildings;
    for (int i = 0; i < buildingsNumber; i++) {
        int building = getHeight();
        buildings.push_back(building);
    }
    return buildings;
}

int main() {
    std::vector<int> buildings = getBuildings();
}
