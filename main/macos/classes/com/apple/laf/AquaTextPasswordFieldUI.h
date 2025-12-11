#ifndef _com_apple_laf_AquaTextPasswordFieldUI_h_
#define _com_apple_laf_AquaTextPasswordFieldUI_h_
//$ class com.apple.laf.AquaTextPasswordFieldUI
//$ extends com.apple.laf.AquaTextFieldUI

#include <com/apple/laf/AquaTextFieldUI.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTextPasswordFieldUI$CapsLockSymbolPainter;
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class JTextComponent;
			class View;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTextPasswordFieldUI : public ::com::apple::laf::AquaTextFieldUI {
	$class(AquaTextPasswordFieldUI, 0, ::com::apple::laf::AquaTextFieldUI)
public:
	AquaTextPasswordFieldUI();
	using ::com::apple::laf::AquaTextFieldUI::create;
	void init$();
	static ::javax::swing::text::JTextComponent* access$000(::com::apple::laf::AquaTextPasswordFieldUI* x0);
	virtual ::javax::swing::text::View* create(::javax::swing::text::Element* elem) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	static ::com::apple::laf::AquaTextPasswordFieldUI$CapsLockSymbolPainter* getCapsLockPainter();
	virtual $String* getPropertyPrefix() override;
	virtual void installListeners() override;
	virtual void paintBackgroundSafely(::java::awt::Graphics* g) override;
	virtual void uninstallListeners() override;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* capsLockPainter;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextPasswordFieldUI_h_