# Enter your code here. Read input from STDIN. Print output to STDOUT
r, c, n = gets.strip.split.map(&:to_i)
n -= 4 while n > 6

grid = Array.new(r)
r.times do |i|
    grid[i] = gets.strip.chars.collect { |x| x == '.' ? -2 : 0 }
end

n.times do
    grid.map! { |row| row.map! { |col| col + 1 } }

    grid.each_with_index do |row, i|
        row.each_with_index do |col, j|
            if col == 3
                grid[i + 1][j] = -1 if i < r - 1 && grid[i + 1][j] != 3
                grid[i - 1][j] = -1 if i > 0     && grid[i - 1][j] != 3
                grid[i][j + 1] = -1 if j < c - 1 && grid[i][j + 1] != 3
                grid[i][j - 1] = -1 if j > 0     && grid[i][j - 1] != 3
                grid[i][j] = -1
            end
        end
    end
end

grid.map { |row| puts row.collect { |x| x >= 0 ? 'O' : '.' }.join }
