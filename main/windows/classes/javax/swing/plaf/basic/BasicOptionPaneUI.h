#ifndef _javax_swing_plaf_basic_BasicOptionPaneUI_h_
#define _javax_swing_plaf_basic_BasicOptionPaneUI_h_
//$ class javax.swing.plaf.basic.BasicOptionPaneUI
//$ extends javax.swing.plaf.OptionPaneUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/OptionPaneUI.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
		class GridBagConstraints;
		class LayoutManager;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionListener;
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
		class Locale;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class InputMap;
		class JButton;
		class JComponent;
		class JLabel;
		class JOptionPane;
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
				class BasicOptionPaneUI$Handler;
				class LazyActionMap;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicOptionPaneUI : public ::javax::swing::plaf::OptionPaneUI {
	$class(BasicOptionPaneUI, 0, ::javax::swing::plaf::OptionPaneUI)
public:
	BasicOptionPaneUI();
	void init$();
	virtual void addButtonComponents(::java::awt::Container* container, $ObjectArray* buttons, int32_t initialIndex);
	virtual void addIcon(::java::awt::Container* top);
	virtual void addMessageComponents(::java::awt::Container* container, ::java::awt::GridBagConstraints* cons, Object$* msg, int32_t maxll, bool internallyCreated);
	virtual void burstStringInto(::java::awt::Container* c, $String* d, int32_t maxll);
	void configureButton(::javax::swing::JButton* button);
	void configureMessageLabel(::javax::swing::JLabel* label);
	virtual bool containsCustomComponents(::javax::swing::JOptionPane* op) override;
	virtual ::java::awt::event::ActionListener* createButtonActionListener(int32_t buttonIndex);
	virtual ::java::awt::Container* createButtonArea();
	virtual ::java::awt::LayoutManager* createLayoutManager();
	virtual ::java::awt::Container* createMessageArea();
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener();
	virtual ::java::awt::Container* createSeparator();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual $ObjectArray* getButtons();
	::javax::swing::plaf::basic::BasicOptionPaneUI$Handler* getHandler();
	virtual ::javax::swing::Icon* getIcon();
	virtual ::javax::swing::Icon* getIconForType(int32_t messageType);
	virtual int32_t getInitialValueIndex();
	virtual ::javax::swing::InputMap* getInputMap(int32_t condition);
	virtual int32_t getMaxCharactersPerLineCount();
	virtual $Object* getMessage();
	virtual ::java::awt::Dimension* getMinimumOptionPaneSize();
	int32_t getMnemonic($String* key, ::java::util::Locale* l);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual bool getSizeButtonsToSameWidth();
	virtual void installComponents();
	virtual void installDefaults();
	virtual void installKeyboardActions();
	virtual void installListeners();
	virtual void installUI(::javax::swing::JComponent* c) override;
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	virtual void resetInputValue();
	virtual void selectInitialValue(::javax::swing::JOptionPane* op) override;
	virtual void uninstallComponents();
	virtual void uninstallDefaults();
	virtual void uninstallKeyboardActions();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	static const int32_t MinimumWidth = 262;
	static const int32_t MinimumHeight = 90;
	static $String* newline;
	::javax::swing::JOptionPane* optionPane = nullptr;
	::java::awt::Dimension* minimumSize = nullptr;
	::javax::swing::JComponent* inputComponent = nullptr;
	::java::awt::Component* initialFocusComponent = nullptr;
	bool hasCustomComponents = false;
	::java::beans::PropertyChangeListener* propertyChangeListener = nullptr;
	::javax::swing::plaf::basic::BasicOptionPaneUI$Handler* handler = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicOptionPaneUI_h_