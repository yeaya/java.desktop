#ifndef _com_sun_java_swing_plaf_motif_MotifScrollBarUI_h_
#define _com_sun_java_swing_plaf_motif_MotifScrollBarUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifScrollBarUI
//$ extends javax.swing.plaf.basic.BasicScrollBarUI

#include <javax/swing/plaf/basic/BasicScrollBarUI.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class JButton;
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

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifScrollBarUI : public ::javax::swing::plaf::basic::BasicScrollBarUI {
	$class(MotifScrollBarUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicScrollBarUI)
public:
	MotifScrollBarUI();
	void init$();
	virtual ::javax::swing::JButton* createDecreaseButton(int32_t orientation) override;
	virtual ::javax::swing::JButton* createIncreaseButton(int32_t orientation) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void paintThumb(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::java::awt::Rectangle* thumbBounds) override;
	virtual void paintTrack(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::java::awt::Rectangle* trackBounds) override;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifScrollBarUI_h_