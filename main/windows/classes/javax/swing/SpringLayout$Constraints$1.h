#ifndef _javax_swing_SpringLayout$Constraints$1_h_
#define _javax_swing_SpringLayout$Constraints$1_h_
//$ class javax.swing.SpringLayout$Constraints$1
//$ extends javax.swing.Spring$SpringMap

#include <javax/swing/Spring$SpringMap.h>

namespace javax {
	namespace swing {
		class Spring;
		class SpringLayout$Constraints;
	}
}

namespace javax {
	namespace swing {

class SpringLayout$Constraints$1 : public ::javax::swing::Spring$SpringMap {
	$class(SpringLayout$Constraints$1, $NO_CLASS_INIT, ::javax::swing::Spring$SpringMap)
public:
	SpringLayout$Constraints$1();
	void init$(::javax::swing::SpringLayout$Constraints* this$0, ::javax::swing::Spring* s);
	virtual int32_t inv(int32_t i) override;
	virtual int32_t map(int32_t i) override;
	::javax::swing::SpringLayout$Constraints* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_SpringLayout$Constraints$1_h_