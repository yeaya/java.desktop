#ifndef _sun_awt_X11_XRobotPeer_h_
#define _sun_awt_X11_XRobotPeer_h_
//$ class sun.awt.X11.XRobotPeer
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
		class X11GraphicsConfig;
		class X11GraphicsDevice;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XRobotPeer : public ::java::awt::peer::RobotPeer {
	$class(XRobotPeer, 0, ::java::awt::peer::RobotPeer)
public:
	XRobotPeer();
	void init$(::sun::awt::X11GraphicsDevice* gd);
	virtual int32_t getRGBPixel(int32_t x, int32_t y) override;
	virtual $ints* getRGBPixels(::java::awt::Rectangle* bounds) override;
	static void getRGBPixelsImpl(::sun::awt::X11GraphicsConfig* xgc, int32_t x, int32_t y, int32_t width, int32_t height, $ints* pixelArray, bool isGtkSupported);
	virtual void keyPress(int32_t keycode) override;
	static void keyPressImpl(int32_t keycode);
	virtual void keyRelease(int32_t keycode) override;
	static void keyReleaseImpl(int32_t keycode);
	static void loadNativeLibraries();
	virtual void mouseMove(int32_t x, int32_t y) override;
	static void mouseMoveImpl(::sun::awt::X11GraphicsConfig* xgc, int32_t x, int32_t y);
	virtual void mousePress(int32_t buttons) override;
	static void mousePressImpl(int32_t buttons);
	virtual void mouseRelease(int32_t buttons) override;
	static void mouseReleaseImpl(int32_t buttons);
	virtual void mouseWheel(int32_t wheelAmt) override;
	static void mouseWheelImpl(int32_t wheelAmt);
	static void setup(int32_t numberOfButtons, $ints* buttonDownMasks);
	static bool tryGtk;
	static $volatile(bool) useGtk;
	::sun::awt::X11GraphicsConfig* xgc = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XRobotPeer_h_