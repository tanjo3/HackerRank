/*Write the class AddElements here*/
template <class T>
class AddElements  {
public:
    AddElements(T num)  {
        element = num;
    }

    T add(T num) {
        return element + num;
    }
private:
    T element;
};

template <>
class AddElements <string> {
public:
    AddElements(string str)  {
        element = str;
    }

    string concatenate(string str) {
        return element + str;
    }
private:
    string element;
};
