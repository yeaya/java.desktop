#ifndef _bug6463712_h_
#define _bug6463712_h_
//$ class bug6463712
//$ extends javax.swing.event.ChangeListener

#include <java/lang/Array.h>
#include <javax/swing/event/ChangeListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

class $export bug6463712 : public ::javax::swing::event::ChangeListener {
	$class(bug6463712, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	bug6463712();
	void init$();
	static void main($StringArray* args);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
};

#endif // _bug6463712_h_