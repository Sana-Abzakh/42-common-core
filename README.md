# 42 Common Core
 
My projects from the **Common Core** at **42 Amman**, a programming school where you learn by building things, not by watching lectures.
 
If you have never heard of 42 or you have never written a line of code, this page is for you. Start with the next section.
 
---
 
## What is 42 École?
 
**42** is a computer science school that started in Paris in 2013 and now has campuses all over the world, including **42 Amman** in Jordan.
 
It is different from a normal school or university:
 
- **No teachers and no lectures.** Nobody stands in front of a class and explains things.
- **Students learn from each other.** You read the project description, search, experiment, ask other students, and figure it out together.
- **Projects instead of exams.** You learn by building real programs, one project after another.
- **Peer evaluation.** When you finish a project, other students review your code and ask you questions about it. You have to be able to explain every line you wrote.
- **Free to attend.** Admission is based on a selection process (including an intensive month-long trial called the "Piscine"), not on previous grades or fees.
The goal is not to memorize answers. It is to learn how to **learn**, how to solve problems, and how to work with other people.
 
## What is the Common Core?
 
The **Common Core** is the main path every 42 student follows after being admitted. It is a series of projects, grouped into levels called **milestones**. Each milestone takes you a little deeper: first the basics of programming in C, then bigger programs, then topics like system programming, graphics, and networking.
 
You cannot skip ahead. You finish one project, get it validated by other students and by an automatic checker, and then you unlock the next one.
 
## What is this repository?
 
This is my personal collection of Common Core projects, kept in one place so I can follow my own progress. Each project lives in its own folder with its own notes.
 
---
 
## Projects
 
| Project | What it is (in plain words) | Status |
|---|---|---|
| [`libft`](milestone-0&1/libft) | My own mini library of basic C functions (string handling, memory handling, lists). Everything I build later can reuse it. | Done |
| [`ft_printf`](milestone-0&1/ft_printf) | My own version of `printf`, the function that prints formatted text on screen (for example, inserting numbers and words into a sentence). | Done |
| [`get_next_line`]() | A function that reads a file one line at a time, no matter how long the file is. | In progress |
 
More projects will be added here as I move through the curriculum.
 
 
---
 
## Quick glossary
 
You do not need to know any of this before reading the code, but here are the words you will see most often:
 
- **C**: the programming language used in the first part of the Common Core. It is old, fast, and close to how the computer really works.
- **Function**: a small named block of code that does one job, like "count the letters in a word."
- **Library**: a collection of functions you can reuse in different programs.
- **Makefile**: a file that tells the computer how to build (compile) a project with a single command: `make`.
- **Compile**: turning the code I wrote into a program the computer can run.
- **Norminette**: a tool that checks my code follows 42's strict style rules (line length, function size, naming, and more).
- **Peer evaluation**: a review of my project by other students, who read my code and ask me to explain it.
- **Moulinette**: 42's automatic grader. It runs tests on a project and checks it works.
- **Edge case**: an unusual input that can break a program, such as an empty string or a very large number. A big part of the work is making sure the code handles these.
---
 
## How to build and test a project
 
Each project has its own folder and usually its own `Makefile`. In general:
 
```bash
cd <project-folder>
make        # builds the project
make clean  # removes temporary files
```
 
Individual project folders include their own notes on how to test them.
 
---
 
## Tools I use
 
- Ubuntu (running on Windows through WSL)
- Vim, with the 42 header plugin
- `cc` / `gcc` to compile
- Norminette for style checking
- Community testers (for example, Tripouille's `libftTester` for Libft)
- Git and GitHub
---
 
## About me
 
I am **Sana Abzakh**, a physics graduate (BSc, JUST) with research experience in spectroscopy, data analysis, and simulations, now learning software engineering at 42 Amman. Physics taught me to break hard problems into small testable pieces, and that is exactly what this school asks for.
 

 
---
 
## Learn more about 42
 
- Official website: https://42.fr
- 42 Amman: https://42amman.com
