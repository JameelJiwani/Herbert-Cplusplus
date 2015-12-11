#include "WPILib.h"

/**
 * This is a demo program showing the use of the RobotDrive class.
 * The SampleRobot class is the base of a robot application that will automatically call your
 * Autonomous and OperatorControl methods at the right time as controlled by the switches on
 * the driver station or the field controls.
 *
 * WARNING: While it may look like a good choice to use for your code if you're inexperienced,
 * don't. Unless you know what you are doing, complex code will be much more difficult under
 * this system. Use IterativeRobot or Command-Based instead if you're new.
 */
class Robot: public SampleRobot
{
	RobotDrive myRobot; // robot drive system
	Joystick stick; // only joystick


public:
	Robot() :
			myRobot(1, 2),	// initialize the RobotDrive to use motor controllers on ports 1 and 2. It is very important that you choose the right ports
			stick(0)  //This is the USB port that the joystick is in
	{
		myRobot.SetExpiration(0.1);
	}
private:
		void RobotInit()
		{

		}

		void AutonomousInit()
		{

		}

		void AutonomousPeriodic()
		{

		}

		void TeleopInit()
		{

		}

		void TeleopPeriodic()
		{
			myRobot.ArcadeDrive(stick); // drive with arcade style (use right stick)
			if(stick.GetRawButton(1)) {
				myRobot.Drive(7.0,0.0);
			} else {
				myRobot.StopMotor();
			}
		}

		void TestPeriodic()
		{

		}

};

START_ROBOT_CLASS(Robot);
