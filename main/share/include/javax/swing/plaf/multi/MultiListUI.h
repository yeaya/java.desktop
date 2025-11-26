#ifndef _javax_swing_plaf_multi_MultiListUI_h_
#define _javax_swing_plaf_multi_MultiListUI_h_
//$ class javax.swing.plaf.multi.MultiListUI
//$ extends javax.swing.plaf.ListUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/ListUI.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
		class Point;
		class Rectangle;
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
		class JList;
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

class $import MultiListUI : public ::javax::swing::plaf::ListUI {
	$class(MultiListUI, $NO_CLASS_INIT, ::javax::swing::plaf::ListUI)
public:
	MultiListUI();
	void init$();
	virtual bool contains(::javax::swing::JComponent* a, int32_t b, int32_t c) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* a);
	virtual ::javax::accessibility::Accessible* getAccessibleChild(::javax::swing::JComponent* a, int32_t b) override;
	virtual int32_t getAccessibleChildrenCount(::javax::swing::JComponent* a) override;
	virtual ::java::awt::Rectangle* getCellBounds(::javax::swing::JList* a, int32_t b, int32_t c) override;
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* a) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* a) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* a) override;
	virtual $Array<::javax::swing::plaf::ComponentUI>* getUIs();
	virtual ::java::awt::Point* indexToLocation(::javax::swing::JList* a, int32_t b) override;
	virtual void installUI(::javax::swing::JComponent* a) override;
	virtual int32_t locationToIndex(::javax::swing::JList* a, ::java::awt::Point* b) override;
	virtual void paint(::java::awt::Graphics* a, ::javax::swing::JComponent* b) override;
	virtual void uninstallUI(::javax::swing::JComponent* a) override;
	virtual void update(::java::awt::Graphics* a, ::javax::swing::JComponent* b) override;
	::java::util::Vector* uis = nullptr;
};

			} // multi
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_multi_MultiListUI_h_