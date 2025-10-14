#ifndef _javax_swing_plaf_synth_SynthSplitPaneDivider_h_
#define _javax_swing_plaf_synth_SynthSplitPaneDivider_h_
//$ class javax.swing.plaf.synth.SynthSplitPaneDivider
//$ extends javax.swing.plaf.basic.BasicSplitPaneDivider

#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JButton;
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
			namespace synth {

class SynthSplitPaneDivider : public ::javax::swing::plaf::basic::BasicSplitPaneDivider {
	$class(SynthSplitPaneDivider, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSplitPaneDivider)
public:
	SynthSplitPaneDivider();
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::add;
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::getMousePosition;
	void init$(::javax::swing::plaf::basic::BasicSplitPaneUI* ui);
	virtual ::javax::swing::JButton* createLeftOneTouchButton() override;
	virtual ::javax::swing::JButton* createRightOneTouchButton() override;
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::list;
	int32_t lookupOneTouchSize();
	int32_t mapDirection(bool isLeft);
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::remove;
	virtual void setMouseOver(bool mouseOver) override;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthSplitPaneDivider_h_