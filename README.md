#Project X
My take on the rougelike genre.

##Background
This project started with my love for Tales of Maj'Eyal, which is an amazing rougelike rpg! I have been playing it for roughly 2 years without ever finishing the game. It is that good and unforgiving! Please check it out [here](http://te4.org/).

##Disclaimer
Most of the early commits and base version of the game is created by following the [Complete roguelike tutorial using C++ and libtcod](http://www.roguebasin.com/index.php?title=Complete_roguelike_tutorial_using_C%2B%2B_and_libtcod_-_part_1:_setting_up). I use the 1.5.2 version of libtcod, which is incredibly hard to find so for the ease of anyone who would like to follow my footsteps or recreate his own version, I have forked it and should be reachable through my repositories.

##Environment
I was having a bit of trouble setting up everything so I could start the first lesson, so here is what I did instead of what was described there:
 1. Use Code::Blocks (cross platform, straightforward IDE)
 2. Use GNU GCC compiler
 3. Create project (console application)
 4. Right-click Project and go to build options:
  + Linker settings tab:
    - Link the libtcod-mingw.a in the file explorer
    - Add -mwindows in the other linker options
 + Search directories tab:
   - Add the lib folder of your libtcod directory
 5. Right click on Projcet and go to properties:
  + Build target tab
    - Set type to GUI application

##Errors
I am aware of one bug currently, the GNU GCC compiler does not recognize a dll in it's own bin folder. Setting an environmental PATH would be an option for this, however, I did not go through the trouble of fixing it yet.
