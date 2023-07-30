#include <webots/Robot.hpp>
#include <webots/Motor.hpp>

#define TIME_STEP 64
#define MAX_SPEED 6.28

using namespace webots ;

int main (int argc , char **argv) {
  Robot *robot = new  Robot() ; 
  
  //get the motor devices 
  Motor *leftMotor = robot->getMotor("left wheel motor");
  Motor *rightMotor = robot->getMotor("right wheel motor");
  
  leftMotor->setPosition(INFINITY);
  rightMotor->setPosition(INFINITY);
  
  leftMotor->setVelocity(0.1 * MAX_SPEED);
  rightMotor->setVelocity(0.1 * MAX_SPEED);
  
  while (robot->step(TIME_STEP) != -1);
  
  
 delete robot;
 
 return 0;
 }
 
