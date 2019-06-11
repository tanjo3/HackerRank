class Message {
public:
    Message() {}
    Message(const string& msg, int time)
    : msg_(msg), time_(time) {}

    const string& get_text() const {
        return msg_;
    }

    const int get_time() const {
        return time_;
    }

    bool operator<(const Message& x) {
        return time_ < x.get_time();
    }
private:
    string msg_;
    int time_;
};

class MessageFactory {
public:
    MessageFactory() {}
    Message create_message(const string& text) {
        return Message(text, time_++);
    }
private:
    int time_ = 0;
};
