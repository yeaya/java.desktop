#ifndef _com_apple_laf_AquaTreeUI_h_
#define _com_apple_laf_AquaTreeUI_h_
//$ class com.apple.laf.AquaTreeUI
//$ extends javax.swing.plaf.basic.BasicTreeUI

#include <javax/swing/plaf/basic/BasicTreeUI.h>

#pragma push_macro("HORIZ_LINE_STYLE")
#undef HORIZ_LINE_STYLE
#pragma push_macro("HORIZ_STYLE_STRING")
#undef HORIZ_STYLE_STRING
#pragma push_macro("LEG_LINE_STYLE")
#undef LEG_LINE_STYLE
#pragma push_macro("LEG_LINE_STYLE_STRING")
#undef LEG_LINE_STYLE_STRING
#pragma push_macro("LINE_STYLE")
#undef LINE_STYLE
#pragma push_macro("NO_LINE_STYLE")
#undef NO_LINE_STYLE
#pragma push_macro("NO_STYLE_STRING")
#undef NO_STYLE_STRING

namespace apple {
	namespace laf {
		class JRSUIConstants$Direction;
		class JRSUIConstants$State;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaPainter;
			class AquaTreeUI$TreeArrowMouseInputHandler;
		}
	}
}
namespace java {
	namespace awt {
		class Graphics;
		class Insets;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusListener;
			class MouseEvent;
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
		class Icon;
		class JComponent;
		class JTree;
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
		namespace tree {
			class AbstractLayoutCache;
			class TreeModel;
			class TreePath;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTreeUI : public ::javax::swing::plaf::basic::BasicTreeUI {
	$class(AquaTreeUI, 0, ::javax::swing::plaf::basic::BasicTreeUI)
public:
	AquaTreeUI();
	using ::javax::swing::plaf::basic::BasicTreeUI::getRowForPath;
	void init$();
	static ::javax::swing::JTree* access$000(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$100(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$1000(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::tree::TreeModel* access$1100(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::tree::AbstractLayoutCache* access$1200(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$1300(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::tree::AbstractLayoutCache* access$1400(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$1500(::com::apple::laf::AquaTreeUI* x0);
	static void access$1600(::com::apple::laf::AquaTreeUI* x0, ::javax::swing::tree::TreePath* x1);
	static ::javax::swing::JTree* access$1700(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$1800(::com::apple::laf::AquaTreeUI* x0);
	static bool access$1900(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$200(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$2000(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$2100(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$2200(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$2300(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$2400(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$2500(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$2600(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$2700(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$2800(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$2900(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$300(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$3000(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$3100(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$3200(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$400(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$500(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$600(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$700(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$800(::com::apple::laf::AquaTreeUI* x0);
	static ::javax::swing::JTree* access$900(::com::apple::laf::AquaTreeUI* x0);
	virtual void collapseAllNodes(::javax::swing::tree::TreePath* parent, int32_t initialRow);
	virtual void collapseNode(int32_t row, bool recursive);
	virtual ::java::awt::event::FocusListener* createFocusListener() override;
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void decodeLineStyle(Object$* lineStyleFlag);
	virtual void expandAllNodes(::javax::swing::tree::TreePath* parent, int32_t initialRow);
	virtual void expandNode(int32_t row, bool recursive);
	virtual ::javax::swing::tree::TreePath* getClosestPathForLocation(::javax::swing::JTree* treeLocal, int32_t x, int32_t y) override;
	virtual ::javax::swing::Icon* getCollapsedIcon() override;
	virtual ::apple::laf::JRSUIConstants$Direction* getDirection(bool isExpanded, bool isLeftToRight);
	virtual ::java::awt::Rectangle* getPathArrowBounds(::javax::swing::tree::TreePath* path);
	virtual int32_t getRowForPath(::javax::swing::tree::TreePath* path);
	virtual ::apple::laf::JRSUIConstants$State* getState(::javax::swing::tree::TreePath* path);
	virtual void handleExpandControlClick(::javax::swing::tree::TreePath* path, int32_t mouseX, int32_t mouseY) override;
	virtual void installKeyboardActions() override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual bool isToggleSelectionEvent(::java::awt::event::MouseEvent* event) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintExpandControl(::java::awt::Graphics* g, ::java::awt::Rectangle* clipBounds, ::java::awt::Insets* insets, ::java::awt::Rectangle* bounds, ::javax::swing::tree::TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf) override;
	virtual void paintHorizontalPartOfLeg(::java::awt::Graphics* g, ::java::awt::Rectangle* clipBounds, ::java::awt::Insets* insets, ::java::awt::Rectangle* bounds, ::javax::swing::tree::TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf) override;
	virtual void paintHorizontalSeparators(::java::awt::Graphics* g, ::javax::swing::JComponent* c);
	virtual void paintVerticalPartOfLeg(::java::awt::Graphics* g, ::java::awt::Rectangle* clipBounds, ::java::awt::Insets* insets, ::javax::swing::tree::TreePath* path) override;
	virtual void setupPainter(::apple::laf::JRSUIConstants$State* state, bool isExpanded, bool leftToRight);
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	static $String* LINE_STYLE;
	static $String* LEG_LINE_STYLE_STRING;
	static $String* HORIZ_STYLE_STRING;
	static $String* NO_STYLE_STRING;
	static const int32_t LEG_LINE_STYLE = 2;
	static const int32_t HORIZ_LINE_STYLE = 1;
	static const int32_t NO_LINE_STYLE = 0;
	int32_t lineStyle = 0;
	::java::beans::PropertyChangeListener* lineStyleListener = nullptr;
	::javax::swing::tree::TreePath* fTrackingPath = nullptr;
	bool fIsPressed = false;
	bool fIsInBounds = false;
	int32_t fAnimationFrame = 0;
	::com::apple::laf::AquaTreeUI$TreeArrowMouseInputHandler* fMouseHandler = nullptr;
	::com::apple::laf::AquaPainter* painter = nullptr;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("HORIZ_LINE_STYLE")
#pragma pop_macro("HORIZ_STYLE_STRING")
#pragma pop_macro("LEG_LINE_STYLE")
#pragma pop_macro("LEG_LINE_STYLE_STRING")
#pragma pop_macro("LINE_STYLE")
#pragma pop_macro("NO_LINE_STYLE")
#pragma pop_macro("NO_STYLE_STRING")

#endif // _com_apple_laf_AquaTreeUI_h_