#ifndef _java_awt_DisplayMode_h_
#define _java_awt_DisplayMode_h_
//$ class java.awt.DisplayMode
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BIT_DEPTH_MULTI")
#undef BIT_DEPTH_MULTI
#pragma push_macro("REFRESH_RATE_UNKNOWN")
#undef REFRESH_RATE_UNKNOWN

namespace java {
	namespace awt {
		class Dimension;
	}
}

namespace java {
	namespace awt {

class $export DisplayMode : public ::java::lang::Object {
	$class(DisplayMode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DisplayMode();
	void init$(int32_t width, int32_t height, int32_t bitDepth, int32_t refreshRate);
	bool equals(::java::awt::DisplayMode* dm);
	virtual bool equals(Object$* dm) override;
	int32_t getBitDepth();
	int32_t getHeight();
	int32_t getRefreshRate();
	int32_t getWidth();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	::java::awt::Dimension* size = nullptr;
	int32_t bitDepth = 0;
	int32_t refreshRate = 0;
	static const int32_t BIT_DEPTH_MULTI = (-1);
	static const int32_t REFRESH_RATE_UNKNOWN = 0;
};

	} // awt
} // java

#pragma pop_macro("BIT_DEPTH_MULTI")
#pragma pop_macro("REFRESH_RATE_UNKNOWN")

#endif // _java_awt_DisplayMode_h_