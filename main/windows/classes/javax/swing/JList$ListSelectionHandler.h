#ifndef _javax_swing_JList$ListSelectionHandler_h_
#define _javax_swing_JList$ListSelectionHandler_h_
//$ class javax.swing.JList$ListSelectionHandler
//$ extends javax.swing.event.ListSelectionListener
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/event/ListSelectionListener.h>

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

class JList$ListSelectionHandler : public ::javax::swing::event::ListSelectionListener, public ::java::io::Serializable {
	$class(JList$ListSelectionHandler, $NO_CLASS_INIT, ::javax::swing::event::ListSelectionListener, ::java::io::Serializable)
public:
	JList$ListSelectionHandler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JList* this$0);
	virtual $String* toString() override;
	virtual void valueChanged(::javax::swing::event::ListSelectionEvent* e) override;
	::javax::swing::JList* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JList$ListSelectionHandler_h_