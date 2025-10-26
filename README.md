# Animated-Robot-and-Alien-Scenery-with-Day-to-Night-Transition
This project is a graphics-based animation created using the C++ graphics.h libraryIt presents a colorful and dynamic scene that transitions smoothly from daytime to nighttime. The program utilizes 2D graphics concepts, shapes, colors, and animation techniques to create a moving visual story featuring a robot, alien, and background scenery.

At the start of the animation, the scene displays a bright day with a blue sky, a rainbow, clouds, a house, sun, green ground, and two main animated characters — a robot and an alien. The robot moves from left to right while interacting with the environment. Various shapes such as rectangles, circles, ellipses, and lines are used to design the robot’s body, facial features, and accessories like balloons and an antenna.

The alien character appears with distinct features, including green skin, antennas, eyes, and legs, designed through a combination of arcs, rectangles, and circles. The code also includes floodfill functions and setfillstyle for color filling, and delay() for controlling animation speed.

After completing the daytime animation, the program transitions into a night mode. The background changes to a dark sky, the sun becomes a moon, and the overall environment shifts into darker shades such as gray, black, and red tones. Even the robot and alien adapt their appearance to suit the dark atmosphere, symbolizing the passage of time from day to night.

The animation makes use of page flipping (setactivepage and setvisualpage) to ensure smooth motion without screen flickering. This double buffering technique helps render each frame in the background before displaying it, giving the animation a more stable and professional look.

⚙️ Key Features and Concepts Used:

Use of graphics.h, conio.h, and dos.h libraries.

initwindow() for screen setup.

Double buffering for smooth animation (setactivepage() and setvisualpage()).

Use of basic geometric shapes: rectangle, circle, ellipse, line, arc.

Color filling using setfillstyle() and floodfill().

Delay control to manage animation timing.

Day-to-night transition demonstrating scene lighting and environment change.

Animated robot and alien characters interacting in a scenery.

🌈 Learning Outcome:

Through this project, I learned how to:

Implement 2D graphics animation in C++ using the BGI library.

Use loops and coordinates to move objects dynamically across the screen.

Apply color theory and scene design to simulate real-world visuals.

Handle page buffering for flicker-free animations.

Design creative and interactive scenes programmatically.
