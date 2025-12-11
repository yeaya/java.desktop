#ifndef _sun_lwawt_macosx_CRobot_h_
#define _sun_lwawt_macosx_CRobot_h_
//$ class sun.lwawt.macosx.CRobot
//$ extends java.awt.peer.RobotPeer

#include <java/awt/peer/RobotPeer.h>
#include <java/lang/Array.h>

#pragma push_macro("MOUSE_LOCATION_UNKNOWN")
#undef MOUSE_LOCATION_UNKNOWN

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace sun {
	namespace awt {
		class CGraphicsDevice;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CRobot : public ::java::awt::peer::RobotPeer {
	$class(CRobot, $NO_CLASS_INIT, ::java::awt::peer::RobotPeer)
public:
	CRobot();
	void init$(::sun::awt::CGraphicsDevice* d);
	void checkMousePos();
	virtual int32_t getRGBPixel(int32_t x, int32_t y) override;
	virtual $ints* getRGBPixels(::java::awt::Rectangle* bounds) override;
	void getScreenPixels(::java::awt::Rectangle* r, $ints* pixels);
	void initRobot();
	void keyEvent(int32_t javaKeyCode, bool keydown);
	virtual void keyPress(int32_t keycode) override;
	virtual void keyRelease(int32_t keycode) override;
	void mouseEvent(int32_t lastX, int32_t lastY, int32_t buttonsState, bool isButtonsDownState, bool isMouseMove);
	virtual void mouseMove(int32_t x, int32_t y) override;
	virtual void mousePress(int32_t buttons) override;
	virtual void mouseRelease(int32_t buttons) override;
	virtual void mouseWheel(int32_t wheelAmt) override;
	void nativeGetScreenPixels(int32_t x, int32_t y, int32_t width, int32_t height, double scale, $ints* pixels);
	static const int32_t MOUSE_LOCATION_UNKNOWN = (-1);
	::sun::awt::CGraphicsDevice* fDevice = nullptr;
	int32_t mouseLastX = 0;
	int32_t mouseLastY = 0;
	int32_t mouseButtonsState = 0;
};

		} // macosx
	} // lwawt
} // sun

#pragma pop_macro("MOUSE_LOCATION_UNKNOWN")

#endif // _sun_lwawt_macosx_CRobot_h_