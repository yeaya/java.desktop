#ifndef _javax_swing_plaf_multi_MultiSplitPaneUI_h_
#define _javax_swing_plaf_multi_MultiSplitPaneUI_h_
//$ class javax.swing.plaf.multi.MultiSplitPaneUI
//$ extends javax.swing.plaf.SplitPaneUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/SplitPaneUI.h>

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
		class JSplitPane;
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

class $import MultiSplitPaneUI : public ::javax::swing::plaf::SplitPaneUI {
	$class(MultiSplitPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::SplitPaneUI)
public:
	MultiSplitPaneUI();
	void init$();
	virtual bool contains(::javax::swing::JComponent* a, int32_t b, int32_t c) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* a);
	virtual void finishedPaintingChildren(::javax::swing::JSplitPane* a, ::java::awt::Graphics* b) override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(::javax::swing::JComponent* a, int32_t b) override;
	virtual int32_t getAccessibleChildrenCount(::javax::swing::JComponent* a) override;
	virtual int32_t getDividerLocation(::javax::swing::JSplitPane* a) override;
	virtual int32_t getMaximumDividerLocation(::javax::swing::JSplitPane* a) override;
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* a) override;
	virtual int32_t getMinimumDividerLocation(::javax::swing::JSplitPane* a) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* a) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* a) override;
	virtual $Array<::javax::swing::plaf::ComponentUI>* getUIs();
	virtual void installUI(::javax::swing::JComponent* a) override;
	virtual void paint(::java::awt::Graphics* a, ::javax::swing::JComponent* b) override;
	virtual void resetToPreferredSizes(::javax::swing::JSplitPane* a) override;
	virtual void setDividerLocation(::javax::swing::JSplitPane* a, int32_t b) override;
	virtual void uninstallUI(::javax::swing::JComponent* a) override;
	virtual void update(::java::awt::Graphics* a, ::javax::swing::JComponent* b) override;
	::java::util::Vector* uis = nullptr;
};

			} // multi
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_multi_MultiSplitPaneUI_h_