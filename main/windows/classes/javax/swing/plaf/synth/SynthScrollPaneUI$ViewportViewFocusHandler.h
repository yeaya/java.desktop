#ifndef _javax_swing_plaf_synth_SynthScrollPaneUI$ViewportViewFocusHandler_h_
#define _javax_swing_plaf_synth_SynthScrollPaneUI$ViewportViewFocusHandler_h_
//$ class javax.swing.plaf.synth.SynthScrollPaneUI$ViewportViewFocusHandler
//$ extends java.awt.event.ContainerListener
//$ implements java.awt.event.FocusListener

#include <java/awt/event/ContainerListener.h>
#include <java/awt/event/FocusListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ContainerEvent;
			class FocusEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthScrollPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthScrollPaneUI$ViewportViewFocusHandler : public ::java::awt::event::ContainerListener, public ::java::awt::event::FocusListener {
	$class(SynthScrollPaneUI$ViewportViewFocusHandler, $NO_CLASS_INIT, ::java::awt::event::ContainerListener, ::java::awt::event::FocusListener)
public:
	SynthScrollPaneUI$ViewportViewFocusHandler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::synth::SynthScrollPaneUI* this$0);
	virtual void componentAdded(::java::awt::event::ContainerEvent* e) override;
	virtual void componentRemoved(::java::awt::event::ContainerEvent* e) override;
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::plaf::synth::SynthScrollPaneUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthScrollPaneUI$ViewportViewFocusHandler_h_