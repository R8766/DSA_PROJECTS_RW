#include <iostream>
#include <queue>
#include <cstdlib>
#include <ctime>
using namespace std;

// Structure to represent a customer
struct Customer {
    int id;          // Customer ID
    int serviceTime; // Time needed to serve
};

int main() {
    srand(time(0));          // Seed for random numbers
    queue<Customer> q;       // Queue to hold waiting customers
    int totalCustomers = 0;  // Total customers arrived
    int servedCustomers = 0; // Total customers served

    const int reps = 3;      // Number of service representatives
    int repTime[reps] = {0}; // Remaining service time for each rep
    int repCustomer[reps] = {-1, -1, -1}; // Customer ID being served by each rep

    const int simulationMinutes = 20; // Duration of simulation

    for (int minute = 1; minute <= simulationMinutes; minute++) {
        cout << "\nMinute " << minute << ":\n";

        // Random customer arrival (50% chance)
        if (rand() % 2 == 0) {
            Customer c;
            c.id = ++totalCustomers;
            c.serviceTime = rand() % 5 + 1; // Service time between 1-5 minutes
            q.push(c);
            cout << "Customer " << c.id << " arrived (service time: " << c.serviceTime << " mins).\n";
        }

        // Serve customers
        for (int i = 0; i < reps; i++) {
            // If rep is busy, decrease remaining service time
            if (repTime[i] > 0) {
                repTime[i]--;
                // If service finished
                if (repTime[i] == 0) {
                    cout << "Representative " << i+1 << " finished serving Customer " << repCustomer[i] << ".\n";
                    servedCustomers++;
                    repCustomer[i] = -1; // Rep becomes free
                }
            }

            // Assign next customer if rep is free and queue not empty
            if (repTime[i] == 0 && !q.empty()) {
                Customer c = q.front(); q.pop();
                repTime[i] = c.serviceTime;
                repCustomer[i] = c.id;
                cout << "Representative " << i+1 << " started serving Customer " << c.id << ".\n";
            }
        }

        // Display queue and representative status
        cout << "Customers in queue: " << q.size() << "\n";
        for (int i = 0; i < reps; i++) {
            if (repCustomer[i] != -1)
                cout << "Rep " << i+1 << " serving Customer " << repCustomer[i]
                     << " (" << repTime[i] << " mins left)\n";
        }
        cout << "Total customers served so far: " << servedCustomers << "\n";
    }

    cout << "\nSimulation ended. Total customers served: " << servedCustomers << "\n";

    return 0;
}
