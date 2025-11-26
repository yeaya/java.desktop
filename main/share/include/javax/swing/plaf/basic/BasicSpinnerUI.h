#ifndef _javax_swing_plaf_basic_BasicSpinnerUI_h_
#define _javax_swing_plaf_basic_BasicSpinnerUI_h_
//$ class javax.swing.plaf.basic.BasicSpinnerUI
//$ extends javax.swing.plaf.SpinnerUI

#include <javax/swing/plaf/SpinnerUI.h>

namespace java {
	namespace awt {
		class Component;
		class Component$BaselineResizeBehavior;
		class Container;
		class Dimension;
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
		class InputMap;
		class JComponent;
		class JSpinner;
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
				class BasicSpinnerUI$ArrowButtonHandler;
				class BasicSpinnerUI$Handler;
				class LazyActionMap;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicSpinnerUI : public ::javax::swing::plaf::SpinnerUI {
	$class(BasicSpinnerUI, 0, ::javax::swing::plaf::SpinnerUI)
public:
	BasicSpinnerUI();
	void init$();
	::java::awt::Component* createArrowButton(int32_t direction);
	virtual ::javax::swing::JComponent* createEditor();
	virtual ::java::awt::LayoutManager* createLayout();
	virtual ::java::awt::Component* createNextButton();
	virtual ::java::awt::Component* createPreviousButton();
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior(::javax::swing::JComponent* c) override;
	::javax::swing::plaf::basic::BasicSpinnerUI$Handler* getHandler();
	::javax::swing::InputMap* getInputMap(int32_t condition);
	void installButtonListeners(::java::awt::Component* c, ::javax::swing::plaf::basic::BasicSpinnerUI$ArrowButtonHandler* handler);
	virtual void installDefaults();
	void installEditorBorderListener(::javax::swing::JComponent* editor);
	virtual void installKeyboardActions();
	virtual void installListeners();
	virtual void installNextButtonListeners(::java::awt::Component* c);
	virtual void installPreviousButtonListeners(::java::awt::Component* c);
	virtual void installUI(::javax::swing::JComponent* c) override;
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	void maybeAdd(::java::awt::Component* c, $String* s);
	void maybeRemoveEditorBorder(::javax::swing::JComponent* editor);
	void removeEditorBorderListener(::javax::swing::JComponent* editor);
	virtual void replaceEditor(::javax::swing::JComponent* oldEditor, ::javax::swing::JComponent* newEditor);
	virtual void uninstallDefaults();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	void updateEditorAlignment(::javax::swing::JComponent* editor);
	void updateEnabledState();
	void updateEnabledState(::java::awt::Container* c, bool enabled);
	::javax::swing::JSpinner* spinner = nullptr;
	::javax::swing::plaf::basic::BasicSpinnerUI$Handler* handler = nullptr;
	static ::javax::swing::plaf::basic::BasicSpinnerUI$ArrowButtonHandler* nextButtonHandler;
	static ::javax::swing::plaf::basic::BasicSpinnerUI$ArrowButtonHandler* previousButtonHandler;
	::java::beans::PropertyChangeListener* propertyChangeListener = nullptr;
	static ::java::awt::Dimension* zeroSize;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSpinnerUI_h_