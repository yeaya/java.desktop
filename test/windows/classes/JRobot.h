#ifndef _JRobot_h_
#define _JRobot_h_
//$ class JRobot
//$ extends java.awt.Robot

#include <java/awt/Robot.h>
#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_DELAY")
#undef DEFAULT_DELAY
#pragma push_macro("INTERNAL_DELAY")
#undef INTERNAL_DELAY

namespace java {
	namespace awt {
		class Component;
		class Point;
		class Rectangle;
	}
}

class $export JRobot : public ::java::awt::Robot {
	$class(JRobot, 0, ::java::awt::Robot)
public:
	JRobot();
	using ::java::awt::Robot::delay;
	void init$(bool enableDelays);
	virtual ::java::awt::Point* centerOf(::java::awt::Rectangle* r);
	virtual ::java::awt::Point* centerOf(::java::awt::Rectangle* r, ::java::awt::Point* p);
	virtual void clickMouse(int32_t buttons);
	virtual void clickMouse();
	virtual void clickMouseOn(::java::awt::Component* c, int32_t buttons);
	virtual void clickMouseOn(::java::awt::Component* c);
	virtual bool comparePixels(::java::awt::Point* p0, ::java::awt::Point* p1);
	virtual bool comparePixels(int32_t x0, int32_t y0, int32_t x1, int32_t y1);
	virtual bool compareRects(::java::awt::Rectangle* r0, ::java::awt::Rectangle* r1);
	virtual void convertRectToScreen(::java::awt::Rectangle* r, ::java::awt::Component* c);
	virtual void delay();
	virtual int32_t getDelay();
	virtual bool getDelaysEnabled();
	static ::JRobot* getRobot();
	static ::JRobot* getRobot(bool enableDelays);
	virtual void glide(int32_t x0, int32_t y0, int32_t x1, int32_t y1);
	virtual void hitKey(int32_t keycode);
	virtual void hitKey($ints* keys);
	virtual void moveMouseTo(::java::awt::Component* c);
	virtual void setDelay(int32_t delay);
	virtual void waitForIdle() override;
	static int32_t DEFAULT_DELAY;
	static int32_t INTERNAL_DELAY;
	int32_t delay$ = 0;
	bool delaysEnabled = false;
};

#pragma pop_macro("DEFAULT_DELAY")
#pragma pop_macro("INTERNAL_DELAY")

#endif // _JRobot_h_