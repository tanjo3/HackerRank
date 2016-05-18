// Enter your code for reversed_binary_value<bool...>()
template <bool digit>
int reversed_binary_value() {
    return digit;
}

template <bool digit, bool digit2, bool... digits>
int reversed_binary_value() {
    return digit + (reversed_binary_value<digit2, digits...>() << 1);
}
