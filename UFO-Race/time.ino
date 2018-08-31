unsigned int time = 0;
boolean countingTime = false;

void initTime(){
  time = 0;
  countingTime = false;
}

void updateTime(){
  if(getTile(player.x/16, player.y/16) == 7){
    if(!countingTime){
      countingTime = true;
      time = 0;
    }
    else{
      if(time > 100){
        saveHighscore(time);
        initTime();
        initPlayer();
      }
    }
  }
  if(countingTime){
    time++;
  }
}

void drawTime(){
  gb.display.setColor(BLACK);
  gb.display.fillRect(0, gb.display.height() - gb.display.fontHeight, 4 * gb.display.fontWidth, gb.display.fontHeight + 1);
  gb.display.cursorX = 0;
  gb.display.cursorY = gb.display.height() - gb.display.fontHeight + 1;
  gb.display.setColor(WHITE,BLACK);
  gb.display.print(time);
}
