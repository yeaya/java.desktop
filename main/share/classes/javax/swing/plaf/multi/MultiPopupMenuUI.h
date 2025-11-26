#ifndef _javax_swing_plaf_multi_MultiPopupMenuUI_h_
#define _javax_swing_plaf_multi_MultiPopupMenuUI_h_
//$ class javax.swing.plaf.multi.MultiPopupMenuUI
//$ extends javax.swing.plaf.PopupMenuUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/PopupMenuUI.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JPopupMenu;
		class Popup;
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
			namespace multi {

class $export MultiPopupMenuUI : public ::javax::swing::plaf::PopupMenuUI {
	$class(MultiPopupMenuUI, $NO_CLASS_INIT, ::javax::swing::plaf::PopupMenuUI)
public:
	MultiPopupMenuUI();
	void init$();
	virtual bool contains(::javax::swing::JComponent* a, int32_t b, int32_t c) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* a);
	virtual ::javax::accessibility::Accessible* getAccessibleChild(::javax::swing::JComponent* a, int32_t b) override;
	virtual int32_t getAccessibleChildrenCount(::javax::swing::JComponent* a) override;
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* a) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* a) override;
	virtual ::javax::swing::Popup* getPopup(::javax::swing::JPopupMenu* a, int32_t b, int32_t c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* a) override;
	virtual $Array<::javax::swing::plaf::ComponentUI>* getUIs();
	virtual void installUI(::javax::swing::JComponent* a) override;
	virtual bool isPopupTrigger(::java::awt::event::MouseEvent* a) override;
	virtual void paint(::java::awt::Graphics* a, ::javax::swing::JComponent* b) override;
	virtual void uninstallUI(::javax::swing::JComponent* a) override;
	virtual void update(::java::awt::Graphics* a, ::javax::swing::JComponent* b) override;
	::java::util::Vector* uis = nullptr;
};

			} // multi
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_multi_MultiPopupMenuUI_h_