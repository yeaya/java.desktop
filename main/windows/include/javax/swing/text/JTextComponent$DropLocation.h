#ifndef _javax_swing_text_JTextComponent$DropLocation_h_
#define _javax_swing_text_JTextComponent$DropLocation_h_
//$ class javax.swing.text.JTextComponent$DropLocation
//$ extends javax.swing.TransferHandler$DropLocation

#include <javax/swing/TransferHandler$DropLocation.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Position$Bias;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import JTextComponent$DropLocation : public ::javax::swing::TransferHandler$DropLocation {
	$class(JTextComponent$DropLocation, $NO_CLASS_INIT, ::javax::swing::TransferHandler$DropLocation)
public:
	JTextComponent$DropLocation();
	void init$(::java::awt::Point* p, int32_t index, ::javax::swing::text::Position$Bias* bias);
	::javax::swing::text::Position$Bias* getBias();
	int32_t getIndex();
	virtual $String* toString() override;
	int32_t index = 0;
	::javax::swing::text::Position$Bias* bias = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$DropLocation_h_