# Enter your code here. Read input from STDIN. Print output to STDOUT
def process_text(strings)
    temp = strings.to_ary
    temp.each {|x| x.strip!}
    return temp.join(' ')
end
