#ifndef _javax_swing_JTable$Resizable2_h_
#define _javax_swing_JTable$Resizable2_h_
//$ interface javax.swing.JTable$Resizable2
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {

class JTable$Resizable2 : public ::java::lang::Object {
	$interface(JTable$Resizable2, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getElementCount() {return 0;}
	virtual int32_t getLowerBoundAt(int32_t i) {return 0;}
	virtual int32_t getUpperBoundAt(int32_t i) {return 0;}
	virtual void setSizeAt(int32_t newSize, int32_t i) {}
};

	} // swing
} // javax

#endif // _javax_swing_JTable$Resizable2_h_