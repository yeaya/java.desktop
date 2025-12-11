#ifndef _com_apple_laf_AquaMenuBarUI_h_
#define _com_apple_laf_AquaMenuBarUI_h_
//$ class com.apple.laf.AquaMenuBarUI
//$ extends javax.swing.plaf.basic.BasicMenuBarUI
//$ implements com.apple.laf.ScreenMenuBarProvider

#include <com/apple/laf/ScreenMenuBarProvider.h>
#include <javax/swing/plaf/basic/BasicMenuBarUI.h>

namespace com {
	namespace apple {
		namespace laf {
			class ScreenMenuBar;
		}
	}
}
namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JFrame;
		class JMenuBar;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaMenuBarUI : public ::javax::swing::plaf::basic::BasicMenuBarUI, public ::com::apple::laf::ScreenMenuBarProvider {
	$class(AquaMenuBarUI, 0, ::javax::swing::plaf::basic::BasicMenuBarUI, ::com::apple::laf::ScreenMenuBarProvider)
public:
	AquaMenuBarUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void clearScreenMenuBar(::javax::swing::JFrame* frame);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual ::com::apple::laf::ScreenMenuBar* getScreenMenuBar() override;
	static bool getScreenMenuBarProperty();
	virtual void installKeyboardActions() override;
	static bool isScreenMenuBar(::javax::swing::JMenuBar* c);
	static ::java::lang::Void* lambda$static$0();
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual bool setScreenMenuBar(::javax::swing::JFrame* frame);
	virtual $String* toString() override;
	virtual void uninstallKeyboardActions() override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	::com::apple::laf::ScreenMenuBar* fScreenMenuBar = nullptr;
	bool useScreenMenuBar = false;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaMenuBarUI_h_