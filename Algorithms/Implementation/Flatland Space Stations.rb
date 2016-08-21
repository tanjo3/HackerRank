#!/bin/ruby

n, m = gets.strip.split(' ').map(&:to_i)
c = gets.strip.split(' ').map(&:to_i).sort!

max = 0
c.drop(1).each_with_index do |val, i|
    diff = ((val - c[i]) / 2).floor
    max = diff if diff > max
end

puts [max, c.first, n - c.last - 1].max
