#ifndef _javax_swing_DefaultRowSorter$ModelWrapper_h_
#define _javax_swing_DefaultRowSorter$ModelWrapper_h_
//$ class javax.swing.DefaultRowSorter$ModelWrapper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {

class $export DefaultRowSorter$ModelWrapper : public ::java::lang::Object {
	$class(DefaultRowSorter$ModelWrapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultRowSorter$ModelWrapper();
	void init$();
	virtual int32_t getColumnCount() {return 0;}
	virtual $Object* getIdentifier(int32_t row) {return nullptr;}
	virtual $Object* getModel() {return nullptr;}
	virtual int32_t getRowCount() {return 0;}
	virtual $String* getStringValueAt(int32_t row, int32_t column);
	virtual $Object* getValueAt(int32_t row, int32_t column) {return nullptr;}
};

	} // swing
} // javax

#endif // _javax_swing_DefaultRowSorter$ModelWrapper_h_