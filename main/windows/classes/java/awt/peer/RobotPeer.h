#ifndef _java_awt_peer_RobotPeer_h_
#define _java_awt_peer_RobotPeer_h_
//$ interface java.awt.peer.RobotPeer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}

namespace java {
	namespace awt {
		namespace peer {

class RobotPeer : public ::java::lang::Object {
	$interface(RobotPeer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getRGBPixel(int32_t x, int32_t y) {return 0;}
	virtual $ints* getRGBPixels(::java::awt::Rectangle* bounds) {return nullptr;}
	virtual void keyPress(int32_t keycode) {}
	virtual void keyRelease(int32_t keycode) {}
	virtual void mouseMove(int32_t x, int32_t y) {}
	virtual void mousePress(int32_t buttons) {}
	virtual void mouseRelease(int32_t buttons) {}
	virtual void mouseWheel(int32_t wheelAmt) {}
	virtual bool useAbsoluteCoordinates();
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_RobotPeer_h_