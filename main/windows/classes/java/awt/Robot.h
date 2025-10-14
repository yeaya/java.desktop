#ifndef _java_awt_Robot_h_
#define _java_awt_Robot_h_
//$ class java.awt.Robot
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LEGAL_BUTTON_MASK")
#undef LEGAL_BUTTON_MASK
#pragma push_macro("MAX_DELAY")
#undef MAX_DELAY

namespace java {
	namespace awt {
		class Color;
		class GraphicsDevice;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class DirectColorModel;
			class MultiResolutionImage;
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class RobotPeer;
		}
	}
}

namespace java {
	namespace awt {

class $export Robot : public ::java::lang::Object {
	$class(Robot, 0, ::java::lang::Object)
public:
	Robot();
	void init$();
	void init$(::java::awt::GraphicsDevice* screen);
	void afterEvent();
	void autoDelay();
	void autoWaitForIdle();
	static void checkButtonsArgument(int32_t buttons);
	static void checkDelayArgument(int32_t ms);
	static void checkHeadless();
	static void checkIsScreenDevice(::java::awt::GraphicsDevice* device);
	static void checkKeycodeArgument(int32_t keycode);
	static void checkNotDispatchThread();
	static void checkRobotAllowed();
	static void checkScreenCaptureAllowed();
	static void checkValidRect(::java::awt::Rectangle* rect);
	$Array<::java::awt::image::BufferedImage>* createCompatibleImage(::java::awt::Rectangle* screenRect, bool isHiDPI);
	virtual ::java::awt::image::MultiResolutionImage* createMultiResolutionScreenCapture(::java::awt::Rectangle* screenRect);
	virtual ::java::awt::image::BufferedImage* createScreenCapture(::java::awt::Rectangle* screenRect);
	virtual void delay(int32_t ms);
	virtual int32_t getAutoDelay();
	virtual ::java::awt::Color* getPixelColor(int32_t x, int32_t y);
	void init(::java::awt::GraphicsDevice* screen);
	static void initLegalButtonMask();
	virtual bool isAutoWaitForIdle();
	virtual void keyPress(int32_t keycode);
	virtual void keyRelease(int32_t keycode);
	virtual void mouseMove(int32_t x, int32_t y);
	virtual void mousePress(int32_t buttons);
	virtual void mouseRelease(int32_t buttons);
	virtual void mouseWheel(int32_t wheelAmt);
	virtual void setAutoDelay(int32_t ms);
	virtual void setAutoWaitForIdle(bool isOn);
	virtual $String* toString() override;
	virtual void waitForIdle();
	static const int32_t MAX_DELAY = 0x0000EA60;
	::java::awt::peer::RobotPeer* peer = nullptr;
	bool isAutoWaitForIdle$ = false;
	int32_t autoDelay$ = 0;
	static int32_t LEGAL_BUTTON_MASK;
	::java::awt::image::DirectColorModel* screenCapCM = nullptr;
};

	} // awt
} // java

#pragma pop_macro("LEGAL_BUTTON_MASK")
#pragma pop_macro("MAX_DELAY")

#endif // _java_awt_Robot_h_