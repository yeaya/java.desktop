#ifndef _java_awt_image_ShortLookupTable_h_
#define _java_awt_image_ShortLookupTable_h_
//$ class java.awt.image.ShortLookupTable
//$ extends java.awt.image.LookupTable

#include <java/awt/image/LookupTable.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace image {

class $import ShortLookupTable : public ::java::awt::image::LookupTable {
	$class(ShortLookupTable, $NO_CLASS_INIT, ::java::awt::image::LookupTable)
public:
	ShortLookupTable();
	void init$(int32_t offset, $Array<int16_t, 2>* data);
	void init$(int32_t offset, $shorts* data);
	$Array<int16_t, 2>* getTable();
	virtual $ints* lookupPixel($ints* src, $ints* dst) override;
	virtual $shorts* lookupPixel($shorts* src, $shorts* dst);
	$Array<int16_t, 2>* data = nullptr;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_ShortLookupTable_h_