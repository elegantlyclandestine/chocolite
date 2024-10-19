![Chocolite logo: chocolate bar with a bite on the top left corner](https://i.ibb.co/b7G8Dnj/chocolite.png)
### <p align="center"><strong>An easy-to-use, no-frills SQLite-like database system</strong></p>
<p align="center"><sup>Not to be confused with <a href="https://github.com/dase955/ChocoDB">chocodb</a>. I have no idea if it's abandoned.</sup></p>

# Why Chocolite?
With Chocolite, you could simply do this in code (assuming you have a container `main` with a table `HelloWorld` initialised):
```cpp
std::string hello_world = Chocolite::interpret(
    "PUSH \"Hello\" TO HelloWorld IN main AT 1,1
     PUSH \"World\" TO HelloWorld IN main AT 1,2
     GRAB DATA RANGE FROM 1,1 TO 1,2 FROM HelloWorld IN main"
);
std::cout << hello_world << std::endl;
```
Or you can do all of this within the `chocolite` command-line application.

(Pretty dumb example, but this is under construction, so...)

# Origin
Honestly… it was a random idea I had while trying to conceive ways to store story contents for one of my other pet projects, *[Storybook](https://github.com/elegantlyclandestine/Storybook)*. I had an idea on how I wanted to store the data for interactive Discord stories, while also inadvertently being able to obfuscate it in the process, so I decided that with my developed (but still limited) skills in C++, I would make my own database system.

It turns out I would never be able to escape SQL. So why don’t I make my own implementation of it too?

Eventually, I took that challenge. ~~Mainly because I’m an absolute masochist.~~

I settled on the name *Chocolite* as a play on chocolate and [SQLite](https://github.com/sqlite/sqlite). The reason for this name is to imply that using Chocolite will be a short and sweet experience without sacrificing taste (performance) and quality assurance (security).
