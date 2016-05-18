/* Define the exception here */
class BadLengthException : public exception {
public:
    BadLengthException(int len) {
        m_len = len;
    }

    virtual const char* what() const throw() {
        char* length = new char[4];
        sprintf(length, "%d", m_len);
        return length;
    }
private:
    int m_len;
};
