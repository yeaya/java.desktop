#ifndef _HeadlessJInternalFrame$1_h_
#define _HeadlessJInternalFrame$1_h_
//$ class HeadlessJInternalFrame$1
//$ extends javax.swing.plaf.basic.BasicInternalFrameUI

#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>

namespace javax {
	namespace swing {
		class JComponent;
		class JInternalFrame;
	}
}

class HeadlessJInternalFrame$1 : public ::javax::swing::plaf::basic::BasicInternalFrameUI {
	$class(HeadlessJInternalFrame$1, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicInternalFrameUI)
public:
	HeadlessJInternalFrame$1();
	void init$(::javax::swing::JInternalFrame* arg0);
	virtual ::javax::swing::JComponent* createNorthPane(::javax::swing::JInternalFrame* w) override;
};

#endif // _HeadlessJInternalFrame$1_h_