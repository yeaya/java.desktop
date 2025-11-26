#ifndef _sun_swing_text_CountingPrintable_h_
#define _sun_swing_text_CountingPrintable_h_
//$ interface sun.swing.text.CountingPrintable
//$ extends java.awt.print.Printable

#include <java/awt/print/Printable.h>

namespace sun {
	namespace swing {
		namespace text {

class CountingPrintable : public ::java::awt::print::Printable {
	$interface(CountingPrintable, $NO_CLASS_INIT, ::java::awt::print::Printable)
public:
	virtual int32_t getNumberOfPages() {return 0;}
};

		} // text
	} // swing
} // sun

#endif // _sun_swing_text_CountingPrintable_h_