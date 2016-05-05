//Define the structs Workshops and Available_Workshops.
struct Workshop {
    int start_time, end_time, duration;
};

bool sortByEndTime(Workshop m, Workshop n) {
    return (m.end_time < n.end_time);
}

bool isConflict(Workshop m, Workshop n) {
    return (m.start_time <= n.end_time && n.start_time < m.end_time);
}

struct Available_Workshops {
    int n;
    vector<Workshop> workshops;
};

//Implement the functions initialize and CalculateMaxWorkshops
Available_Workshops* initialize(int start_time[], int duration[], int n) {
    Available_Workshops* newWorkshops = new Available_Workshops;
    newWorkshops->n = n;

    for (int i = 0; i < n; i++) {
        Workshop temp;
        temp.start_time = start_time[i];
        temp.duration = duration[i];
        temp.end_time = start_time[i] + duration[i];
        newWorkshops->workshops.push_back(temp);
    }

    return newWorkshops;
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
    vector<Workshop> workshops(ptr->workshops);
    sort(workshops.begin(), workshops.end(), sortByEndTime);

    int count = 0;
    while (!workshops.empty()) {
        Workshop temp;
        temp.start_time = workshops[0].start_time;
        temp.end_time = workshops[0].end_time;

        workshops.erase(remove_if(workshops.begin(), workshops.end(), [&](Workshop w){ return isConflict(temp, w); }), workshops.end());

        count++;
    }

    return count;
}
