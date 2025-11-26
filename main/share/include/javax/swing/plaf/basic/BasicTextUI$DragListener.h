#ifndef _javax_swing_plaf_basic_BasicTextUI$DragListener_h_
#define _javax_swing_plaf_basic_BasicTextUI$DragListener_h_
//$ class javax.swing.plaf.basic.BasicTextUI$DragListener
//$ extends javax.swing.event.MouseInputAdapter
//$ implements javax.swing.plaf.basic.DragRecognitionSupport$BeforeDrag

#include <javax/swing/event/MouseInputAdapter.h>
#include <javax/swing/plaf/basic/DragRecognitionSupport$BeforeDrag.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicTextUI$DragListener : public ::javax::swing::event::MouseInputAdapter, public ::javax::swing::plaf::basic::DragRecognitionSupport$BeforeDrag {
	$class(BasicTextUI$DragListener, $NO_CLASS_INIT, ::javax::swing::event::MouseInputAdapter, ::javax::swing::plaf::basic::DragRecognitionSupport$BeforeDrag)
public:
	BasicTextUI$DragListener();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void dragStarting(::java::awt::event::MouseEvent* me) override;
	virtual bool isDragPossible(::java::awt::event::MouseEvent* e);
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual $String* toString() override;
	bool dragStarted = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTextUI$DragListener_h_