#ifndef _javax_swing_JTable$5_h_
#define _javax_swing_JTable$5_h_
//$ class javax.swing.JTable$5
//$ extends javax.swing.JTable$Resizable2

#include <javax/swing/JTable$Resizable2.h>

namespace javax {
	namespace swing {
		class JTable;
		class JTable$Resizable3;
	}
}

namespace javax {
	namespace swing {

class JTable$5 : public ::javax::swing::JTable$Resizable2 {
	$class(JTable$5, $NO_CLASS_INIT, ::javax::swing::JTable$Resizable2)
public:
	JTable$5();
	void init$(::javax::swing::JTable* this$0, ::javax::swing::JTable$Resizable3* val$r);
	virtual int32_t getElementCount() override;
	virtual int32_t getLowerBoundAt(int32_t i) override;
	virtual int32_t getUpperBoundAt(int32_t i) override;
	virtual void setSizeAt(int32_t newSize, int32_t i) override;
	::javax::swing::JTable* this$0 = nullptr;
	::javax::swing::JTable$Resizable3* val$r = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTable$5_h_