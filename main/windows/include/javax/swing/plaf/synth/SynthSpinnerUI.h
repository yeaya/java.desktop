#ifndef _javax_swing_plaf_synth_SynthSpinnerUI_h_
#define _javax_swing_plaf_synth_SynthSpinnerUI_h_
//$ class javax.swing.plaf.synth.SynthSpinnerUI
//$ extends javax.swing.plaf.basic.BasicSpinnerUI
//$ implements java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/basic/BasicSpinnerUI.h>
#include <javax/swing/plaf/synth/SynthUI.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class LayoutManager;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
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
			namespace synth {
				class SynthContext;
				class SynthSpinnerUI$EditorFocusHandler;
				class SynthStyle;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import SynthSpinnerUI : public ::javax::swing::plaf::basic::BasicSpinnerUI, public ::java::beans::PropertyChangeListener, public ::javax::swing::plaf::synth::SynthUI {
	$class(SynthSpinnerUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSpinnerUI, ::java::beans::PropertyChangeListener, ::javax::swing::plaf::synth::SynthUI)
public:
	SynthSpinnerUI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::JSpinner* access$000(::javax::swing::plaf::synth::SynthSpinnerUI* x0);
	static ::javax::swing::JSpinner* access$100(::javax::swing::plaf::synth::SynthSpinnerUI* x0);
	virtual ::javax::swing::JComponent* createEditor() override;
	virtual ::java::awt::LayoutManager* createLayout() override;
	virtual ::java::awt::Component* createNextButton() override;
	virtual ::java::awt::Component* createPreviousButton() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	virtual void installDefaults() override;
	virtual void installListeners() override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void replaceEditor(::javax::swing::JComponent* oldEditor, ::javax::swing::JComponent* newEditor) override;
	virtual $String* toString() override;
	virtual void uninstallDefaults() override;
	virtual void uninstallListeners() override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void updateEditorAlignment(::javax::swing::JComponent* editor);
	void updateStyle(::javax::swing::JSpinner* c);
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
	::javax::swing::plaf::synth::SynthSpinnerUI$EditorFocusHandler* editorFocusHandler = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthSpinnerUI_h_