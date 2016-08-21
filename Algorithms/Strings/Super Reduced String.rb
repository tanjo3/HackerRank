# Enter your code here. Read input from STDIN. Print output to STDOUT
str = gets.strip

until str.gsub!(/([a-z])\1/, '').nil?
end

puts (str.empty?) ? 'Empty String' : str
