def count_substring(string, sub_string):
    ss_len = len(sub_string)
    count = 0

    for i in range(len(string) - ss_len + 1):
        sub = string[i:i + ss_len]
        if sub == sub_string:
            count += 1
    return count
