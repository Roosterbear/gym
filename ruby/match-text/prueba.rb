#!/usr/bin/env ruby

print "Dime tu lenguaje favorito: "
line = gets.chop!
if line =~ /Ruby|Java/
  puts "#{line} es un buen lenguaje!"
elsif line.match?(/Kotlin|Javascript/)
  puts "Estas a la vanguardia con #{line} !"
elsif line =~ /Go|Python/
  puts "Woooow!, #{line}!!, acaso eres un Hacker?"
else
  puts "Gracias por tu participacion..."
end
