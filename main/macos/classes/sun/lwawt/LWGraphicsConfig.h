#ifndef _sun_lwawt_LWGraphicsConfig_h_
#define _sun_lwawt_LWGraphicsConfig_h_
//$ interface sun.lwawt.LWGraphicsConfig
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class BufferCapabilities;
		class BufferCapabilities$FlipContents;
		class Component;
		class Image;
	}
}
namespace sun {
	namespace lwawt {
		class LWComponentPeer;
	}
}

namespace sun {
	namespace lwawt {

class $export LWGraphicsConfig : public ::java::lang::Object {
	$interface(LWGraphicsConfig, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void assertOperationSupported(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) {}
	virtual ::java::awt::Image* createAcceleratedImage(::java::awt::Component* target, int32_t width, int32_t height) {return nullptr;}
	virtual ::java::awt::Image* createBackBuffer(::sun::lwawt::LWComponentPeer* peer) {return nullptr;}
	virtual void destroyBackBuffer(::java::awt::Image* backBuffer) {}
	virtual void flip(::sun::lwawt::LWComponentPeer* peer, ::java::awt::Image* backBuffer, int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) {}
	virtual int32_t getMaxTextureHeight() {return 0;}
	virtual int32_t getMaxTextureWidth() {return 0;}
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWGraphicsConfig_h_