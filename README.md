# Conceptual-Tech-Poem-Generative-Art


For this project, I coded a few lines of a program using C++ — particularly a variety of data structures, "queue" and "vector", within its STL (Standard Template Library). In a queue, we can add data from the rear end and remove it from the front end, while a vector is a modified array that gives more flexibility. 


Generator 1: 

In this code, a random source file is taken from a Github repository (labeled as "source_1.txt) and the text to be transformed is kept in a separate file (labeled as "source.txt"). Then, each individual word from source.txt file is stored in a queue (myQueue) and words from source_1.txt file are stored in a vector. Then finally, after seeding the random function, words from the source.txt file are taken and then amalgamated with words from source_1.txt files. 


Generator 2: 

In addition, if I take a single word from source.txt file, but a random number of words from source_1.txt files, it gave me better result, so I implemented this. 


Generator 3: 

This is the final generator based on Generator 2, where I have introduced an additional source_2.txt file, which supplements the primary "source.txt" file. This version of the generator is labeled as "mixer.cpp" and used as the default text generator. 


Finally, from the "exported_file.txt" file, I picked words/ clauses/ lines in a composition I preferred to get my poem.
