#ifndef _sun_awt_OSInfo$WindowsVersion_h_
#define _sun_awt_OSInfo$WindowsVersion_h_
//$ class sun.awt.OSInfo$WindowsVersion
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace sun {
	namespace awt {

class $import OSInfo$WindowsVersion : public ::java::lang::Comparable {
	$class(OSInfo$WindowsVersion, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	OSInfo$WindowsVersion();
	void init$(int32_t major, int32_t minor);
	virtual int32_t compareTo(::sun::awt::OSInfo$WindowsVersion* o);
	virtual int32_t compareTo(Object$* o) override;
	virtual bool equals(Object$* obj) override;
	virtual int32_t getMajor();
	virtual int32_t getMinor();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	int32_t major = 0;
	int32_t minor = 0;
};

	} // awt
} // sun

#endif // _sun_awt_OSInfo$WindowsVersion_h_