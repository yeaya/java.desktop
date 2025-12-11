#ifndef _com_apple_laf_AquaSpinnerUI_h_
#define _com_apple_laf_AquaSpinnerUI_h_
//$ class com.apple.laf.AquaSpinnerUI
//$ extends javax.swing.plaf.SpinnerUI

#include <javax/swing/plaf/SpinnerUI.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaSpinnerUI$ArrowButtonHandler;
			class AquaSpinnerUI$SpinPainter;
			class AquaSpinnerUI$TransparentButton;
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Component$BaselineResizeBehavior;
		class Container;
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
		class ActionMap;
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

namespace com {
	namespace apple {
		namespace laf {

class AquaSpinnerUI : public ::javax::swing::plaf::SpinnerUI {
	$class(AquaSpinnerUI, 0, ::javax::swing::plaf::SpinnerUI)
public:
	AquaSpinnerUI();
	void init$();
	::javax::swing::ActionMap* createActionMap();
	virtual ::javax::swing::JComponent* createEditor();
	virtual ::java::awt::LayoutManager* createLayout();
	virtual ::com::apple::laf::AquaSpinnerUI$TransparentButton* createNextButton();
	virtual ::com::apple::laf::AquaSpinnerUI$TransparentButton* createPreviousButton();
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void fixupEditor(::javax::swing::JComponent* editor);
	::javax::swing::ActionMap* getActionMap();
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior(::javax::swing::JComponent* c) override;
	::javax::swing::InputMap* getInputMap(int32_t condition);
	static ::com::apple::laf::AquaSpinnerUI$ArrowButtonHandler* getNextButtonHandler();
	static ::com::apple::laf::AquaSpinnerUI$ArrowButtonHandler* getPreviousButtonHandler();
	static ::java::beans::PropertyChangeListener* getPropertyChangeListener();
	virtual void installDefaults();
	void installKeyboardActions();
	virtual void installListeners();
	virtual void installUI(::javax::swing::JComponent* c) override;
	void maybeAdd(::java::awt::Component* c, $String* s);
	virtual void replaceEditor(::javax::swing::JComponent* oldEditor, ::javax::swing::JComponent* newEditor);
	virtual void uninstallDefaults();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	virtual void updateEnabledState();
	void updateEnabledState(::java::awt::Container* c, bool enabled);
	virtual void updateToolTipTextForChildren(::javax::swing::JComponent* spinnerComponent);
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* propertyChangeListener;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* nextButtonHandler;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* previousButtonHandler;
	::javax::swing::JSpinner* spinner = nullptr;
	::com::apple::laf::AquaSpinnerUI$SpinPainter* spinPainter = nullptr;
	::com::apple::laf::AquaSpinnerUI$TransparentButton* next = nullptr;
	::com::apple::laf::AquaSpinnerUI$TransparentButton* prev = nullptr;
	bool wasOpaque = false;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaSpinnerUI_h_