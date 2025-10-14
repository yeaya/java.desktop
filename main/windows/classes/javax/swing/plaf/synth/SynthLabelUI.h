#ifndef _javax_swing_plaf_synth_SynthLabelUI_h_
#define _javax_swing_plaf_synth_SynthLabelUI_h_
//$ class javax.swing.plaf.synth.SynthLabelUI
//$ extends javax.swing.plaf.basic.BasicLabelUI
//$ implements javax.swing.plaf.synth.SynthUI

#include <javax/swing/plaf/basic/BasicLabelUI.h>
#include <javax/swing/plaf/synth/SynthUI.h>

namespace java {
	namespace awt {
		class Dimension;
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
		class JLabel;
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
		namespace plaf {
			namespace synth {

class $export SynthLabelUI : public ::javax::swing::plaf::basic::BasicLabelUI, public ::javax::swing::plaf::synth::SynthUI {
	$class(SynthLabelUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicLabelUI, ::javax::swing::plaf::synth::SynthUI)
public:
	SynthLabelUI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	int32_t getComponentState(::javax::swing::JComponent* c);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void installDefaults(::javax::swing::JLabel* c) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual $String* toString() override;
	virtual void uninstallDefaults(::javax::swing::JLabel* c) override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void updateStyle(::javax::swing::JLabel* c);
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthLabelUI_h_