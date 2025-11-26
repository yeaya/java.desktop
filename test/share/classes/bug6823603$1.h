#ifndef _bug6823603$1_h_
#define _bug6823603$1_h_
//$ class bug6823603$1
//$ extends javax.swing.AbstractListModel

#include <javax/swing/AbstractListModel.h>

class bug6823603$1 : public ::javax::swing::AbstractListModel {
	$class(bug6823603$1, $NO_CLASS_INIT, ::javax::swing::AbstractListModel)
public:
	bug6823603$1();
	void init$();
	virtual $Object* getElementAt(int32_t index) override;
	virtual int32_t getSize() override;
};

#endif // _bug6823603$1_h_