#!/usr/bin/env ruby

require 'optparse'
options = {}
OptionParser.new do |opts|
  opts.on('-p PORT','--port PORT','Lo imprime...') do |p|
    options[:port] = p
    p "Pusiste el puerto #{options[:port]}"
  end
end.parse!
