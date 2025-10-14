#ifndef _sun_java2d_pipe_hw_ExtendedBufferCapabilities$VSyncType_h_
#define _sun_java2d_pipe_hw_ExtendedBufferCapabilities$VSyncType_h_
//$ class sun.java2d.pipe.hw.ExtendedBufferCapabilities$VSyncType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("VSYNC_DEFAULT")
#undef VSYNC_DEFAULT
#pragma push_macro("VSYNC_OFF")
#undef VSYNC_OFF
#pragma push_macro("VSYNC_ON")
#undef VSYNC_ON

namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {

class ExtendedBufferCapabilities$VSyncType : public ::java::lang::Enum {
	$class(ExtendedBufferCapabilities$VSyncType, 0, ::java::lang::Enum)
public:
	ExtendedBufferCapabilities$VSyncType();
	static $Array<::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t id);
	virtual int32_t id();
	static ::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType* valueOf($String* name);
	static $Array<::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType>* values();
	static ::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType* VSYNC_DEFAULT;
	static ::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType* VSYNC_ON;
	static ::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType* VSYNC_OFF;
	static $Array<::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType>* $VALUES;
	int32_t id$ = 0;
};

			} // hw
		} // pipe
	} // java2d
} // sun

#pragma pop_macro("VSYNC_DEFAULT")
#pragma pop_macro("VSYNC_OFF")
#pragma pop_macro("VSYNC_ON")

#endif // _sun_java2d_pipe_hw_ExtendedBufferCapabilities$VSyncType_h_