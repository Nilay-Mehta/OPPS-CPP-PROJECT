# Event Managent

This is a sofftware for event mangament.

## My Contribution 



 - Event handling
 - Constructors

### 1. Event Handling

1. Made the 'Event' and 'EventManager' class.

### Code - 

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


 2. Explaination : 


 Made a class 'Event' to store event details. 
    Used the string library and used the STL C++ sring function to make it. 
    A constructor named Event is made to preload variables.
    A method display is used to get the input.
    'enter'  the terminal get clear.


## 2. Event Manager class

  1. Made the 'EventManager' class.

    

### Code - 

   class EventManager {
private:
    vector<Event> events;  

public:
    
    void addEvent(const string& name, const string& date, const string& location, const string& category) {
        events.push_back(Event(name, date, location, category));
        cout << "Event added successfully!" << endl;
        getch();
        system("cls");
    }

    void deleteEvent(const string& name) {
        for (auto it = events.begin(); it != events.end(); ++it) {
            if (it->name == name) {
                events.erase(it);
                cout << "---------------------------------------------" << endl;
                cout << "Event deleted successfully!" << endl;
                cout << "---------------------------------------------" << endl;
                getch();
                system("cls");
                return;
            }
        }
        cout << "---------------------------------------------" << endl;
        cout << "Event not found." << endl;
        cout << "---------------------------------------------" << endl;
        getch();
        system("cls");
    }

    void displayEvents() const {
        if (events.empty()) {
            cout << "---------------------------------------------" << endl;
            cout << "No events available." << endl;
            cout << "---------------------------------------------" << endl;
            return;
        }
        cout << "---------------------------------------------" << endl;
        for (const auto& event : events) {
            event.display();
            cout << "---------------------------------------------" << endl;
        }
        getch();
        system("cls");
    }

    void displayEventsByCategory(const string& category) const {
        bool found = false;
        cout << "---------------------------------------------" << endl;
        for (const auto& event : events) {
            if (event.category == category) {
                event.display();
                cout << "---------------------------------------------" << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "No events found in the category: " << category << endl;
            cout << "---------------------------------------------" << endl;

        }
        getch();
        system("cls");
    }

    void searchEvent(const string& name) const {
        bool found = false;
        cout << "---------------------------------------------" << endl;
        for (const auto& event : events) {
            if (event.name == name) {
                event.display();
                cout << "---------------------------------------------" << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "Event not found." << endl;
            cout << "---------------------------------------------" << endl;
        }
        getch();
        system("cls");
    }
};


2. Explaination : 

    The 'EventManager' class is used to add different functions to event which return to apply features . 
    1. addEvent
    2. displayEvents
    3. searchEvent

