# Enter your code here. Read input from STDIN. Print output to STDOUT
n, d = gets.strip.split.map(&:to_i)
a = gets.strip.split.map(&:to_i)

tripletCount = 0
(0..n - 1).each do |i|
    x = a[i] + d
    y = a[i] + (d << 1)

    tripletCount += 1 if a.include?(x) && a.include?(y)
end

puts tripletCount
