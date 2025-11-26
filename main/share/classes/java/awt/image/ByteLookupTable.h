#ifndef _java_awt_image_ByteLookupTable_h_
#define _java_awt_image_ByteLookupTable_h_
//$ class java.awt.image.ByteLookupTable
//$ extends java.awt.image.LookupTable

#include <java/awt/image/LookupTable.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace image {

class $export ByteLookupTable : public ::java::awt::image::LookupTable {
	$class(ByteLookupTable, $NO_CLASS_INIT, ::java::awt::image::LookupTable)
public:
	ByteLookupTable();
	void init$(int32_t offset, $Array<int8_t, 2>* data);
	void init$(int32_t offset, $bytes* data);
	$Array<int8_t, 2>* getTable();
	virtual $ints* lookupPixel($ints* src, $ints* dst) override;
	virtual $bytes* lookupPixel($bytes* src, $bytes* dst);
	$Array<int8_t, 2>* data = nullptr;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_ByteLookupTable_h_