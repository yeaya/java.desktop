#ifndef _com_apple_laf_AquaMnemonicHandler$AltProcessor_h_
#define _com_apple_laf_AquaMnemonicHandler$AltProcessor_h_
//$ class com.apple.laf.AquaMnemonicHandler$AltProcessor
//$ extends java.awt.KeyEventPostProcessor

#include <java/awt/KeyEventPostProcessor.h>

namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaMnemonicHandler$AltProcessor : public ::java::awt::KeyEventPostProcessor {
	$class(AquaMnemonicHandler$AltProcessor, $NO_CLASS_INIT, ::java::awt::KeyEventPostProcessor)
public:
	AquaMnemonicHandler$AltProcessor();
	void init$();
	virtual bool postProcessKeyEvent(::java::awt::event::KeyEvent* ev) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaMnemonicHandler$AltProcessor_h_