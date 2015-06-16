def genOneFile( filename, n, max = 1000)
  File.open(filename,"w") do |f|
    n.times { f.puts rand(max)+1 }
    f.puts 0
  end
end

genOneFile('data/1.in', 10)
genOneFile('data/2.in', 10)
genOneFile('data/3.in', 10)
genOneFile('data/4.in', 100)
genOneFile('data/5.in', 100)
genOneFile('data/6.in', 130)
genOneFile('data/7.in', 1000)
genOneFile('data/8.in', 2000)
genOneFile('data/9.in', 20000)
genOneFile('data/10.in', 20000)
