#ifndef _sun_java2d_opengl_OGLContext$OGLContextCaps_h_
#define _sun_java2d_opengl_OGLContext$OGLContextCaps_h_
//$ class sun.java2d.opengl.OGLContext$OGLContextCaps
//$ extends sun.java2d.pipe.hw.ContextCapabilities

#include <sun/java2d/pipe/hw/ContextCapabilities.h>

#pragma push_macro("CAPS_DOUBLEBUFFERED")
#undef CAPS_DOUBLEBUFFERED
#pragma push_macro("CAPS_EXT_BIOP_SHADER")
#undef CAPS_EXT_BIOP_SHADER
#pragma push_macro("CAPS_EXT_FBOBJECT")
#undef CAPS_EXT_FBOBJECT
#pragma push_macro("CAPS_EXT_GRAD_SHADER")
#undef CAPS_EXT_GRAD_SHADER
#pragma push_macro("CAPS_EXT_LCD_SHADER")
#undef CAPS_EXT_LCD_SHADER
#pragma push_macro("CAPS_EXT_TEXBARRIER")
#undef CAPS_EXT_TEXBARRIER
#pragma push_macro("CAPS_EXT_TEXRECT")
#undef CAPS_EXT_TEXRECT
#pragma push_macro("CAPS_RT_TEXTURE_ALPHA")
#undef CAPS_RT_TEXTURE_ALPHA
#pragma push_macro("CAPS_RT_TEXTURE_OPAQUE")
#undef CAPS_RT_TEXTURE_OPAQUE
#pragma push_macro("FIRST_PRIVATE_CAP")
#undef FIRST_PRIVATE_CAP

namespace sun {
	namespace java2d {
		namespace opengl {

class OGLContext$OGLContextCaps : public ::sun::java2d::pipe::hw::ContextCapabilities {
	$class(OGLContext$OGLContextCaps, $NO_CLASS_INIT, ::sun::java2d::pipe::hw::ContextCapabilities)
public:
	OGLContext$OGLContextCaps();
	void init$(int32_t caps, $String* adapterId);
	virtual $String* toString() override;
	static const int32_t CAPS_EXT_FBOBJECT = (CAPS_RT_TEXTURE_ALPHA | CAPS_RT_TEXTURE_OPAQUE);
	static const int32_t CAPS_DOUBLEBUFFERED = (FIRST_PRIVATE_CAP << 0);
	static const int32_t CAPS_EXT_LCD_SHADER = (FIRST_PRIVATE_CAP << 1);
	static const int32_t CAPS_EXT_BIOP_SHADER = (FIRST_PRIVATE_CAP << 2);
	static const int32_t CAPS_EXT_GRAD_SHADER = (FIRST_PRIVATE_CAP << 3);
	static const int32_t CAPS_EXT_TEXRECT = (FIRST_PRIVATE_CAP << 4);
	static const int32_t CAPS_EXT_TEXBARRIER = (FIRST_PRIVATE_CAP << 5);
};

		} // opengl
	} // java2d
} // sun

#pragma pop_macro("CAPS_DOUBLEBUFFERED")
#pragma pop_macro("CAPS_EXT_BIOP_SHADER")
#pragma pop_macro("CAPS_EXT_FBOBJECT")
#pragma pop_macro("CAPS_EXT_GRAD_SHADER")
#pragma pop_macro("CAPS_EXT_LCD_SHADER")
#pragma pop_macro("CAPS_EXT_TEXBARRIER")
#pragma pop_macro("CAPS_EXT_TEXRECT")
#pragma pop_macro("CAPS_RT_TEXTURE_ALPHA")
#pragma pop_macro("CAPS_RT_TEXTURE_OPAQUE")
#pragma pop_macro("FIRST_PRIVATE_CAP")

#endif // _sun_java2d_opengl_OGLContext$OGLContextCaps_h_