#ifndef _javax_swing_plaf_synth_SynthDesktopPaneUI$TaskBar_h_
#define _javax_swing_plaf_synth_SynthDesktopPaneUI$TaskBar_h_
//$ class javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar
//$ extends javax.swing.JPanel
//$ implements java.awt.event.ComponentListener,java.awt.event.ContainerListener

#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/ContainerListener.h>
#include <javax/swing/JPanel.h>

namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
			class ContainerEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $export SynthDesktopPaneUI$TaskBar : public ::javax::swing::JPanel, public ::java::awt::event::ComponentListener, public ::java::awt::event::ContainerListener {
	$class(SynthDesktopPaneUI$TaskBar, $NO_CLASS_INIT, ::javax::swing::JPanel, ::java::awt::event::ComponentListener, ::java::awt::event::ContainerListener)
public:
	SynthDesktopPaneUI$TaskBar();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void adjustSize();
	virtual void componentAdded(::java::awt::event::ContainerEvent* e) override;
	virtual void componentHidden(::java::awt::event::ComponentEvent* e) override;
	virtual void componentMoved(::java::awt::event::ComponentEvent* e) override;
	virtual void componentRemoved(::java::awt::event::ContainerEvent* e) override;
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	virtual void componentShown(::java::awt::event::ComponentEvent* e) override;
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	using ::javax::swing::JPanel::list;
	virtual $String* toString() override;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthDesktopPaneUI$TaskBar_h_