#ifndef _javax_swing_JProgressBar$ModelListener_h_
#define _javax_swing_JProgressBar$ModelListener_h_
//$ class javax.swing.JProgressBar$ModelListener
//$ extends javax.swing.event.ChangeListener
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/event/ChangeListener.h>

namespace javax {
	namespace swing {
		class JProgressBar;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

namespace javax {
	namespace swing {

class JProgressBar$ModelListener : public ::javax::swing::event::ChangeListener, public ::java::io::Serializable {
	$class(JProgressBar$ModelListener, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener, ::java::io::Serializable)
public:
	JProgressBar$ModelListener();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JProgressBar* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::JProgressBar* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JProgressBar$ModelListener_h_