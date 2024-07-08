#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Event {
public:
    string name;
    string date;
    string location;
    string category;

    Event(string name, string date, string location, string category) {
        this->name = name;
        this->date = date;
        this->location = location;
        this->category = category;
    }

    void display() const {
        cout << "Event Name: " << name << endl;
        cout << "Date: " << date << endl;
        cout << "Location: " << location << endl;
        cout << "Category: " << category << endl;
    }
};

class EventManager {
private:
    vector<Event> events;

public:
    void addEvent(const string& name, const string& date, const string& location, const string& category) {
        events.push_back(Event(name, date, location, category));
        cout << "Event added successfully!" << endl;
    }

    void deleteEvent(const string& name) {
        auto it = find_if(events.begin(), events.end(), [&](const Event& e) { return e.name == name; });
        if (it != events.end()) {
            events.erase(it);
            cout << "Event deleted successfully!" << endl;
        } else {
            cout << "Event not found." << endl;
        }
    }

    void displayEvents() const {
        if (events.empty()) {
            cout << "No events available." << endl;
            return;
        }

        for (const auto& event : events) {
            event.display();
            cout << "-------------------------" << endl;
        }
    }

    void displayEventsByCategory(const string& category) const {
        bool found = false;
        for (const auto& event : events) {
            if (event.category == category) {
                event.display();
                cout << "-------------------------" << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "No events found in the category: " << category << endl;
        }
    }

    void searchEvent(const string& name) const {
        for (const auto& event : events) {
            if (event.name == name) {
                event.display();
                return;
            }
        }
        cout << "Event not found." << endl;
    }
};

EventManager manager;
string name, date, location, category;
int manager_pass;

void manager_login() {
    int choice;
    cout << "1. Add new event" << endl;
    cout << "2. Delete event" << endl;
    cout << "3. Change password" << endl;
    cout << "4. Go back" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore(); // To ignore the newline character left by cin
    switch (choice) {
        case 1:
            cout << "Enter event name: ";
            getline(cin, name);
            cout << "Enter event date (YYYY-MM-DD): ";
            getline(cin, date);
            cout << "Enter event location: ";
            getline(cin, location);
            cout << "Enter event category: ";
            getline(cin, category);
            manager.addEvent(name, date, location, category);
            break;
        case 2:
            cout << "Enter event name to delete: ";
            getline(cin, name);
            manager.deleteEvent(name);
            break;
        case 3:
            cout << "Enter new password: ";
            cin >> manager_pass;
            cout << "Password changed successfully!" << endl;
            break;
        case 4:
            break;
        default:
            cout << "Invalid choice, please try again." << endl;
    }
}

void user_login() {
    int choice;
    
    cout << "1. Display events" << endl;
    cout << "2. Display events by category" << endl;
    cout << "3. Search event" << endl;
    cout << "4. Go back" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore(); // To ignore the newline character left by cin
    switch (choice) {
        case 1:
            manager.displayEvents();
            break;
        case 2:
            cout << "Enter event category: ";
            getline(cin, category);
            manager.displayEventsByCategory(category);
            break;
        case 3:
            cout << "Enter event name to search: ";
            getline(cin, name);
            manager.searchEvent(name);
            break;
        case 4:
            break;
        default:
            cout << "Invalid choice, please try again." << endl;
    }
}

int main() {
    int choice;
    manager_pass = 1234;
    int pass;
    while (true) {
        cout << "Event Management System" << endl;
        cout << "1. Manager login" << endl;
        cout << "2. User login" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To ignore the newline character left by cin
        switch (choice) {
            case 1:
                cout << "Enter your password: ";
                cin >> pass;
                cin.ignore(); // To ignore the newline character left by cin
                if (pass == manager_pass)
                    manager_login();
                else
                    cout << "Incorrect password!" << endl;
                break;
            case 2:
                user_login();
                break;
            case 3:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }

    return 0;
}
