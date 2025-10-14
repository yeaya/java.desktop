#ifndef _javax_swing_plaf_synth_SynthComboBoxUI_h_
#define _javax_swing_plaf_synth_SynthComboBoxUI_h_
//$ class javax.swing.plaf.synth.SynthComboBoxUI
//$ extends javax.swing.plaf.basic.BasicComboBoxUI
//$ implements java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <javax/swing/plaf/synth/SynthUI.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
		class Insets;
		class Rectangle;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class ComboBoxEditor;
		class JButton;
		class JComboBox;
		class JComponent;
		class ListCellRenderer;
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
				class ComboPopup;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthComboBoxUI$ButtonHandler;
				class SynthComboBoxUI$EditorFocusHandler;
				class SynthContext;
				class SynthStyle;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import SynthComboBoxUI : public ::javax::swing::plaf::basic::BasicComboBoxUI, public ::java::beans::PropertyChangeListener, public ::javax::swing::plaf::synth::SynthUI {
	$class(SynthComboBoxUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboBoxUI, ::java::beans::PropertyChangeListener, ::javax::swing::plaf::synth::SynthUI)
public:
	SynthComboBoxUI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::JComboBox* access$000(::javax::swing::plaf::synth::SynthComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$100(::javax::swing::plaf::synth::SynthComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$200(::javax::swing::plaf::synth::SynthComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$300(::javax::swing::plaf::synth::SynthComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$400(::javax::swing::plaf::synth::SynthComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$500(::javax::swing::plaf::synth::SynthComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$600(::javax::swing::plaf::synth::SynthComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$700(::javax::swing::plaf::synth::SynthComboBoxUI* x0);
	virtual ::javax::swing::JButton* createArrowButton() override;
	virtual ::javax::swing::ComboBoxEditor* createEditor() override;
	virtual ::javax::swing::plaf::basic::ComboPopup* createPopup() override;
	virtual ::javax::swing::ListCellRenderer* createRenderer() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	int32_t getComponentState(::javax::swing::JComponent* c);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	virtual ::java::awt::Dimension* getDefaultSize() override;
	virtual void installDefaults() override;
	virtual void installListeners() override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintCurrentValue(::java::awt::Graphics* g, ::java::awt::Rectangle* bounds, bool hasFocus) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	bool shouldActLikeButton();
	virtual $String* toString() override;
	virtual void uninstallDefaults() override;
	virtual void uninstallListeners() override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void updateStyle(::javax::swing::JComboBox* comboBox);
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
	bool useListColors = false;
	::java::awt::Insets* popupInsets = nullptr;
	bool buttonWhenNotEditable = false;
	bool pressedWhenPopupVisible = false;
	::javax::swing::plaf::synth::SynthComboBoxUI$ButtonHandler* buttonHandler = nullptr;
	::javax::swing::plaf::synth::SynthComboBoxUI$EditorFocusHandler* editorFocusHandler = nullptr;
	bool forceOpaque = false;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthComboBoxUI_h_