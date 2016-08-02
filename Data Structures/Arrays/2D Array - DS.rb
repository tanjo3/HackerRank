#!/bin/ruby

arr = Array.new(6)
(0..5).each do |arr_i|
    arr[arr_i] = gets.strip.split(' ').map(&:to_i)
end

hor_sums = Array.new(6) { Array.new(4) }
(0..5).each do |i|
    (0..3).each do |j|
        hor_sums[i][j] = arr[i][j] + arr[i][j + 1] + arr[i][j + 2]
    end
end

max = -64
(0..3).each do |i|
    (0..3).each do |j|
        temp = arr[i + 1][j + 1] + hor_sums[i][j] + hor_sums[i + 2][j]

        if temp > max
            max = temp
        end
    end
end

puts max
