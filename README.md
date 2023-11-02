#  progintro/hw0-mixailaggelos1821
bandit0: login with the given password and server using 'ssh' , then 'exit'

bandit1: connect with the previously obtained information using ssh , and use 'ls' to find the readme command, then do 'cat readme' and get the password for bandit1, then 'exit'

bandit2: 'ssh', use 'ls', then 'cat ./-' for the file "-", then 'exit'

bandit3: 'ssh', use 'ls', then 'cat spaces\ in\ this\ filename' or cat '“spaces in this filename”' , then 'exit'

bandit4: 'ssh', use 'ls', use 'cd inhere' to open the folder, then 'ls -la' to find the hidden files. We find a file called .hidden, use 'cat .hidden' and get the password, then 'exit'

bandit5: 'ssh', use 'ls", use 'cd inhere', use ls, and then 'file ./-file0/*' to find which file has text inside, then 'cat ./-file07' to find the password, then 'exit

bandit6: 'ssh', use 'ls", use 'cd inhere', use ls, use 'file */{.,}* | grep "ASCII text" | grep -v ', with very long lines'', then we use 'du -b -a | grep 1033 and we find that the maybehere07 matches. now 'cat ./maybehere07/.file2 and we find the password. now 'exit

bandit7: 'ssh', using ls we can see there is a lot of files, so we will filter it using 'find /-type f -user bandit7 -group bandit6 -size 33c' to find the 33 character code. To filter out the errors, at the end of the original line, we put '2> /dev/null', so: 'find /-type f -user bandit7 -group bandit6 -size 33c', and we find the password
:D
