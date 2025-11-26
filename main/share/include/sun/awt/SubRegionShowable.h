#ifndef _sun_awt_SubRegionShowable_h_
#define _sun_awt_SubRegionShowable_h_
//$ interface sun.awt.SubRegionShowable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {

class $import SubRegionShowable : public ::java::lang::Object {
	$interface(SubRegionShowable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void show(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {}
	virtual bool showIfNotLost(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {return false;}
};

	} // awt
} // sun

#endif // _sun_awt_SubRegionShowable_h_