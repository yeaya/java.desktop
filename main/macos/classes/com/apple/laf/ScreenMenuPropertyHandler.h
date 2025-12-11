#ifndef _com_apple_laf_ScreenMenuPropertyHandler_h_
#define _com_apple_laf_ScreenMenuPropertyHandler_h_
//$ interface com.apple.laf.ScreenMenuPropertyHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Font;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JMenuItem;
		class KeyStroke;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class ScreenMenuPropertyHandler : public ::java::lang::Object {
	$interface(ScreenMenuPropertyHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void setAccelerator(::javax::swing::KeyStroke* ks) {}
	virtual void setChildVisible(::javax::swing::JMenuItem* child, bool b) {}
	virtual void setEnabled(bool b) {}
	virtual void setFont(::java::awt::Font* f) {}
	virtual void setIcon(::javax::swing::Icon* icon) {}
	virtual void setIndeterminate(bool indeterminate) {}
	virtual void setLabel($String* f) {}
	virtual void setToolTipText($String* tooltip) {}
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_ScreenMenuPropertyHandler_h_