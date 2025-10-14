#ifndef _javax_swing_SpinnerModel_h_
#define _javax_swing_SpinnerModel_h_
//$ interface javax.swing.SpinnerModel
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
		}
	}
}

namespace javax {
	namespace swing {

class $import SpinnerModel : public ::java::lang::Object {
	$interface(SpinnerModel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l) {}
	virtual $Object* getNextValue() {return nullptr;}
	virtual $Object* getPreviousValue() {return nullptr;}
	virtual $Object* getValue() {return nullptr;}
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l) {}
	virtual void setValue(Object$* value) {}
};

	} // swing
} // javax

#endif // _javax_swing_SpinnerModel_h_