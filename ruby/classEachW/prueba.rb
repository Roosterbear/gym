#!/usr/bin/env ruby

class Animal
  attr_accessor :name
  def initialize(name)
    @name = name
    puts "Soy un #{name}"
  end
end

animals = %w(gato perro tiburon leon pecesito hamster)
objetos = []
conta = 0

animals.each do |animal|
  objetos[conta] = Animal.new(animal)
  objetos[conta].name = 'Ahora soy un animal llamado '+objetos[conta].name
  conta +=1
end

objetos.each do |o|
  puts o.name
end

