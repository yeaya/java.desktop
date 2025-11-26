#ifndef _com_sun_java_swing_plaf_motif_MotifButtonUI_h_
#define _com_sun_java_swing_plaf_motif_MotifButtonUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifButtonUI
//$ extends javax.swing.plaf.basic.BasicButtonUI

#include <javax/swing/plaf/basic/BasicButtonUI.h>

#pragma push_macro("MOTIF_BUTTON_UI_KEY")
#undef MOTIF_BUTTON_UI_KEY

namespace java {
	namespace awt {
		class Color;
		class Graphics;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
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
			namespace basic {
				class BasicButtonListener;
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

class $export MotifButtonUI : public ::javax::swing::plaf::basic::BasicButtonUI {
	$class(MotifButtonUI, 0, ::javax::swing::plaf::basic::BasicButtonUI)
public:
	MotifButtonUI();
	void init$();
	virtual ::javax::swing::plaf::basic::BasicButtonListener* createButtonListener(::javax::swing::AbstractButton* b) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void fillContentArea(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b, ::java::awt::Color* fillColor);
	virtual ::java::awt::Color* getSelectColor();
	virtual void installDefaults(::javax::swing::AbstractButton* b) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintButtonPressed(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b) override;
	virtual void paintFocus(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b, ::java::awt::Rectangle* viewRect, ::java::awt::Rectangle* textRect, ::java::awt::Rectangle* iconRect) override;
	virtual void paintIcon(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::java::awt::Rectangle* iconRect) override;
	virtual void uninstallDefaults(::javax::swing::AbstractButton* b) override;
	::java::awt::Color* selectColor = nullptr;
	bool defaults_initialized = false;
	static $Object* MOTIF_BUTTON_UI_KEY;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("MOTIF_BUTTON_UI_KEY")

#endif // _com_sun_java_swing_plaf_motif_MotifButtonUI_h_