package AngryBird;
import zonegame.*;
public class AngryBird extends ZoneGame {
/**
* The main entry point to our program, tells Java to run this angryBirdGame.
*/
public static void main(String[] args) {
AngryBird game = new AngryBird();
game.run();
}
public static final int GRAVITY = 2;
public static final int THRUST = 15;
public static final int GROUND = 575;
public static final int SPEED = 3;
// Variables in the game
int birdstep = 0;
boolean dead = false;
// Objects in the game
Bird flappy;
ScoreBoard scoreboard;
public AngryBird() {
setSize(400, 600);        // Set the size of the window to 400 pixels by 600 pixels.
setFPS(30);                // Set to 30 FPS (frames per second).
}
public void setup() {
flappy = new Bird();
flappy.set(100, 300);
addSprite(flappy);
scoreboard = new ScoreBoard();
scoreboard.setLayer(3);
addSprite(scoreboard);
angry.addColor(“pipe green”, 69, 201, 45);
angry.addColor(“pipe dark green”, 62, 143, 34);
angry.addColor(“pipe light green”, 109, 230, 79);
}
public void loop() {
angry.setBackground(“light blue”);
if (birdstep % 100 == 0) {
addSprite(new Pipe());
}
birdstep++;
angry.setColor(“dark red”);
angry.fillRect(0, 550, 400, 50);
}
}
