void seungwan(float x, float y, float d){ 
  stroke(82, 49, 16);
  fill(82, 49, 16);
  ellipse(x, y, 18*d, 16*d);
  circle(x-5.0*d, y-6.5*d, 5.5*d);
  circle(x+5.0*d, y-6.5*d, 5.5*d); // main face
  
  fill(196, 164, 132);
  ellipse(x, y+2.0*d, 4.5*d, 5.5*d); // nose
  
  fill(0, 0, 0);
  circle(x-1.3*d, y-1.5*d, 1.6*d);
  circle(x+1.3*d, y-1.5*d, 1.6*d);
  triangle(x-0.7*d,y-0.3*d, x+0.7*d,y-0.3*d, x,y+1.0*d); //mouth
  
  stroke(0,0,0);
  strokeWeight(4);
  line(x,y+0.8*d, x,y+1.8*d);
  line(x,y+1.8*d, x-0.7*d,y+3.3*d);
  line(x,y+1.8*d, x+0.7*d,y+2.7*d);
}

void minseo(float x, float y, float d){
  strokeWeight(20);
  stroke(255,255,255);
  fill(0);
  circle(x-6*d, y-7*d, 8*d);
  circle(x+6*d, y-7*d, 8*d);
  strokeWeight(1);
  fill(255); //white
  circle(x, y, 20*d);
  fill(0,0,0);
  ellipse(x-5*d, y-2*d, 1.5*d, 2.5*d);
  ellipse(x+5*d, y-2*d, 1.5*d, 2.5*d);
  ellipse (x, y, 2*d, 1.5*d);
}

void local_face(float x, float y, float d){ //지역변수 그림
  local_mask(x, y, d);
  local_eye(x, y, d);
  local_nose(x, y, d);
  local_mouse(x, y, d);
}
void local_mask(float x, float y, float d){
  stroke(0, 0, 0);
  strokeWeight(3);
  fill(255);
  circle(x,y,d*18);
  strokeWeight(1);
}
void local_eye(float x, float y, float d){
  strokeWeight(7);
  line(x-2*d, y-4*d, x-5*d, y-5*d);
  line(x+2*d, y-4*d, x+5*d, y-5*d);
  strokeWeight(2);
  ellipse(x-4*d, y-2*d, d*3.5, d*2.5);
  ellipse(x+4*d, y-2*d, d*3.5, d*2.5);
  fill(0);
  circle(x-4*d, y-2*d, d*2);
  circle(x+4*d, y-2*d, d*2);
}
void local_nose(float x, float y, float d){
  fill(255);
  strokeWeight(2);
  arc(x, y+1.5*d, d*4, d*6, 0.4*PI, 1.4*PI);
  strokeWeight(7);
  point(x, y+3*d);
  point(x-d, y+3*d);
}
void local_mouse(float x, float y, float d){
  strokeWeight(4);
  fill(255);
  line(x-4*d, y+6*d, x+4*d, y+6*d);
}
