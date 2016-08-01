# Your code here
def full_name(first, *middles, last)
    str = String.new
    middles.map {|x| str = str + x + ' '}
    return first + ' ' + str + last
end
