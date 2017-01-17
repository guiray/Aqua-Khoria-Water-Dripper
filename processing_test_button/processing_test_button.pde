import processing.serial.*;

Serial myPort;

void setup() {
  size(500,500);
  background(0);
  myPort = new Serial(this, Serial.list()[0], 9600);
}

void draw() {
  
  
}

void mousePressed() {
  background(random(255), random(255), random(255));
  myPort.write('1');
}

void mouseReleased() {
  background(0);
  myPort.write('0');
}