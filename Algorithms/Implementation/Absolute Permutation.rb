# Enter your code here. Read input from STDIN. Print output to STDOUT
t = gets.strip.to_i
(1..t).each do
    n, k = gets.strip.split.map(&:to_i)

    if k == 0
        puts [*1..n].join(' ')
    else
        if (n % k).zero? && (n / k).even?
            mult = 1
            temp = k + 1
            output = Array.new

            (1..n / k).each do
                (1..k).each do
                    output << temp
                    temp += 1
                end

                mult *= -1
                temp += (mult * k) << 1
            end

            puts output.join(' ')
        else
            puts '-1'
        end
    end
end
