#ifndef _javax_swing_JTable$Resizable3_h_
#define _javax_swing_JTable$Resizable3_h_
//$ interface javax.swing.JTable$Resizable3
//$ extends javax.swing.JTable$Resizable2

#include <javax/swing/JTable$Resizable2.h>

namespace javax {
	namespace swing {

class JTable$Resizable3 : public ::javax::swing::JTable$Resizable2 {
	$interface(JTable$Resizable3, $NO_CLASS_INIT, ::javax::swing::JTable$Resizable2)
public:
	virtual int32_t getMidPointAt(int32_t i) {return 0;}
};

	} // swing
} // javax

#endif // _javax_swing_JTable$Resizable3_h_