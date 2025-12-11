#ifndef _sun_java2d_pipe_hw_ContextCapabilities_h_
#define _sun_java2d_pipe_hw_ContextCapabilities_h_
//$ class sun.java2d.pipe.hw.ContextCapabilities
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CAPS_EMPTY")
#undef CAPS_EMPTY
#pragma push_macro("CAPS_MULTITEXTURE")
#undef CAPS_MULTITEXTURE
#pragma push_macro("CAPS_PS20")
#undef CAPS_PS20
#pragma push_macro("CAPS_PS30")
#undef CAPS_PS30
#pragma push_macro("CAPS_RT_PLAIN_ALPHA")
#undef CAPS_RT_PLAIN_ALPHA
#pragma push_macro("CAPS_RT_TEXTURE_ALPHA")
#undef CAPS_RT_TEXTURE_ALPHA
#pragma push_macro("CAPS_RT_TEXTURE_OPAQUE")
#undef CAPS_RT_TEXTURE_OPAQUE
#pragma push_macro("CAPS_TEXNONPOW2")
#undef CAPS_TEXNONPOW2
#pragma push_macro("CAPS_TEXNONSQUARE")
#undef CAPS_TEXNONSQUARE
#pragma push_macro("FIRST_PRIVATE_CAP")
#undef FIRST_PRIVATE_CAP

namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {

class ContextCapabilities : public ::java::lang::Object {
	$class(ContextCapabilities, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ContextCapabilities();
	void init$(int32_t caps, $String* adapterId);
	virtual $String* getAdapterId();
	virtual int32_t getCaps();
	virtual $String* toString() override;
	static const int32_t CAPS_EMPTY = 0; // (0 << 0)
	static const int32_t CAPS_RT_PLAIN_ALPHA = 2; // (1 << 1)
	static const int32_t CAPS_RT_TEXTURE_ALPHA = 4; // (1 << 2)
	static const int32_t CAPS_RT_TEXTURE_OPAQUE = 8; // (1 << 3)
	static const int32_t CAPS_MULTITEXTURE = 16; // (1 << 4)
	static const int32_t CAPS_TEXNONPOW2 = 32; // (1 << 5)
	static const int32_t CAPS_TEXNONSQUARE = 64; // (1 << 6)
	static const int32_t CAPS_PS20 = 128; // (1 << 7)
	static const int32_t CAPS_PS30 = 256; // (1 << 8)
	static const int32_t FIRST_PRIVATE_CAP = 65536; // (1 << 16)
	int32_t caps = 0;
	$String* adapterId = nullptr;
};

			} // hw
		} // pipe
	} // java2d
} // sun

#pragma pop_macro("CAPS_EMPTY")
#pragma pop_macro("CAPS_MULTITEXTURE")
#pragma pop_macro("CAPS_PS20")
#pragma pop_macro("CAPS_PS30")
#pragma pop_macro("CAPS_RT_PLAIN_ALPHA")
#pragma pop_macro("CAPS_RT_TEXTURE_ALPHA")
#pragma pop_macro("CAPS_RT_TEXTURE_OPAQUE")
#pragma pop_macro("CAPS_TEXNONPOW2")
#pragma pop_macro("CAPS_TEXNONSQUARE")
#pragma pop_macro("FIRST_PRIVATE_CAP")

#endif // _sun_java2d_pipe_hw_ContextCapabilities_h_