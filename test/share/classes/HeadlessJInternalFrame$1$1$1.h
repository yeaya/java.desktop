#ifndef _HeadlessJInternalFrame$1$1$1_h_
#define _HeadlessJInternalFrame$1$1$1_h_
//$ class HeadlessJInternalFrame$1$1$1
//$ extends javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler

#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$PropertyChangeHandler.h>

class HeadlessJInternalFrame$1$1;
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

class HeadlessJInternalFrame$1$1$1 : public ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$PropertyChangeHandler {
	$class(HeadlessJInternalFrame$1$1$1, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$PropertyChangeHandler)
public:
	HeadlessJInternalFrame$1$1$1();
	void init$(::HeadlessJInternalFrame$1$1* this$1);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	::HeadlessJInternalFrame$1$1* this$1 = nullptr;
	int32_t countUI = 0;
};

#endif // _HeadlessJInternalFrame$1$1$1_h_