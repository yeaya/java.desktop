#ifndef _sun_java2d_pipe_hw_AccelSurface_h_
#define _sun_java2d_pipe_hw_AccelSurface_h_
//$ interface sun.java2d.pipe.hw.AccelSurface
//$ extends sun.java2d.pipe.hw.BufferedContextProvider,sun.java2d.Surface

#include <sun/java2d/Surface.h>
#include <sun/java2d/pipe/hw/BufferedContextProvider.h>

#pragma push_macro("FLIP_BACKBUFFER")
#undef FLIP_BACKBUFFER
#pragma push_macro("RT_PLAIN")
#undef RT_PLAIN
#pragma push_macro("RT_TEXTURE")
#undef RT_TEXTURE
#pragma push_macro("TEXTURE")
#undef TEXTURE
#pragma push_macro("UNDEFINED")
#undef UNDEFINED
#pragma push_macro("WINDOW")
#undef WINDOW

namespace java {
	namespace awt {
		class Rectangle;
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {

class AccelSurface : public ::sun::java2d::pipe::hw::BufferedContextProvider, public ::sun::java2d::Surface {
	$interface(AccelSurface, $NO_CLASS_INIT, ::sun::java2d::pipe::hw::BufferedContextProvider, ::sun::java2d::Surface)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::awt::Rectangle* getBounds() {return nullptr;}
	virtual ::java::awt::Rectangle* getNativeBounds() {return nullptr;}
	virtual int64_t getNativeOps() {return 0;}
	virtual int64_t getNativeResource(int32_t resType) {return 0;}
	virtual int32_t getType() {return 0;}
	virtual int32_t hashCode() override;
	virtual bool isSurfaceLost() {return false;}
	virtual bool isValid() {return false;}
	virtual void markDirty() {}
	virtual $String* toString() override;
	static const int32_t UNDEFINED = 0;
	static const int32_t WINDOW = 1;
	static const int32_t RT_PLAIN = 2;
	static const int32_t TEXTURE = 3;
	static const int32_t FLIP_BACKBUFFER = 4;
	static const int32_t RT_TEXTURE = 5;
};

			} // hw
		} // pipe
	} // java2d
} // sun

#pragma pop_macro("FLIP_BACKBUFFER")
#pragma pop_macro("RT_PLAIN")
#pragma pop_macro("RT_TEXTURE")
#pragma pop_macro("TEXTURE")
#pragma pop_macro("UNDEFINED")
#pragma pop_macro("WINDOW")

#endif // _sun_java2d_pipe_hw_AccelSurface_h_