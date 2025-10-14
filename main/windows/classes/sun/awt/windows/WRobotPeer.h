#ifndef _sun_awt_windows_WRobotPeer_h_
#define _sun_awt_windows_WRobotPeer_h_
//$ class sun.awt.windows.WRobotPeer
//$ extends java.awt.peer.RobotPeer

#include <java/awt/peer/RobotPeer.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WRobotPeer : public ::java::awt::peer::RobotPeer {
	$class(WRobotPeer, $NO_CLASS_INIT, ::java::awt::peer::RobotPeer)
public:
	WRobotPeer();
	void init$();
	virtual int32_t getRGBPixel(int32_t x, int32_t y) override;
	virtual $ints* getRGBPixels(::java::awt::Rectangle* bounds) override;
	void getRGBPixels(int32_t x, int32_t y, int32_t width, int32_t height, $ints* pixelArray);
	virtual void keyPress(int32_t keycode) override;
	virtual void keyRelease(int32_t keycode) override;
	virtual void mouseMove(int32_t x, int32_t y) override;
	void mouseMoveImpl(int32_t x, int32_t y);
	virtual void mousePress(int32_t buttons) override;
	virtual void mouseRelease(int32_t buttons) override;
	virtual void mouseWheel(int32_t wheelAmt) override;
	virtual bool useAbsoluteCoordinates() override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WRobotPeer_h_