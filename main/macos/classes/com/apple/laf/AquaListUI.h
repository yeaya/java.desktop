#ifndef _com_apple_laf_AquaListUI_h_
#define _com_apple_laf_AquaListUI_h_
//$ class com.apple.laf.AquaListUI
//$ extends javax.swing.plaf.basic.BasicListUI

#include <javax/swing/plaf/basic/BasicListUI.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusListener;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JList;
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
			class MouseInputListener;
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
	namespace apple {
		namespace laf {

class AquaListUI : public ::javax::swing::plaf::basic::BasicListUI {
	$class(AquaListUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicListUI)
public:
	AquaListUI();
	void init$();
	virtual ::java::awt::event::FocusListener* createFocusListener() override;
	virtual ::javax::swing::event::MouseInputListener* createMouseInputListener() override;
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::javax::swing::JList* getComponent();
	static ::javax::swing::border::Border* getListEvenBackgroundPainter();
	static ::javax::swing::border::Border* getListOddBackgroundPainter();
	static ::javax::swing::border::Border* getSourceListBackgroundPainter();
	static ::javax::swing::border::Border* getSourceListFocusedSelectionBackgroundPainter();
	static ::javax::swing::border::Border* getSourceListSelectionBackgroundPainter();
	virtual void installKeyboardActions() override;
	virtual void repaintCell(Object$* value, int32_t selectedIndex, bool selected);
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaListUI_h_