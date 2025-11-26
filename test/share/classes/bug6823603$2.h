#ifndef _bug6823603$2_h_
#define _bug6823603$2_h_
//$ class bug6823603$2
//$ extends javax.swing.AbstractListModel

#include <javax/swing/AbstractListModel.h>

class bug6823603$2 : public ::javax::swing::AbstractListModel {
	$class(bug6823603$2, $NO_CLASS_INIT, ::javax::swing::AbstractListModel)
public:
	bug6823603$2();
	void init$();
	virtual $Object* getElementAt(int32_t index) override;
	virtual int32_t getSize() override;
};

#endif // _bug6823603$2_h_