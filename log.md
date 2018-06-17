# 100 Days Of Code - Log

### Day 0: June 14, Thursday

**Today's Progress**: Retooling Freglut for Tetris and other projects

**Thoughts** This is a lot harder than i expected. The framework is a lot less malleable than I can percieve. SpriteManager needs to be rewritten if i want to use it 
for my purposes. Also might want to look into creating primatives instead. (IE making the boxes and the playing field procedurally instead of using a file).

**Link(s) to work**
1.) It's right here. I'll spin it off to its own repo sometime in the future.

### Day 1: June 15, Friday

**Today's Progress**: Attemtping to understand how FreeGlut draws sprites

**Thoughts** Finally understood that the original creator of the skeleton im using split the asset loading script into a different file, finally allowing me to load the images i need.
Now however, I need to understand how to figure out how the FreeGlut dictates skeletons as the current issue is that block loads properly at 0.25 HOWEVER that is way too small to use.
http://harddrop.com/wiki/Gameplay_overview Leaving this here for future reference, HardDrop is the competettive Tetris community so their understanding of algorithims is way better than mine.

**Link(s) to work**
1.) It's right here. I'll spin it off to its own repo sometime in the future.

### Day 1: June 16, Saturday
## NOTE: I did make progress at this date but I wasn't able to comit or push to the Git sever however until today, July 17th.
**Today's Progress**: Coordinate spacing is now properly mapped to the Tetris Grid. 

**Thoughts** After refactoring some code, I have found out that I was mapping the grid improperly, with this new approach the grid is moving in a more predictable manner.
With this, we can start working on game logic. Block primitives and a basic game design document detailing proposed implementations are next order of business. As well as setting up
a license agreement and detailing the sources of the various api and skeletons ive used for this project.

**Link(s) to work**
1.) It's right here. I'll spin it off to its own repo sometime in the future.