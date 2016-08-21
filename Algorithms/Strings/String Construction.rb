#!/bin/ruby

(1..gets.strip.to_i).each { puts gets.strip.chars.to_a.uniq.size }
