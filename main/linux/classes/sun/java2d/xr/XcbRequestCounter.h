#ifndef _sun_java2d_xr_XcbRequestCounter_h_
#define _sun_java2d_xr_XcbRequestCounter_h_
//$ class sun.java2d.xr.XcbRequestCounter
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MAX_UINT")
#undef MAX_UINT

namespace sun {
	namespace java2d {
		namespace xr {

class XcbRequestCounter : public ::java::lang::Object {
	$class(XcbRequestCounter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XcbRequestCounter();
	void init$(int64_t value);
	virtual void add(int64_t v);
	virtual int64_t getValue();
	virtual void setValue(int64_t value);
	static const int64_t MAX_UINT = (int64_t)0x00000000FFFFFFFF;
	int64_t value = 0;
};

		} // xr
	} // java2d
} // sun

#pragma pop_macro("MAX_UINT")

#endif // _sun_java2d_xr_XcbRequestCounter_h_