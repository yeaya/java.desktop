#ifndef _javax_swing_plaf_nimbus_ToolBarSeparatorPainter_h_
#define _javax_swing_plaf_nimbus_ToolBarSeparatorPainter_h_
//$ class javax.swing.plaf.nimbus.ToolBarSeparatorPainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("INSET")
#undef INSET
#pragma push_macro("SPACE")
#undef SPACE

namespace java {
	namespace awt {
		class Graphics2D;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class AbstractRegionPainter$PaintContext;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class ToolBarSeparatorPainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(ToolBarSeparatorPainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	ToolBarSeparatorPainter();
	void init$();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	static const int32_t SPACE = 3;
	static const int32_t INSET = 2;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("INSET")
#pragma pop_macro("SPACE")

#endif // _javax_swing_plaf_nimbus_ToolBarSeparatorPainter_h_