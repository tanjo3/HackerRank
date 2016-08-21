#!/bin/ruby

n = gets.strip.to_i
c = gets.strip.split(' ').map(&:to_i)

count = 0
cloud = 0
while cloud < n - 1
    if cloud >= n - 2 || c[cloud + 2] != 1
        cloud += 2
    else
        cloud += 1
    end
    count += 1
end

puts count
