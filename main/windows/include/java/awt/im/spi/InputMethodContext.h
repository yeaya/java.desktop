#ifndef _java_awt_im_spi_InputMethodContext_h_
#define _java_awt_im_spi_InputMethodContext_h_
//$ interface java.awt.im.spi.InputMethodContext
//$ extends java.awt.im.InputMethodRequests

#include <java/awt/im/InputMethodRequests.h>

namespace java {
	namespace awt {
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class TextHitInfo;
		}
	}
}
namespace java {
	namespace awt {
		namespace im {
			namespace spi {
				class InputMethod;
			}
		}
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

namespace java {
	namespace awt {
		namespace im {
			namespace spi {

class $import InputMethodContext : public ::java::awt::im::InputMethodRequests {
	$interface(InputMethodContext, $NO_CLASS_INIT, ::java::awt::im::InputMethodRequests)
public:
	virtual ::javax::swing::JFrame* createInputMethodJFrame($String* title, bool attachToInputContext) {return nullptr;}
	virtual ::java::awt::Window* createInputMethodWindow($String* title, bool attachToInputContext) {return nullptr;}
	virtual void dispatchInputMethodEvent(int32_t id, ::java::text::AttributedCharacterIterator* text, int32_t committedCharacterCount, ::java::awt::font::TextHitInfo* caret, ::java::awt::font::TextHitInfo* visiblePosition) {}
	virtual void enableClientWindowNotification(::java::awt::im::spi::InputMethod* inputMethod, bool enable) {}
};

			} // spi
		} // im
	} // awt
} // java

#endif // _java_awt_im_spi_InputMethodContext_h_