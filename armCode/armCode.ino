#define bottomServoButton 0
#define bottomServoLight 1
#define firstSegmentButton 2
#define firstSegmentLight 3
#define secondSegmentButton 4
#define secondSegmentLight 5
#define thirdSegmentButton 6
#define thirdSegmentLight 7
#define clawButton 8
#define clawLight 9
#define leftButton 10
#define rightButton 11

int lights[1, 3, 5, 7, 9];
int x = 0;

void setup() {
  pinMode(bottomServoButton, INPUT);
  pinMode(bottomServoLight, OUTPUT);
  pinMode(firstSegmentButton, INPUT);
  pinMode(firstSegmentLight, OUTPUT);
  pinMode(secondSegmentButton, INPUT);
  pinMode(secondSegmentLight, OUTPUT);
  pinMode(thirdSegmentButton, INPUT);
  pinMode(thirdSegmentLight, OUTPUT);
  pinMode(clawButton, INPUT);
  pinMode(clawLight, OUTPUT);
  pinMode(leftButton, INPUT);
  pinMode(rightButton, INPUT);
}

void loop() {
  
}
