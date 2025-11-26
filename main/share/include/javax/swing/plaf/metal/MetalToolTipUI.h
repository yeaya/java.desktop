#ifndef _javax_swing_plaf_metal_MetalToolTipUI_h_
#define _javax_swing_plaf_metal_MetalToolTipUI_h_
//$ class javax.swing.plaf.metal.MetalToolTipUI
//$ extends javax.swing.plaf.basic.BasicToolTipUI

#include <javax/swing/plaf/basic/BasicToolTipUI.h>

namespace java {
	namespace awt {
		class Dimension;
		class Font;
		class FontMetrics;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JToolTip;
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

class $import MetalToolTipUI : public ::javax::swing::plaf::basic::BasicToolTipUI {
	$class(MetalToolTipUI, 0, ::javax::swing::plaf::basic::BasicToolTipUI)
public:
	MetalToolTipUI();
	void init$();
	int32_t calcAccelSpacing(::javax::swing::JComponent* c, ::java::awt::FontMetrics* fm, $String* accel);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	$String* getAcceleratorString(::javax::swing::JToolTip* tip);
	virtual $String* getAcceleratorString();
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual bool isAcceleratorHidden();
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	static ::javax::swing::plaf::metal::MetalToolTipUI* sharedInstance;
	::java::awt::Font* smallFont = nullptr;
	::javax::swing::JToolTip* tip = nullptr;
	static const int32_t padSpaceBetweenStrings = 12;
	$String* acceleratorDelimiter = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalToolTipUI_h_