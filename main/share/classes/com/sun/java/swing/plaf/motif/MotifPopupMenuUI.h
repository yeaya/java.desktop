#ifndef _com_sun_java_swing_plaf_motif_MotifPopupMenuUI_h_
#define _com_sun_java_swing_plaf_motif_MotifPopupMenuUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifPopupMenuUI
//$ extends javax.swing.plaf.basic.BasicPopupMenuUI

#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>

namespace java {
	namespace awt {
		class Dimension;
		class Font;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JPopupMenu;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
		}
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

class $export MotifPopupMenuUI : public ::javax::swing::plaf::basic::BasicPopupMenuUI {
	$class(MotifPopupMenuUI, 0, ::javax::swing::plaf::basic::BasicPopupMenuUI)
public:
	MotifPopupMenuUI();
	void init$();
	virtual ::javax::swing::event::ChangeListener* createChangeListener(::javax::swing::JPopupMenu* m);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual bool isPopupTrigger(::java::awt::event::MouseEvent* e) override;
	static ::javax::swing::border::Border* border;
	::java::awt::Font* titleFont = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifPopupMenuUI_h_