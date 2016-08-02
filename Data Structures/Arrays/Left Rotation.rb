# Enter your code here. Read input from STDIN. Print output to STDOUT
args = gets.strip.split(' ').map(&:to_i)
ary = gets.strip.split(' ').map(&:to_i)
puts ary.rotate(args[1]).join(' ')
