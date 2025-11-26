#ifndef _bug7072653$1_h_
#define _bug7072653$1_h_
//$ class bug7072653$1
//$ extends javax.swing.DefaultComboBoxModel

#include <javax/swing/DefaultComboBoxModel.h>

class bug7072653$1 : public ::javax::swing::DefaultComboBoxModel {
	$class(bug7072653$1, $NO_CLASS_INIT, ::javax::swing::DefaultComboBoxModel)
public:
	bug7072653$1();
	void init$();
	virtual $Object* getElementAt(int32_t index) override;
	virtual int32_t getSize() override;
};

#endif // _bug7072653$1_h_