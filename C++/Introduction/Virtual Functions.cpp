class Person {
public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;
protected:
    string name;
    int age;
};

class Professor : public Person {
public:
    static int cur_id;
    int id;
    Professor() {
        id = cur_id++;
    }

    void getdata() {
        cin >> name;
        cin >> age;
        cin >> publications;
    }

    void putdata() {
        cout << name << ' ' << age << ' ' << publications << ' ' << id << endl;
    }
private:
    int publications;
};

class Student : public Person {
public:
    static int cur_id;
    int id;
    Student() {
        id = cur_id++;
    }

    void getdata() {
        cin >> name;
        cin >> age;

        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }

    void putdata() {
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += marks[i];
        }

        cout << name << ' ' << age << ' ' << sum << ' ' << id << endl;
    }
private:
    int marks[6];
};

int Professor::cur_id = 1, Student::cur_id = 1;