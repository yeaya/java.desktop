#ifndef _javax_swing_JComponent$IntVector_h_
#define _javax_swing_JComponent$IntVector_h_
//$ class javax.swing.JComponent$IntVector
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {

class $export JComponent$IntVector : public ::java::lang::Object {
	$class(JComponent$IntVector, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JComponent$IntVector();
	void init$();
	void addElement(int32_t value);
	int32_t elementAt(int32_t index);
	void setElementAt(int32_t value, int32_t index);
	int32_t size();
	$ints* array = nullptr;
	int32_t count = 0;
	int32_t capacity = 0;
};

	} // swing
} // javax

#endif // _javax_swing_JComponent$IntVector_h_