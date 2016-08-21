#!/bin/ruby

message = gets.strip

count = 0
index = 0
sos = ['S', 'O', 'S']
message.each_char do |c|
    count += 1 if c != sos[index % 3]
    index += 1
end

puts count
