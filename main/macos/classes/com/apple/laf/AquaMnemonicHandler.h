#ifndef _com_apple_laf_AquaMnemonicHandler_h_
#define _com_apple_laf_AquaMnemonicHandler_h_
//$ class com.apple.laf.AquaMnemonicHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Container;
		class KeyEventPostProcessor;
		class Window;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaMnemonicHandler : public ::java::lang::Object {
	$class(AquaMnemonicHandler, 0, ::java::lang::Object)
public:
	AquaMnemonicHandler();
	void init$();
	static ::java::awt::KeyEventPostProcessor* getInstance();
	static bool isMnemonicHidden();
	static void repaintMnemonicsInContainer(::java::awt::Container* cont);
	static void repaintMnemonicsInWindow(::java::awt::Window* w);
	static void setMnemonicHidden(bool hide);
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* altProcessor;
	static bool isMnemonicHidden$;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaMnemonicHandler_h_