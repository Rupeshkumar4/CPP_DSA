#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
#include <string>

using namespace std;

vector<string> circles(vector<string>& info) {
    vector<string> result;

    for (const string& i : info) {
        // Parse the descriptors for circle A and circle B
        int xA, yA, rA, xB, yB, rB;
        stringstream ss(i);
        ss >> xA >> yA >> rA >> xB >> yB >> rB;

        // Calculate the distance between the centers of the circles
        double distance = sqrt(pow(xA - xB, 2) + pow(yA - yB, 2));

        // Check the relationship between the circles based on their positions and sizes
        if (distance == (rA + rB)) {
            result.push_back("Touching");
        } else if (distance == 0 && (rA == rB)) {
            result.push_back("Concentric");
        } else if (distance < (rA + rB)) {
            result.push_back("Intersecting");
        } else if (distance > (rA + rB)) {
            if (distance > max(rA, rB)) {
                result.push_back("Disjoint-Outside");
            } else {
                result.push_back("Disjoint-Inside");
            }
        }
    }

    return result;
}

int main() {
    vector<string>str = {"1 2 3 4 5 6", "7 8 9 10 11 12", "13 14 15 16 17 18"};

    vector<string> result = circles(str);

    for (auto it :result) {
        cout << it << " ";
    }

    return 0;
}