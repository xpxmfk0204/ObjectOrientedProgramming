class junhak {
  junhak() {
    x = random(0, width);
    y = random(0, height);
    d = ballSize;
    
    
  };
  junhak(float a, float b, float c) {
    ballX = a;
    ballY = b;
    d = c;
    ballSpeedX = random(-0.7, 0.7);
    ballSpeedY = random(-0.7, 0.7);
  }
  float x, y, d, dx, dy, distance;
  
  float initialDistance;
  
  float ballX;   // 공의 X 위치 배열
  float ballY;   // 공의 Y 위치 배열
  float ballSpeedX;  // 공의 X 속도 배열
  float ballSpeedY;  // 공의 Y 속도 배열
  
  void Face() {
    for (int i = 0; i < numBalls; i++) {
      
      local_face(ballX, ballY, ballSize);
      
    }
  }
  void moving() {
    for (int i = 0; i < numBalls; i++) {
      
      
      ballX += ballSpeedX;
      ballY += ballSpeedY;
      
      if (ballX < 0 || ballX > width) {
        ballSpeedX *= -1;
        ballX = constrain(ballX, 0, width);
      }
      if (ballY < 0 || ballY > height) {
        ballSpeedY *= -1;
        ballY = constrain(ballY, 0, height);
      }
    }
  }
}
