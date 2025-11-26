#ifndef _sun_awt_X11_XPropertyCache$PropertyCacheEntry_h_
#define _sun_awt_X11_XPropertyCache$PropertyCacheEntry_h_
//$ class sun.awt.X11.XPropertyCache$PropertyCacheEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace X11 {

class XPropertyCache$PropertyCacheEntry : public ::java::lang::Object {
	$class(XPropertyCache$PropertyCacheEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XPropertyCache$PropertyCacheEntry();
	void init$(int32_t format, int32_t numberOfItems, int64_t bytesAfter, int64_t data, int32_t dataLength);
	virtual int64_t getBytesAfter();
	virtual int64_t getData();
	virtual int32_t getDataLength();
	virtual int32_t getFormat();
	virtual int32_t getNumberOfItems();
	int32_t format = 0;
	int32_t numberOfItems = 0;
	int64_t bytesAfter = 0;
	int64_t data = 0;
	int32_t dataLength = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XPropertyCache$PropertyCacheEntry_h_