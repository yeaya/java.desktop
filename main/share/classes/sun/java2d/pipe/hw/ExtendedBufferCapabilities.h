#ifndef _sun_java2d_pipe_hw_ExtendedBufferCapabilities_h_
#define _sun_java2d_pipe_hw_ExtendedBufferCapabilities_h_
//$ class sun.java2d.pipe.hw.ExtendedBufferCapabilities
//$ extends java.awt.BufferCapabilities

#include <java/awt/BufferCapabilities.h>

namespace java {
	namespace awt {
		class BufferCapabilities$FlipContents;
		class ImageCapabilities;
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {
				class ExtendedBufferCapabilities$VSyncType;
			}
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {

class ExtendedBufferCapabilities : public ::java::awt::BufferCapabilities {
	$class(ExtendedBufferCapabilities, $NO_CLASS_INIT, ::java::awt::BufferCapabilities)
public:
	ExtendedBufferCapabilities();
	void init$(::java::awt::BufferCapabilities* caps);
	void init$(::java::awt::ImageCapabilities* front, ::java::awt::ImageCapabilities* back, ::java::awt::BufferCapabilities$FlipContents* flip);
	void init$(::java::awt::ImageCapabilities* front, ::java::awt::ImageCapabilities* back, ::java::awt::BufferCapabilities$FlipContents* flip, ::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType* t);
	void init$(::java::awt::BufferCapabilities* caps, ::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType* t);
	virtual ::sun::java2d::pipe::hw::ExtendedBufferCapabilities* derive(::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType* t);
	virtual ::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType* getVSync();
	virtual bool isPageFlipping() override;
	::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType* vsync = nullptr;
};

			} // hw
		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_hw_ExtendedBufferCapabilities_h_