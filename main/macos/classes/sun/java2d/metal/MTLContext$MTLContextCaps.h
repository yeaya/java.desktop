#ifndef _sun_java2d_metal_MTLContext$MTLContextCaps_h_
#define _sun_java2d_metal_MTLContext$MTLContextCaps_h_
//$ class sun.java2d.metal.MTLContext$MTLContextCaps
//$ extends sun.java2d.pipe.hw.ContextCapabilities

#include <sun/java2d/pipe/hw/ContextCapabilities.h>

#pragma push_macro("CAPS_DOUBLEBUFFERED")
#undef CAPS_DOUBLEBUFFERED
#pragma push_macro("CAPS_EXT_BIOP_SHADER")
#undef CAPS_EXT_BIOP_SHADER
#pragma push_macro("CAPS_EXT_GRAD_SHADER")
#undef CAPS_EXT_GRAD_SHADER
#pragma push_macro("CAPS_EXT_LCD_SHADER")
#undef CAPS_EXT_LCD_SHADER
#pragma push_macro("FIRST_PRIVATE_CAP")
#undef FIRST_PRIVATE_CAP

namespace sun {
	namespace java2d {
		namespace metal {

class MTLContext$MTLContextCaps : public ::sun::java2d::pipe::hw::ContextCapabilities {
	$class(MTLContext$MTLContextCaps, $NO_CLASS_INIT, ::sun::java2d::pipe::hw::ContextCapabilities)
public:
	MTLContext$MTLContextCaps();
	void init$(int32_t caps, $String* adapterId);
	virtual $String* toString() override;
	static const int32_t CAPS_DOUBLEBUFFERED = 65536; // (FIRST_PRIVATE_CAP << 0)
	static const int32_t CAPS_EXT_LCD_SHADER = 131072; // (FIRST_PRIVATE_CAP << 1)
	static const int32_t CAPS_EXT_BIOP_SHADER = 262144; // (FIRST_PRIVATE_CAP << 2)
	static const int32_t CAPS_EXT_GRAD_SHADER = 524288; // (FIRST_PRIVATE_CAP << 3)
};

		} // metal
	} // java2d
} // sun

#pragma pop_macro("CAPS_DOUBLEBUFFERED")
#pragma pop_macro("CAPS_EXT_BIOP_SHADER")
#pragma pop_macro("CAPS_EXT_GRAD_SHADER")
#pragma pop_macro("CAPS_EXT_LCD_SHADER")
#pragma pop_macro("FIRST_PRIVATE_CAP")

#endif // _sun_java2d_metal_MTLContext$MTLContextCaps_h_