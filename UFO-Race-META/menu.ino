#define PAUSEMENULENGTH 2
const char strPlay[] = "START!";
const char strHighScores[] = "High scores";


const char* pauseMenu[PAUSEMENULENGTH] = {
  strPlay,
  strHighScores,
};

void drawMenu(){
  gb.lights.clear();
  gb.display.setFont(font5x7);
  switch(gb.gui.menu("Menu", pauseMenu, PAUSEMENULENGTH)){
  case 0: //play
    initGame();
    play();
    break;
  case 1: //high scores
    drawHighScores();
    break;
  } 
}
