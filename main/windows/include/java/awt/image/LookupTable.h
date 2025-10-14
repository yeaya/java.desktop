#ifndef _java_awt_image_LookupTable_h_
#define _java_awt_image_LookupTable_h_
//$ class java.awt.image.LookupTable
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace image {

class $import LookupTable : public ::java::lang::Object {
	$class(LookupTable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LookupTable();
	void init$(int32_t offset, int32_t numComponents);
	virtual int32_t getNumComponents();
	virtual int32_t getOffset();
	virtual $ints* lookupPixel($ints* src, $ints* dest) {return nullptr;}
	int32_t numComponents = 0;
	int32_t offset = 0;
	int32_t numEntries = 0;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_LookupTable_h_