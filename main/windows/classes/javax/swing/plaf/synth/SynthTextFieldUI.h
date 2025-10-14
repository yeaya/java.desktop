#ifndef _javax_swing_plaf_synth_SynthTextFieldUI_h_
#define _javax_swing_plaf_synth_SynthTextFieldUI_h_
//$ class javax.swing.plaf.synth.SynthTextFieldUI
//$ extends javax.swing.plaf.basic.BasicTextFieldUI
//$ implements javax.swing.plaf.synth.SynthUI

#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
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
				class SynthTextFieldUI$Handler;
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

class $export SynthTextFieldUI : public ::javax::swing::plaf::basic::BasicTextFieldUI, public ::javax::swing::plaf::synth::SynthUI {
	$class(SynthTextFieldUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTextFieldUI, ::javax::swing::plaf::synth::SynthUI)
public:
	SynthTextFieldUI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::plaf::basic::BasicTextFieldUI::create;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::text::JTextComponent* access$000(::javax::swing::plaf::synth::SynthTextFieldUI* x0);
	static ::javax::swing::text::JTextComponent* access$100(::javax::swing::plaf::synth::SynthTextFieldUI* x0);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	virtual void installDefaults() override;
	using ::javax::swing::plaf::basic::BasicTextFieldUI::paint;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	virtual void paintBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::javax::swing::JComponent* c);
	virtual void paintBackground(::java::awt::Graphics* g) override;
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual $String* toString() override;
	virtual void uninstallDefaults() override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void updateStyle(::javax::swing::text::JTextComponent* comp, bool updateKBAction);
	static void updateStyle(::javax::swing::text::JTextComponent* comp, ::javax::swing::plaf::synth::SynthContext* context, $String* prefix);
	::javax::swing::plaf::synth::SynthTextFieldUI$Handler* handler = nullptr;
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
	bool updateKBAction = false;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthTextFieldUI_h_