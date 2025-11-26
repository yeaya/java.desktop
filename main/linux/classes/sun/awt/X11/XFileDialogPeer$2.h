#ifndef _sun_awt_X11_XFileDialogPeer$2_h_
#define _sun_awt_X11_XFileDialogPeer$2_h_
//$ class sun.awt.X11.XFileDialogPeer$2
//$ extends java.awt.Choice

#include <java/awt/Choice.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XFileDialogPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XFileDialogPeer$2 : public ::java::awt::Choice {
	$class(XFileDialogPeer$2, $NO_CLASS_INIT, ::java::awt::Choice)
public:
	XFileDialogPeer$2();
	using ::java::awt::Choice::add;
	void init$(::sun::awt::X11::XFileDialogPeer* this$0);
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::java::awt::Choice::remove;
	::sun::awt::X11::XFileDialogPeer* this$0 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XFileDialogPeer$2_h_