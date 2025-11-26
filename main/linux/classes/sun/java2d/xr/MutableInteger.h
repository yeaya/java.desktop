#ifndef _sun_java2d_xr_MutableInteger_h_
#define _sun_java2d_xr_MutableInteger_h_
//$ class sun.java2d.xr.MutableInteger
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		namespace xr {

class MutableInteger : public ::java::lang::Object {
	$class(MutableInteger, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MutableInteger();
	void init$(int32_t value);
	virtual bool equals(Object$* o) override;
	virtual int32_t getValue();
	virtual int32_t hashCode() override;
	virtual void setValue(int32_t value);
	int32_t value = 0;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_MutableInteger_h_