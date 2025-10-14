#ifndef _javax_swing_plaf_synth_SynthScrollPaneUI_h_
#define _javax_swing_plaf_synth_SynthScrollPaneUI_h_
//$ class javax.swing.plaf.synth.SynthScrollPaneUI
//$ extends javax.swing.plaf.basic.BasicScrollPaneUI
//$ implements java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
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
		class JScrollPane;
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
				class SynthScrollPaneUI$ViewportViewFocusHandler;
				class SynthStyle;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $export SynthScrollPaneUI : public ::javax::swing::plaf::basic::BasicScrollPaneUI, public ::java::beans::PropertyChangeListener, public ::javax::swing::plaf::synth::SynthUI {
	$class(SynthScrollPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicScrollPaneUI, ::java::beans::PropertyChangeListener, ::javax::swing::plaf::synth::SynthUI)
public:
	SynthScrollPaneUI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::JScrollPane* access$000(::javax::swing::plaf::synth::SynthScrollPaneUI* x0);
	static ::javax::swing::JScrollPane* access$100(::javax::swing::plaf::synth::SynthScrollPaneUI* x0);
	static ::javax::swing::JScrollPane* access$200(::javax::swing::plaf::synth::SynthScrollPaneUI* x0);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	int32_t getComponentState(::javax::swing::JComponent* c);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	virtual void installDefaults(::javax::swing::JScrollPane* scrollpane) override;
	virtual void installListeners(::javax::swing::JScrollPane* c) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual $String* toString() override;
	virtual void uninstallDefaults(::javax::swing::JScrollPane* c) override;
	virtual void uninstallListeners(::javax::swing::JComponent* c) override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void updateStyle(::javax::swing::JScrollPane* c);
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
	bool viewportViewHasFocus = false;
	::javax::swing::plaf::synth::SynthScrollPaneUI$ViewportViewFocusHandler* viewportViewFocusHandler = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthScrollPaneUI_h_