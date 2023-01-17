#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// calculate distance between two cities
int dist(char city1, char city2) {
    // Example for 4 cities / Input size
    if(city1 == 'A') {
        if(city2 == 'B') return 10;
        else if(city2 == 'C') return 20;
        else if(city2 == 'D') return 30;
    }
    else if(city1 == 'B') {
        if(city2 == 'A') return 10;
        else if(city2 == 'C') return 10;
        else if(city2 == 'D') return 20;
    }
    else if(city1 == 'C') {
        if(city2 == 'A') return 20;
        else if(city2 == 'B') return 10;
        else if(city2 == 'D') return 15;
    }
    else if(city1 == 'D') {
        if(city2 == 'A') return 30;
        else if(city2 == 'B') return 20;
        else if(city2 == 'C') return 15;
    }
    return -1;
}

int main() {
    vector<char> cities = {'A', 'B', 'C', 'D'};
    vector<char> route;
    int shortest_distance = INT_MAX;
    do {
        int distance = 0;
        for (int i = 0; i < cities.size()-1; i++) {
            distance += dist(cities[i], cities[i+1]);
        }
        if (distance < shortest_distance) {
            route = cities;
            shortest_distance = distance;
        }
    } while (next_permutation(cities.begin(), cities.end()));
    cout << "Shortest route: ";
    for (auto city : route) {
        cout << city << " ";
    }
    cout << endl << "Shortest distance: " << shortest_distance << endl;
    return 0;
}
