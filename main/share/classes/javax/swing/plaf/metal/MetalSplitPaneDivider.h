#ifndef _javax_swing_plaf_metal_MetalSplitPaneDivider_h_
#define _javax_swing_plaf_metal_MetalSplitPaneDivider_h_
//$ class javax.swing.plaf.metal.MetalSplitPaneDivider
//$ extends javax.swing.plaf.basic.BasicSplitPaneDivider

#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JComponent;
		class JSplitPane;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicSplitPaneUI;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalBumps;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalSplitPaneDivider : public ::javax::swing::plaf::basic::BasicSplitPaneDivider {
	$class(MetalSplitPaneDivider, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSplitPaneDivider)
public:
	MetalSplitPaneDivider();
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::add;
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::getMousePosition;
	void init$(::javax::swing::plaf::basic::BasicSplitPaneUI* ui);
	virtual ::javax::swing::JButton* createLeftOneTouchButton() override;
	virtual ::javax::swing::JButton* createRightOneTouchButton() override;
	virtual ::javax::swing::JButton* getLeftButtonFromSuper();
	virtual int32_t getOneTouchOffsetFromSuper();
	virtual int32_t getOneTouchSizeFromSuper();
	virtual int32_t getOrientationFromSuper();
	virtual ::javax::swing::JButton* getRightButtonFromSuper();
	virtual ::javax::swing::JSplitPane* getSplitPaneFromSuper();
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::list;
	void maybeMakeButtonOpaque(::javax::swing::JComponent* c);
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::remove;
	::javax::swing::plaf::metal::MetalBumps* bumps = nullptr;
	::javax::swing::plaf::metal::MetalBumps* focusBumps = nullptr;
	int32_t inset = 0;
	::java::awt::Color* controlColor = nullptr;
	::java::awt::Color* primaryControlColor = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalSplitPaneDivider_h_