#ifndef _javax_swing_JList$1_h_
#define _javax_swing_JList$1_h_
//$ class javax.swing.JList$1
//$ extends javax.swing.AbstractListModel

#include <java/lang/Array.h>
#include <javax/swing/AbstractListModel.h>

namespace javax {
	namespace swing {

class JList$1 : public ::javax::swing::AbstractListModel {
	$class(JList$1, $NO_CLASS_INIT, ::javax::swing::AbstractListModel)
public:
	JList$1();
	void init$($ObjectArray* val$listData);
	virtual $Object* getElementAt(int32_t i) override;
	virtual int32_t getSize() override;
	$ObjectArray* val$listData = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JList$1_h_