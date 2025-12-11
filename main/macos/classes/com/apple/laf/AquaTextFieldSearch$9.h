#ifndef _com_apple_laf_AquaTextFieldSearch$9_h_
#define _com_apple_laf_AquaTextFieldSearch$9_h_
//$ class com.apple.laf.AquaTextFieldSearch$9
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		class JLabel;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTextFieldSearch$9 : public ::java::lang::Runnable {
	$class(AquaTextFieldSearch$9, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	AquaTextFieldSearch$9();
	void init$(::javax::swing::JLabel* val$label, ::javax::swing::text::JTextComponent* val$text);
	virtual void run() override;
	::javax::swing::text::JTextComponent* val$text = nullptr;
	::javax::swing::JLabel* val$label = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextFieldSearch$9_h_