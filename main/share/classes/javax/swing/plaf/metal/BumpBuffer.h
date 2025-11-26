#ifndef _javax_swing_plaf_metal_BumpBuffer_h_
#define _javax_swing_plaf_metal_BumpBuffer_h_
//$ class javax.swing.plaf.metal.BumpBuffer
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("IMAGE_SIZE")
#undef IMAGE_SIZE

namespace java {
	namespace awt {
		class Color;
		class GraphicsConfiguration;
		class Image;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class BumpBuffer : public ::java::lang::Object {
	$class(BumpBuffer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BumpBuffer();
	void init$(::java::awt::GraphicsConfiguration* gc, ::java::awt::Color* aTopColor, ::java::awt::Color* aShadowColor, ::java::awt::Color* aBackColor);
	void createImage();
	void fillBumpBuffer();
	virtual ::java::awt::Image* getImage();
	virtual bool hasSameConfiguration(::java::awt::GraphicsConfiguration* gc, ::java::awt::Color* aTopColor, ::java::awt::Color* aShadowColor, ::java::awt::Color* aBackColor);
	static const int32_t IMAGE_SIZE = 64;
	::java::awt::Image* image = nullptr;
	::java::awt::Color* topColor = nullptr;
	::java::awt::Color* shadowColor = nullptr;
	::java::awt::Color* backColor = nullptr;
	::java::awt::GraphicsConfiguration* gc = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("IMAGE_SIZE")

#endif // _javax_swing_plaf_metal_BumpBuffer_h_