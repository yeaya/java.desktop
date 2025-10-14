#ifndef _javax_swing_plaf_multi_MultiToolTipUI_h_
#define _javax_swing_plaf_multi_MultiToolTipUI_h_
//$ class javax.swing.plaf.multi.MultiToolTipUI
//$ extends javax.swing.plaf.ToolTipUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/ToolTipUI.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
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

class $export MultiToolTipUI : public ::javax::swing::plaf::ToolTipUI {
	$class(MultiToolTipUI, $NO_CLASS_INIT, ::javax::swing::plaf::ToolTipUI)
public:
	MultiToolTipUI();
	void init$();
	virtual bool contains(::javax::swing::JComponent* a, int32_t b, int32_t c) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* a);
	virtual ::javax::accessibility::Accessible* getAccessibleChild(::javax::swing::JComponent* a, int32_t b) override;
	virtual int32_t getAccessibleChildrenCount(::javax::swing::JComponent* a) override;
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* a) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* a) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* a) override;
	virtual $Array<::javax::swing::plaf::ComponentUI>* getUIs();
	virtual void installUI(::javax::swing::JComponent* a) override;
	virtual void paint(::java::awt::Graphics* a, ::javax::swing::JComponent* b) override;
	virtual void uninstallUI(::javax::swing::JComponent* a) override;
	virtual void update(::java::awt::Graphics* a, ::javax::swing::JComponent* b) override;
	::java::util::Vector* uis = nullptr;
};

			} // multi
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_multi_MultiToolTipUI_h_