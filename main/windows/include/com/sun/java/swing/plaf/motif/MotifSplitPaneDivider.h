#ifndef _com_sun_java_swing_plaf_motif_MotifSplitPaneDivider_h_
#define _com_sun_java_swing_plaf_motif_MotifSplitPaneDivider_h_
//$ class com.sun.java.swing.plaf.motif.MotifSplitPaneDivider
//$ extends javax.swing.plaf.basic.BasicSplitPaneDivider

#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>

namespace java {
	namespace awt {
		class Color;
		class Cursor;
		class Dimension;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JSplitPane;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicSplitPaneDivider$DragController;
				class BasicSplitPaneUI;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifSplitPaneDivider : public ::javax::swing::plaf::basic::BasicSplitPaneDivider {
	$class(MotifSplitPaneDivider, 0, ::javax::swing::plaf::basic::BasicSplitPaneDivider)
public:
	MotifSplitPaneDivider();
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::add;
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::getMousePosition;
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::list;
	void init$(::javax::swing::plaf::basic::BasicSplitPaneUI* ui);
	::javax::swing::plaf::basic::BasicSplitPaneDivider$DragController* getDragger();
	virtual ::java::awt::Dimension* getMinimumSize() override;
	::javax::swing::JSplitPane* getSplitPane();
	bool isInThumb(int32_t x, int32_t y);
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::remove;
	virtual void setBasicSplitPaneUI(::javax::swing::plaf::basic::BasicSplitPaneUI* newUI) override;
	virtual void setDividerSize(int32_t newSize) override;
	static ::java::awt::Cursor* defaultCursor;
	static const int32_t minimumThumbSize = 6;
	static const int32_t defaultDividerSize = 18;
	static const int32_t pad = 6;
	int32_t hThumbOffset = 0;
	int32_t vThumbOffset = 0;
	int32_t hThumbWidth = 0;
	int32_t hThumbHeight = 0;
	int32_t vThumbWidth = 0;
	int32_t vThumbHeight = 0;
	::java::awt::Color* highlightColor = nullptr;
	::java::awt::Color* shadowColor = nullptr;
	::java::awt::Color* focusedColor = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifSplitPaneDivider_h_