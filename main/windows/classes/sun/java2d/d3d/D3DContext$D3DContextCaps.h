#ifndef _sun_java2d_d3d_D3DContext$D3DContextCaps_h_
#define _sun_java2d_d3d_D3DContext$D3DContextCaps_h_
//$ class sun.java2d.d3d.D3DContext$D3DContextCaps
//$ extends sun.java2d.pipe.hw.ContextCapabilities

#include <sun/java2d/pipe/hw/ContextCapabilities.h>

#pragma push_macro("CAPS_AA_SHADER")
#undef CAPS_AA_SHADER
#pragma push_macro("CAPS_BIOP_SHADER")
#undef CAPS_BIOP_SHADER
#pragma push_macro("CAPS_DEVICE_OK")
#undef CAPS_DEVICE_OK
#pragma push_macro("CAPS_LCD_SHADER")
#undef CAPS_LCD_SHADER
#pragma push_macro("FIRST_PRIVATE_CAP")
#undef FIRST_PRIVATE_CAP

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DContext$D3DContextCaps : public ::sun::java2d::pipe::hw::ContextCapabilities {
	$class(D3DContext$D3DContextCaps, $NO_CLASS_INIT, ::sun::java2d::pipe::hw::ContextCapabilities)
public:
	D3DContext$D3DContextCaps();
	void init$(int32_t caps, $String* adapterId);
	virtual $String* toString() override;
	static const int32_t CAPS_LCD_SHADER = 65536; // (FIRST_PRIVATE_CAP << 0)
	static const int32_t CAPS_BIOP_SHADER = 131072; // (FIRST_PRIVATE_CAP << 1)
	static const int32_t CAPS_DEVICE_OK = 262144; // (FIRST_PRIVATE_CAP << 2)
	static const int32_t CAPS_AA_SHADER = 524288; // (FIRST_PRIVATE_CAP << 3)
};

		} // d3d
	} // java2d
} // sun

#pragma pop_macro("CAPS_AA_SHADER")
#pragma pop_macro("CAPS_BIOP_SHADER")
#pragma pop_macro("CAPS_DEVICE_OK")
#pragma pop_macro("CAPS_LCD_SHADER")
#pragma pop_macro("FIRST_PRIVATE_CAP")

#endif // _sun_java2d_d3d_D3DContext$D3DContextCaps_h_