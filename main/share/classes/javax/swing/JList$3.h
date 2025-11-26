#ifndef _javax_swing_JList$3_h_
#define _javax_swing_JList$3_h_
//$ class javax.swing.JList$3
//$ extends javax.swing.AbstractListModel

#include <javax/swing/AbstractListModel.h>

namespace javax {
	namespace swing {

class JList$3 : public ::javax::swing::AbstractListModel {
	$class(JList$3, $NO_CLASS_INIT, ::javax::swing::AbstractListModel)
public:
	JList$3();
	void init$();
	virtual $Object* getElementAt(int32_t i) override;
	virtual int32_t getSize() override;
};

	} // swing
} // javax

#endif // _javax_swing_JList$3_h_