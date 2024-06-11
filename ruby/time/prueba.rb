#!/usr/bin/env ruby

today = Time.now
if today.saturday?
  puts "Do the chores"
elsif today.sunday?
  puts "Relax, watch a movie"
else
  puts "Lets work!"
end