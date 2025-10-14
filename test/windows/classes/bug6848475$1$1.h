#ifndef _bug6848475$1$1_h_
#define _bug6848475$1$1_h_
//$ class bug6848475$1$1
//$ extends javax.swing.DefaultBoundedRangeModel

#include <javax/swing/DefaultBoundedRangeModel.h>

class bug6848475$1;

class bug6848475$1$1 : public ::javax::swing::DefaultBoundedRangeModel {
	$class(bug6848475$1$1, $NO_CLASS_INIT, ::javax::swing::DefaultBoundedRangeModel)
public:
	bug6848475$1$1();
	void init$(::bug6848475$1* this$0);
	virtual void setValue(int32_t n) override;
	::bug6848475$1* this$0 = nullptr;
};

#endif // _bug6848475$1$1_h_