def skip_animals(animals, skip)
    # Your code here
    arr = Array.new
    animals.each_with_index {|animal, index| arr.push("#{index}:#{animal}") if index >= skip}
    return arr
end
