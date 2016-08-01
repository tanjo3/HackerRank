# Your code here
def count_multibyte_char(string)
    count = 0
    string.each_char {|x| count = count + 1 if x.bytesize > 1}
    return count
end
