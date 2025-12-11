#ifndef _com_apple_laf_AquaFocus$FocusedIcon$1_h_
#define _com_apple_laf_AquaFocus$FocusedIcon$1_h_
//$ class com.apple.laf.AquaFocus$FocusedIcon$1
//$ extends com.apple.laf.AquaUtils$Painter

#include <com/apple/laf/AquaUtils$Painter.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFocus$FocusedIcon$1 : public ::com::apple::laf::AquaUtils$Painter {
	$class(AquaFocus$FocusedIcon$1, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$Painter)
public:
	AquaFocus$FocusedIcon$1();
	void init$(int32_t val$slack, ::javax::swing::Icon* val$icon);
	virtual void paint(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	::javax::swing::Icon* val$icon = nullptr;
	int32_t val$slack = 0;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFocus$FocusedIcon$1_h_