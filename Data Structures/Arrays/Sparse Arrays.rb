# Enter your code here. Read input from STDIN. Print output to STDOUT
memo = Hash.new(0)

N = gets.strip.to_i
(1..N).each do
    memo[gets.strip] += 1
end

Q = gets.strip.to_i
(1..Q).each do
    puts memo[gets.strip]
end
