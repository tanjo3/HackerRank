def sum_terms(n)
    # your code here
    return (1..n).reduce(0) {|sum, x| sum + x * x + 1}
end
