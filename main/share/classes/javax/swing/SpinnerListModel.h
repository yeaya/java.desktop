#ifndef _javax_swing_SpinnerListModel_h_
#define _javax_swing_SpinnerListModel_h_
//$ class javax.swing.SpinnerListModel
//$ extends javax.swing.AbstractSpinnerModel

#include <java/lang/Array.h>
#include <javax/swing/AbstractSpinnerModel.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace swing {

class $export SpinnerListModel : public ::javax::swing::AbstractSpinnerModel {
	$class(SpinnerListModel, $NO_CLASS_INIT, ::javax::swing::AbstractSpinnerModel)
public:
	SpinnerListModel();
	void init$(::java::util::List* values);
	void init$($ObjectArray* values);
	void init$();
	virtual $Object* findNextMatch($String* substring);
	virtual ::java::util::List* getList();
	virtual $Object* getNextValue() override;
	virtual $Object* getPreviousValue() override;
	virtual $Object* getValue() override;
	virtual void setList(::java::util::List* list);
	virtual void setValue(Object$* elt) override;
	::java::util::List* list = nullptr;
	int32_t index = 0;
};

	} // swing
} // javax

#endif // _javax_swing_SpinnerListModel_h_