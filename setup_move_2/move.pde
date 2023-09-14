void draw(){
  background(120);
  seungwan(xx[0], yy[0], d[0]);
  minseo(xx[1], yy[1], d[1]);
  local_face(xx[2], yy[2], d[2]);
  for(int i=0; i<2; i++){
    xx[i] += vx[i]; 
    yy[i] += vy[i];
    if(xx[i] > width || xx[i] < 0) vx[i] = -vx[i];
    if(yy[i] > height || yy[i] < 0) vy[i] = -vy[i];
  }
  if(keyPressed){
    if(key == 'd')  xx[2] += 5;
    else if(key == 'a')  xx[2] -= 5;
    else if(key == 'w')  yy[2] -= 5;
    else if(key == 's')  yy[2] += 5;
  }
  colide();
}
void colide(){
  if (dist(xx[0], yy[0], xx[1], yy[1]) < 200) {
  float tempVX = vx[0];
  float tempVY = vy[0];
  vx[0] = vx[1];
  vy[0] = vy[1];
  vx[1] = tempVX;
  vy[1] = tempVY;
  }
  if(dist(xx[0],yy[0], xx[2],yy[2]) < 200 || dist(xx[1],yy[1], xx[2],yy[2]) < 200){
    fill(255,0,0);
    textSize(90);
    text("Game Over!", 40, 120);
    text("Press 'r' to restart!", 40, 210);
    fill(255);
    vx[0] = 0;  vy[0] = 0;
    vx[1] = 0;  vy[1] = 0;
    if(keyPressed){
      if(key == 'r')  setup();
    }
  }
}
