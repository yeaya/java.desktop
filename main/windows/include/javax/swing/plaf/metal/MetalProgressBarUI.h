#ifndef _javax_swing_plaf_metal_MetalProgressBarUI_h_
#define _javax_swing_plaf_metal_MetalProgressBarUI_h_
//$ class javax.swing.plaf.metal.MetalProgressBarUI
//$ extends javax.swing.plaf.basic.BasicProgressBarUI

#include <javax/swing/plaf/basic/BasicProgressBarUI.h>

namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
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
			class ComponentUI;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalProgressBarUI : public ::javax::swing::plaf::basic::BasicProgressBarUI {
	$class(MetalProgressBarUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicProgressBarUI)
public:
	MetalProgressBarUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void paintDeterminate(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintIndeterminate(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	::java::awt::Rectangle* innards = nullptr;
	::java::awt::Rectangle* box = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalProgressBarUI_h_