float[] xx, yy, d, vx, vy;
void setup(){
  size(1200,1000);
  xx = new float[3]; yy = new float[3]; d = new float[3];
  vx = new float[3]; vy = new float[3];
  d[0] = 10; d[1] = 10; d[2] = 10;
  xx[0] = random(0, (width/2-100));  yy[0] = random(height);
  xx[1] = random((width/2+100), 1200);  yy[1] = random(height);
  xx[2] = random(width);  yy[2] = random(height);
  vx[0] = random(6,12);  vy[0] = random(6, 12);
  vx[1] = random(6,12);  vy[1] = random(6,12);
}
