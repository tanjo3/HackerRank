# Enter your code here. Read input from STDIN. Print output to STDOUT
l, s1, s2 = gets.strip.split.map(&:to_i)
queries = gets.strip.to_i
(1..queries).each do
    q = gets.strip.to_i
    puts (((q ** 0.5 - l) * (2 ** 0.5)) / (s1 - s2)).abs
end
