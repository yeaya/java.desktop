#ifndef _javax_swing_plaf_synth_SynthEditorPaneUI_h_
#define _javax_swing_plaf_synth_SynthEditorPaneUI_h_
//$ class javax.swing.plaf.synth.SynthEditorPaneUI
//$ extends javax.swing.plaf.basic.BasicEditorPaneUI
//$ implements javax.swing.plaf.synth.SynthUI

#include <javax/swing/plaf/basic/BasicEditorPaneUI.h>
#include <javax/swing/plaf/synth/SynthUI.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
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
				class SynthStyle;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import SynthEditorPaneUI : public ::javax::swing::plaf::basic::BasicEditorPaneUI, public ::javax::swing::plaf::synth::SynthUI {
	$class(SynthEditorPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicEditorPaneUI, ::javax::swing::plaf::synth::SynthUI)
public:
	SynthEditorPaneUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	int32_t getComponentState(::javax::swing::JComponent* c);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	virtual void installDefaults() override;
	using ::javax::swing::plaf::basic::BasicEditorPaneUI::paint;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	virtual void paintBackground(::java::awt::Graphics* g) override;
	virtual void paintBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::javax::swing::JComponent* c);
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual $String* toString() override;
	virtual void uninstallDefaults() override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void updateStyle(::javax::swing::text::JTextComponent* comp, bool updateKBAction);
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
	::java::lang::Boolean* localTrue = nullptr;
	bool updateKBAction = false;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthEditorPaneUI_h_