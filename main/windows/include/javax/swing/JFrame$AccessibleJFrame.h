#ifndef _javax_swing_JFrame$AccessibleJFrame_h_
#define _javax_swing_JFrame$AccessibleJFrame_h_
//$ class javax.swing.JFrame$AccessibleJFrame
//$ extends java.awt.Frame$AccessibleAWTFrame

#include <java/awt/Frame$AccessibleAWTFrame.h>

namespace javax {
	namespace accessibility {
		class AccessibleStateSet;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

namespace javax {
	namespace swing {

class $import JFrame$AccessibleJFrame : public ::java::awt::Frame$AccessibleAWTFrame {
	$class(JFrame$AccessibleJFrame, $NO_CLASS_INIT, ::java::awt::Frame$AccessibleAWTFrame)
public:
	JFrame$AccessibleJFrame();
	void init$(::javax::swing::JFrame* this$0);
	virtual $String* getAccessibleName() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	::javax::swing::JFrame* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JFrame$AccessibleJFrame_h_