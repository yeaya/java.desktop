#ifndef _com_apple_laf_AquaTabbedPaneUI$AlterRects_h_
#define _com_apple_laf_AquaTabbedPaneUI$AlterRects_h_
//$ class com.apple.laf.AquaTabbedPaneUI$AlterRects
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneUI$AlterRects : public ::java::lang::Object {
	$class(AquaTabbedPaneUI$AlterRects, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AquaTabbedPaneUI$AlterRects();
	void init$(int32_t x, int32_t y, int32_t w, int32_t h);
	static ::java::awt::Rectangle* alter(::java::awt::Rectangle* r, ::java::awt::Rectangle* o);
	virtual ::com::apple::laf::AquaTabbedPaneUI$AlterRects* end(int32_t x, int32_t y, int32_t w, int32_t h);
	virtual ::com::apple::laf::AquaTabbedPaneUI$AlterRects* start(int32_t x, int32_t y, int32_t w, int32_t h);
	::java::awt::Rectangle* standard = nullptr;
	::java::awt::Rectangle* first = nullptr;
	::java::awt::Rectangle* last = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneUI$AlterRects_h_