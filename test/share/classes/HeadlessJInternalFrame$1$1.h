#ifndef _HeadlessJInternalFrame$1$1_h_
#define _HeadlessJInternalFrame$1$1_h_
//$ class HeadlessJInternalFrame$1$1
//$ extends javax.swing.plaf.basic.BasicInternalFrameTitlePane

#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>

class HeadlessJInternalFrame$1;
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class JInternalFrame;
	}
}

class HeadlessJInternalFrame$1$1 : public ::javax::swing::plaf::basic::BasicInternalFrameTitlePane {
	$class(HeadlessJInternalFrame$1$1, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicInternalFrameTitlePane)
public:
	HeadlessJInternalFrame$1$1();
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::contains;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::enable;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getBounds;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getSize;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getLocation;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::firePropertyChange;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::add;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getMousePosition;
	void init$(::HeadlessJInternalFrame$1* this$0, ::javax::swing::JInternalFrame* arg0);
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener() override;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::requestFocus;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::requestFocusInWindow;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::repaint;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::remove;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::list;
	::HeadlessJInternalFrame$1* this$0 = nullptr;
};

#endif // _HeadlessJInternalFrame$1$1_h_