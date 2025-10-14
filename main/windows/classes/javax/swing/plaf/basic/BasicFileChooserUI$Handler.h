#ifndef _javax_swing_plaf_basic_BasicFileChooserUI$Handler_h_
#define _javax_swing_plaf_basic_BasicFileChooserUI$Handler_h_
//$ class javax.swing.plaf.basic.BasicFileChooserUI$Handler
//$ extends java.awt.event.MouseListener
//$ implements javax.swing.event.ListSelectionListener

#include <java/awt/event/MouseListener.h>
#include <javax/swing/event/ListSelectionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JList;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListSelectionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicFileChooserUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicFileChooserUI$Handler : public ::java::awt::event::MouseListener, public ::javax::swing::event::ListSelectionListener {
	$class(BasicFileChooserUI$Handler, $NO_CLASS_INIT, ::java::awt::event::MouseListener, ::javax::swing::event::ListSelectionListener)
public:
	BasicFileChooserUI$Handler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicFileChooserUI* this$0);
	void init$(::javax::swing::plaf::basic::BasicFileChooserUI* this$0, ::javax::swing::JList* list);
	virtual void mouseClicked(::java::awt::event::MouseEvent* evt) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* evt) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* evt) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* evt) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* evt) override;
	virtual $String* toString() override;
	virtual void valueChanged(::javax::swing::event::ListSelectionEvent* evt) override;
	::javax::swing::plaf::basic::BasicFileChooserUI* this$0 = nullptr;
	::javax::swing::JList* list = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicFileChooserUI$Handler_h_