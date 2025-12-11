#ifndef _com_apple_laf_AquaGroupBorder_h_
#define _com_apple_laf_AquaGroupBorder_h_
//$ class com.apple.laf.AquaGroupBorder
//$ extends com.apple.laf.AquaBorder

#include <com/apple/laf/AquaBorder.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtilControlSize$SizeVariant;
			class AquaUtils$RecyclableSingletonFromDefaultConstructor;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaGroupBorder : public ::com::apple::laf::AquaBorder {
	$class(AquaGroupBorder, 0, ::com::apple::laf::AquaBorder)
public:
	AquaGroupBorder();
	void init$(::com::apple::laf::AquaUtilControlSize$SizeVariant* sizeVariant);
	static ::javax::swing::border::Border* getBorderForTitledBorder();
	static ::javax::swing::border::Border* getTabbedPaneGroupBorder();
	static ::javax::swing::border::Border* getTitlelessBorder();
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	static ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor* tabbedPaneGroupBorder;
	static ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor* titleBorderGroupBorder;
	static ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor* titlelessGroupBorder;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaGroupBorder_h_