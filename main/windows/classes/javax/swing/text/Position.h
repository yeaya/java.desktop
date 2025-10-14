#ifndef _javax_swing_text_Position_h_
#define _javax_swing_text_Position_h_
//$ interface javax.swing.text.Position
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {

class $export Position : public ::java::lang::Object {
	$interface(Position, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getOffset() {return 0;}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_Position_h_