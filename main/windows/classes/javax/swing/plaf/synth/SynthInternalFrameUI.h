#ifndef _javax_swing_plaf_synth_SynthInternalFrameUI_h_
#define _javax_swing_plaf_synth_SynthInternalFrameUI_h_
//$ class javax.swing.plaf.synth.SynthInternalFrameUI
//$ extends javax.swing.plaf.basic.BasicInternalFrameUI
//$ implements javax.swing.plaf.synth.SynthUI,java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <javax/swing/plaf/synth/SynthUI.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ComponentListener;
		}
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
		class JInternalFrame;
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

class $export SynthInternalFrameUI : public ::javax::swing::plaf::basic::BasicInternalFrameUI, public ::javax::swing::plaf::synth::SynthUI, public ::java::beans::PropertyChangeListener {
	$class(SynthInternalFrameUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicInternalFrameUI, ::javax::swing::plaf::synth::SynthUI, ::java::beans::PropertyChangeListener)
public:
	SynthInternalFrameUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JInternalFrame* b);
	static ::javax::swing::JInternalFrame* access$000(::javax::swing::plaf::synth::SynthInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$100(::javax::swing::plaf::synth::SynthInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$200(::javax::swing::plaf::synth::SynthInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$300(::javax::swing::plaf::synth::SynthInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$400(::javax::swing::plaf::synth::SynthInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$502(::javax::swing::plaf::synth::SynthInternalFrameUI* x0, ::javax::swing::JInternalFrame* x1);
	static ::javax::swing::JInternalFrame* access$602(::javax::swing::plaf::synth::SynthInternalFrameUI* x0, ::javax::swing::JInternalFrame* x1);
	virtual ::java::awt::event::ComponentListener* createComponentListener() override;
	virtual ::javax::swing::JComponent* createNorthPane(::javax::swing::JInternalFrame* w) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
	int32_t getComponentState(::javax::swing::JComponent* c);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	virtual void installDefaults() override;
	virtual void installListeners() override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual $String* toString() override;
	virtual void uninstallComponents() override;
	virtual void uninstallDefaults() override;
	virtual void uninstallListeners() override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void updateStyle(::javax::swing::JComponent* c);
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthInternalFrameUI_h_