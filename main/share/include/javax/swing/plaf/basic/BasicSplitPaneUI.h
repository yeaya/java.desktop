#ifndef _javax_swing_plaf_basic_BasicSplitPaneUI_h_
#define _javax_swing_plaf_basic_BasicSplitPaneUI_h_
//$ class javax.swing.plaf.basic.BasicSplitPaneUI
//$ extends javax.swing.plaf.SplitPaneUI

#include <javax/swing/plaf/SplitPaneUI.h>

#pragma push_macro("KEYBOARD_DIVIDER_MOVE_OFFSET")
#undef KEYBOARD_DIVIDER_MOVE_OFFSET
#pragma push_macro("NON_CONTINUOUS_DIVIDER")
#undef NON_CONTINUOUS_DIVIDER

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Dimension;
		class Graphics;
		class Insets;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionListener;
			class FocusListener;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace javax {
	namespace swing {
		class InputMap;
		class JComponent;
		class JSplitPane;
		class KeyStroke;
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
				class BasicSplitPaneDivider;
				class BasicSplitPaneUI$BasicHorizontalLayoutManager;
				class BasicSplitPaneUI$Handler;
				class LazyActionMap;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicSplitPaneUI : public ::javax::swing::plaf::SplitPaneUI {
	$class(BasicSplitPaneUI, 0, ::javax::swing::plaf::SplitPaneUI)
public:
	BasicSplitPaneUI();
	void init$();
	void addHeavyweightDivider();
	virtual ::javax::swing::plaf::basic::BasicSplitPaneDivider* createDefaultDivider();
	virtual ::java::awt::Component* createDefaultNonContinuousLayoutDivider();
	virtual ::java::awt::event::FocusListener* createFocusListener();
	virtual ::java::awt::event::ActionListener* createKeyboardDownRightListener();
	virtual ::java::awt::event::ActionListener* createKeyboardEndListener();
	virtual ::java::awt::event::ActionListener* createKeyboardHomeListener();
	virtual ::java::awt::event::ActionListener* createKeyboardResizeToggleListener();
	virtual ::java::awt::event::ActionListener* createKeyboardUpLeftListener();
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual void dragDividerTo(int32_t location);
	virtual void finishDraggingTo(int32_t location);
	virtual void finishedPaintingChildren(::javax::swing::JSplitPane* sp, ::java::awt::Graphics* g) override;
	virtual ::javax::swing::plaf::basic::BasicSplitPaneDivider* getDivider();
	virtual int32_t getDividerBorderSize();
	virtual int32_t getDividerLocation(::javax::swing::JSplitPane* jc) override;
	::javax::swing::plaf::basic::BasicSplitPaneUI$Handler* getHandler();
	virtual ::javax::swing::InputMap* getInputMap(int32_t condition);
	virtual ::java::awt::Insets* getInsets(::javax::swing::JComponent* jc);
	bool getKeepHidden();
	virtual int32_t getKeyboardMoveIncrement();
	virtual int32_t getLastDragLocation();
	virtual int32_t getMaximumDividerLocation(::javax::swing::JSplitPane* jc) override;
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* jc) override;
	virtual int32_t getMinimumDividerLocation(::javax::swing::JSplitPane* jc) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* jc) override;
	virtual ::java::awt::Component* getNonContinuousLayoutDivider();
	virtual int32_t getOrientation();
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* jc) override;
	virtual ::javax::swing::JSplitPane* getSplitPane();
	virtual void installDefaults();
	virtual void installKeyboardActions();
	virtual void installListeners();
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual bool isContinuousLayout();
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* jc) override;
	virtual void resetLayoutManager();
	virtual void resetToPreferredSizes(::javax::swing::JSplitPane* jc) override;
	virtual void setContinuousLayout(bool b);
	virtual void setDividerLocation(::javax::swing::JSplitPane* jc, int32_t location) override;
	virtual void setKeepHidden(bool keepHidden);
	virtual void setLastDragLocation(int32_t l);
	virtual void setNonContinuousLayoutDivider(::java::awt::Component* newDivider);
	virtual void setNonContinuousLayoutDivider(::java::awt::Component* newDivider, bool rememberSizes);
	virtual void setOrientation(int32_t orientation);
	virtual void startDragging();
	virtual void uninstallDefaults();
	virtual void uninstallKeyboardActions();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	static $String* NON_CONTINUOUS_DIVIDER;
	static int32_t KEYBOARD_DIVIDER_MOVE_OFFSET;
	::javax::swing::JSplitPane* splitPane = nullptr;
	::javax::swing::plaf::basic::BasicSplitPaneUI$BasicHorizontalLayoutManager* layoutManager = nullptr;
	::javax::swing::plaf::basic::BasicSplitPaneDivider* divider = nullptr;
	::java::beans::PropertyChangeListener* propertyChangeListener = nullptr;
	::java::awt::event::FocusListener* focusListener = nullptr;
	::javax::swing::plaf::basic::BasicSplitPaneUI$Handler* handler = nullptr;
	::java::util::Set* managingFocusForwardTraversalKeys = nullptr;
	::java::util::Set* managingFocusBackwardTraversalKeys = nullptr;
	int32_t dividerSize = 0;
	::java::awt::Component* nonContinuousLayoutDivider = nullptr;
	bool draggingHW = false;
	int32_t beginDragDividerLocation = 0;
	::javax::swing::KeyStroke* upKey = nullptr;
	::javax::swing::KeyStroke* downKey = nullptr;
	::javax::swing::KeyStroke* leftKey = nullptr;
	::javax::swing::KeyStroke* rightKey = nullptr;
	::javax::swing::KeyStroke* homeKey = nullptr;
	::javax::swing::KeyStroke* endKey = nullptr;
	::javax::swing::KeyStroke* dividerResizeToggleKey = nullptr;
	::java::awt::event::ActionListener* keyboardUpLeftListener = nullptr;
	::java::awt::event::ActionListener* keyboardDownRightListener = nullptr;
	::java::awt::event::ActionListener* keyboardHomeListener = nullptr;
	::java::awt::event::ActionListener* keyboardEndListener = nullptr;
	::java::awt::event::ActionListener* keyboardResizeToggleListener = nullptr;
	int32_t orientation = 0;
	int32_t lastDragLocation = 0;
	bool continuousLayout = false;
	bool dividerKeyboardResize = false;
	bool dividerLocationIsSet = false;
	::java::awt::Color* dividerDraggingColor = nullptr;
	bool rememberPaneSizes = false;
	bool keepHidden = false;
	bool painted = false;
	bool ignoreDividerLocationChange = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("KEYBOARD_DIVIDER_MOVE_OFFSET")
#pragma pop_macro("NON_CONTINUOUS_DIVIDER")

#endif // _javax_swing_plaf_basic_BasicSplitPaneUI_h_