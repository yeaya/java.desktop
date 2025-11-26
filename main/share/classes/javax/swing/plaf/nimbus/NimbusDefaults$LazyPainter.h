#ifndef _javax_swing_plaf_nimbus_NimbusDefaults$LazyPainter_h_
#define _javax_swing_plaf_nimbus_NimbusDefaults$LazyPainter_h_
//$ class javax.swing.plaf.nimbus.NimbusDefaults$LazyPainter
//$ extends javax.swing.UIDefaults$LazyValue

#include <javax/swing/UIDefaults$LazyValue.h>

namespace java {
	namespace awt {
		class Dimension;
		class Insets;
	}
}
namespace javax {
	namespace swing {
		class UIDefaults;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class AbstractRegionPainter$PaintContext;
				class AbstractRegionPainter$PaintContext$CacheMode;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class NimbusDefaults$LazyPainter : public ::javax::swing::UIDefaults$LazyValue {
	$class(NimbusDefaults$LazyPainter, $NO_CLASS_INIT, ::javax::swing::UIDefaults$LazyValue)
public:
	NimbusDefaults$LazyPainter();
	void init$($String* className, int32_t which, ::java::awt::Insets* insets, ::java::awt::Dimension* canvasSize, bool inverted);
	void init$($String* className, int32_t which, ::java::awt::Insets* insets, ::java::awt::Dimension* canvasSize, bool inverted, ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext$CacheMode* cacheMode, double maxH, double maxV);
	virtual $Object* createValue(::javax::swing::UIDefaults* table) override;
	int32_t which = 0;
	::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx = nullptr;
	$String* className = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_NimbusDefaults$LazyPainter_h_