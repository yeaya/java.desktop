#ifndef _com_apple_laf_AquaListUI$ComponentPainter_h_
#define _com_apple_laf_AquaListUI$ComponentPainter_h_
//$ class com.apple.laf.AquaListUI$ComponentPainter
//$ extends com.apple.laf.AquaBorder$Default

#include <com/apple/laf/AquaBorder$Default.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaListUI$ComponentPainter : public ::com::apple::laf::AquaBorder$Default {
	$class(AquaListUI$ComponentPainter, $NO_CLASS_INIT, ::com::apple::laf::AquaBorder$Default)
public:
	AquaListUI$ComponentPainter();
	void init$();
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaListUI$ComponentPainter_h_