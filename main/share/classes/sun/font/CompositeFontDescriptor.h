#ifndef _sun_font_CompositeFontDescriptor_h_
#define _sun_font_CompositeFontDescriptor_h_
//$ class sun.font.CompositeFontDescriptor
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace font {

class CompositeFontDescriptor : public ::java::lang::Object {
	$class(CompositeFontDescriptor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CompositeFontDescriptor();
	void init$($String* faceName, int32_t coreComponentCount, $StringArray* componentFaceNames, $StringArray* componentFileNames, $ints* exclusionRanges, $ints* exclusionRangeLimits);
	virtual $StringArray* getComponentFaceNames();
	virtual $StringArray* getComponentFileNames();
	virtual int32_t getCoreComponentCount();
	virtual $ints* getExclusionRangeLimits();
	virtual $ints* getExclusionRanges();
	virtual $String* getFaceName();
	$String* faceName = nullptr;
	int32_t coreComponentCount = 0;
	$StringArray* componentFaceNames = nullptr;
	$StringArray* componentFileNames = nullptr;
	$ints* exclusionRanges = nullptr;
	$ints* exclusionRangeLimits = nullptr;
};

	} // font
} // sun

#endif // _sun_font_CompositeFontDescriptor_h_