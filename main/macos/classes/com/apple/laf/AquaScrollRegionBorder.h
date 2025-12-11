#ifndef _com_apple_laf_AquaScrollRegionBorder_h_
#define _com_apple_laf_AquaScrollRegionBorder_h_
//$ class com.apple.laf.AquaScrollRegionBorder
//$ extends com.apple.laf.AquaBorder

#include <com/apple/laf/AquaBorder.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$State;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaPainter;
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
		class JComponent;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaScrollRegionBorder : public ::com::apple::laf::AquaBorder {
	$class(AquaScrollRegionBorder, 0, ::com::apple::laf::AquaBorder)
public:
	AquaScrollRegionBorder();
	void init$();
	virtual ::com::apple::laf::AquaPainter* createPainter() override;
	static ::com::apple::laf::AquaScrollRegionBorder* getScrollRegionBorder();
	virtual ::apple::laf::JRSUIConstants$State* getState(::javax::swing::JComponent* c);
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	static ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor* instance;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaScrollRegionBorder_h_