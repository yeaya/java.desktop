#ifndef _javax_swing_RowFilter$Entry_h_
#define _javax_swing_RowFilter$Entry_h_
//$ class javax.swing.RowFilter$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {

class $export RowFilter$Entry : public ::java::lang::Object {
	$class(RowFilter$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RowFilter$Entry();
	void init$();
	virtual $Object* getIdentifier() {return nullptr;}
	virtual $Object* getModel() {return nullptr;}
	virtual $String* getStringValue(int32_t index);
	virtual $Object* getValue(int32_t index) {return nullptr;}
	virtual int32_t getValueCount() {return 0;}
};

	} // swing
} // javax

#endif // _javax_swing_RowFilter$Entry_h_