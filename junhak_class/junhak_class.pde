int numBalls = 20;          // 생성할 공의 개수
float ballSize =1.5 ;    
junhak [] aa;
void setup() {
  size(800, 600);
  aa = new junhak[20];
  for (int i = 0; i < numBalls; i++) {
    float x = random(width);
    float y = random(height);
    aa[i] = new junhak(x, y, ballSize);
    
  }
}

void draw() {
  background(34, 139, 34);
  for (int i = 0; i < numBalls; i++) {
    aa[i].moving();
    aa[i].Face();
  }
}
