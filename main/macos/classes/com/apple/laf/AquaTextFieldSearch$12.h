#ifndef _com_apple_laf_AquaTextFieldSearch$12_h_
#define _com_apple_laf_AquaTextFieldSearch$12_h_
//$ class com.apple.laf.AquaTextFieldSearch$12
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		class JButton;
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

class AquaTextFieldSearch$12 : public ::java::lang::Runnable {
	$class(AquaTextFieldSearch$12, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	AquaTextFieldSearch$12();
	void init$(::javax::swing::JButton* val$button, ::javax::swing::text::JTextComponent* val$text);
	virtual void run() override;
	::javax::swing::text::JTextComponent* val$text = nullptr;
	::javax::swing::JButton* val$button = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextFieldSearch$12_h_