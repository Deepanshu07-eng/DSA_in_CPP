/*
It's winter season. There is a long queue of students from the four prime courses at Coding Blocks and everyone is here to grab his hoodie. Each student of a course has a different roll number. Whenever a new student will come, he will search for his friend from the end of the queue. Note that a student can only has friend from his course and not from any other course. As soon as he will find any of the friend in the queue, he will stand behind him, otherwise he will stand at the end of the queue. At any moment Kartik Bhaiya will ask the student, who is standing in front of the queue, to come and put his name and grab his hoodie and then remove that student from the queue. There are Q operations of one of the following types:

E x y : A new student of course x whose roll number is y will stand in queue according to the method mentioned above.
D : Kartik Bhaiya will ask the student, who is standing in front of the queue, to come and put his name for the hoodie and remove him from the queue.
Find out the order in which student put their name.

Note: Number of dequeue operations will never be greater than enqueue operations at any point of time.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    queue<int> courseQueue;                 
    unordered_map<int, queue<int>> students; 
    unordered_set<int> inQueue;              

    while (q--) {
        char type;
        cin >> type;

        if (type == 'E') {
            int course, roll;
            cin >> course >> roll;

            if (inQueue.find(course) == inQueue.end()) {
                courseQueue.push(course);
                inQueue.insert(course);
            }

            students[course].push(roll);
        } 
        else if (type == 'D') {
            
            int course = courseQueue.front();
            int roll = students[course].front();
            students[course].pop();

            cout << course << " " << roll << endl;

            if (students[course].empty()) {
                courseQueue.pop();
                inQueue.erase(course);
            }
        }
    }
    return 0;
}
