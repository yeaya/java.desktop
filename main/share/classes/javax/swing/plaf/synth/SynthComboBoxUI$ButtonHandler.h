#ifndef _javax_swing_plaf_synth_SynthComboBoxUI$ButtonHandler_h_
#define _javax_swing_plaf_synth_SynthComboBoxUI$ButtonHandler_h_
//$ class javax.swing.plaf.synth.SynthComboBoxUI$ButtonHandler
//$ extends javax.swing.DefaultButtonModel
//$ implements java.awt.event.MouseListener,javax.swing.event.PopupMenuListener

#include <java/awt/event/MouseListener.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/event/PopupMenuListener.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class PopupMenuEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthComboBoxUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthComboBoxUI$ButtonHandler : public ::javax::swing::DefaultButtonModel, public ::java::awt::event::MouseListener, public ::javax::swing::event::PopupMenuListener {
	$class(SynthComboBoxUI$ButtonHandler, $NO_CLASS_INIT, ::javax::swing::DefaultButtonModel, ::java::awt::event::MouseListener, ::javax::swing::event::PopupMenuListener)
public:
	SynthComboBoxUI$ButtonHandler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::synth::SynthComboBoxUI* this$0);
	virtual bool isArmed() override;
	virtual bool isPressed() override;
	virtual bool isRollover() override;
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* mouseEvent) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* mouseEvent) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* mouseEvent) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* mouseEvent) override;
	virtual void popupMenuCanceled(::javax::swing::event::PopupMenuEvent* e) override;
	virtual void popupMenuWillBecomeInvisible(::javax::swing::event::PopupMenuEvent* e) override;
	virtual void popupMenuWillBecomeVisible(::javax::swing::event::PopupMenuEvent* e) override;
	virtual void setPressed(bool b) override;
	virtual void setRollover(bool b) override;
	virtual $String* toString() override;
	void updateOver(bool o);
	void updatePressed(bool p);
	::javax::swing::plaf::synth::SynthComboBoxUI* this$0 = nullptr;
	bool over = false;
	bool pressed = false;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthComboBoxUI$ButtonHandler_h_