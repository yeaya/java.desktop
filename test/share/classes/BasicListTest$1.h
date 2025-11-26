#ifndef _BasicListTest$1_h_
#define _BasicListTest$1_h_
//$ class BasicListTest$1
//$ extends javax.swing.AbstractListModel

#include <java/lang/Array.h>
#include <javax/swing/AbstractListModel.h>

class BasicListTest$1 : public ::javax::swing::AbstractListModel {
	$class(BasicListTest$1, $NO_CLASS_INIT, ::javax::swing::AbstractListModel)
public:
	BasicListTest$1();
	void init$();
	virtual $Object* getElementAt(int32_t i) override;
	virtual int32_t getSize() override;
	$StringArray* strings = nullptr;
};

#endif // _BasicListTest$1_h_