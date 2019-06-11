// Enter your code here.
ostream& operator<<(std::ostream& os, const Person& obj)  {
    os << "first_name=" << obj.get_first_name() << ",last_name=" << obj.get_last_name();
    return os;
}
