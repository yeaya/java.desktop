#ifndef _javax_swing_plaf_basic_BasicInternalFrameTitlePane_h_
#define _javax_swing_plaf_basic_BasicInternalFrameTitlePane_h_
//$ class javax.swing.plaf.basic.BasicInternalFrameTitlePane
//$ extends javax.swing.JComponent

#include <javax/swing/JComponent.h>

#pragma push_macro("CLOSE_CMD")
#undef CLOSE_CMD
#pragma push_macro("ICONIFY_CMD")
#undef ICONIFY_CMD
#pragma push_macro("MAXIMIZE_CMD")
#undef MAXIMIZE_CMD
#pragma push_macro("MOVE_CMD")
#undef MOVE_CMD
#pragma push_macro("RESTORE_CMD")
#undef RESTORE_CMD
#pragma push_macro("SIZE_CMD")
#undef SIZE_CMD

namespace java {
	namespace awt {
		class Color;
		class FontMetrics;
		class Graphics;
		class LayoutManager;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class ActionMap;
		class Icon;
		class JButton;
		class JInternalFrame;
		class JMenu;
		class JMenuBar;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicInternalFrameTitlePane$Handler;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicInternalFrameTitlePane : public ::javax::swing::JComponent {
	$class(BasicInternalFrameTitlePane, 0, ::javax::swing::JComponent)
public:
	BasicInternalFrameTitlePane();
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	using ::javax::swing::JComponent::list;
	void init$(::javax::swing::JInternalFrame* f);
	virtual void addSubComponents();
	virtual void addSystemMenuItems(::javax::swing::JMenu* systemMenu);
	virtual void assembleSystemMenu();
	virtual ::javax::swing::ActionMap* createActionMap();
	virtual void createActions();
	virtual void createButtons();
	virtual ::java::awt::LayoutManager* createLayout();
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener();
	virtual ::javax::swing::JMenu* createSystemMenu();
	virtual ::javax::swing::JMenuBar* createSystemMenuBar();
	virtual void enableActions();
	static int32_t getButtonMnemonic($String* button);
	::javax::swing::plaf::basic::BasicInternalFrameTitlePane$Handler* getHandler();
	virtual $String* getTitle($String* text, ::java::awt::FontMetrics* fm, int32_t availTextWidth);
	virtual void installDefaults();
	virtual void installListeners();
	virtual void installTitlePane();
	virtual void paintComponent(::java::awt::Graphics* g) override;
	virtual void paintTitleBackground(::java::awt::Graphics* g);
	virtual void postClosingEvent(::javax::swing::JInternalFrame* frame);
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	virtual void setButtonIcons();
	virtual void showSystemMenu();
	virtual void uninstallDefaults();
	virtual void uninstallListeners();
	void updateProperties();
	::javax::swing::JMenuBar* menuBar = nullptr;
	::javax::swing::JButton* iconButton = nullptr;
	::javax::swing::JButton* maxButton = nullptr;
	::javax::swing::JButton* closeButton = nullptr;
	::javax::swing::JMenu* windowMenu = nullptr;
	::javax::swing::JInternalFrame* frame = nullptr;
	::java::awt::Color* selectedTitleColor = nullptr;
	::java::awt::Color* selectedTextColor = nullptr;
	::java::awt::Color* notSelectedTitleColor = nullptr;
	::java::awt::Color* notSelectedTextColor = nullptr;
	::javax::swing::Icon* maxIcon = nullptr;
	::javax::swing::Icon* minIcon = nullptr;
	::javax::swing::Icon* iconIcon = nullptr;
	::javax::swing::Icon* closeIcon = nullptr;
	::java::beans::PropertyChangeListener* propertyChangeListener = nullptr;
	::javax::swing::Action* closeAction = nullptr;
	::javax::swing::Action* maximizeAction = nullptr;
	::javax::swing::Action* iconifyAction = nullptr;
	::javax::swing::Action* restoreAction = nullptr;
	::javax::swing::Action* moveAction = nullptr;
	::javax::swing::Action* sizeAction = nullptr;
	static $String* CLOSE_CMD;
	static $String* ICONIFY_CMD;
	static $String* RESTORE_CMD;
	static $String* MAXIMIZE_CMD;
	static $String* MOVE_CMD;
	static $String* SIZE_CMD;
	$String* closeButtonToolTip = nullptr;
	$String* iconButtonToolTip = nullptr;
	$String* restoreButtonToolTip = nullptr;
	$String* maxButtonToolTip = nullptr;
	::javax::swing::plaf::basic::BasicInternalFrameTitlePane$Handler* handler = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("CLOSE_CMD")
#pragma pop_macro("ICONIFY_CMD")
#pragma pop_macro("MAXIMIZE_CMD")
#pragma pop_macro("MOVE_CMD")
#pragma pop_macro("RESTORE_CMD")
#pragma pop_macro("SIZE_CMD")

#endif // _javax_swing_plaf_basic_BasicInternalFrameTitlePane_h_