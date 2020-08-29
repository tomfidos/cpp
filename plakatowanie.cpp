#include <iostream>
#include <cstdio>
#include <vector>

std::vector<int> getBuildings() {
    int buildingsNumber;
    std::cout << "Podaj liczbę budynków, a potem ich wymiary (długość wysokość): " << std::endl;
    std::ios_base::sync_with_stdio(false);
    std::cin >> buildingsNumber;
    std::vector<int> buildings;
    for (int i = 0; i < buildingsNumber; i++) {
        int building;
        std::cin >> building;
        buildings.push_back(building);
    }
    return buildings;
}

void printBuildings(std::vector<int> const &buildings ) {
    for (int i = 0; i < buildings.size(); i++) {
        std::cout << buildings.at(i) << std::endl;
    }
}

int main() {
    std::vector<int> buildings = getBuildings();
    printBuildings(buildings);
}
