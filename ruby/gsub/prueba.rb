#!/usr/bin/env ruby

print "Cual es tu nombre? "
name = gets.chomp

def clave(name)
  name.downcase.gsub('a','@').gsub(' ','')
  .gsub('e','3').gsub('i','_').gsub('o','0')
  .gsub('u','#').gsub('s','$')
end

puts "Hi there #{name}!"
puts "Tu clave de acceso es: #{clave(name).reverse}"