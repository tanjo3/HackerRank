# Enter your code here. Read input from STDIN. Print output to STDOUT
t = gets.strip.to_i
(1..t).each do
    a, b, x, y = gets.strip.split.map(&:to_i)
    puts (a.gcd(b) == x.gcd(y)) ? 'YES' : 'NO'
end
