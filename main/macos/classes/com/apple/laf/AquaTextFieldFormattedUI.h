#ifndef _com_apple_laf_AquaTextFieldFormattedUI_h_
#define _com_apple_laf_AquaTextFieldFormattedUI_h_
//$ class com.apple.laf.AquaTextFieldFormattedUI
//$ extends com.apple.laf.AquaTextFieldUI
//$ implements java.awt.event.MouseListener

#include <com/apple/laf/AquaTextFieldUI.h>
#include <java/awt/event/MouseListener.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
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

namespace com {
	namespace apple {
		namespace laf {

class AquaTextFieldFormattedUI : public ::com::apple::laf::AquaTextFieldUI, public ::java::awt::event::MouseListener {
	$class(AquaTextFieldFormattedUI, $NO_CLASS_INIT, ::com::apple::laf::AquaTextFieldUI, ::java::awt::event::MouseListener)
public:
	AquaTextFieldFormattedUI();
	using ::com::apple::laf::AquaTextFieldUI::create;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual $String* getPropertyPrefix() override;
	virtual void installListeners() override;
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual $String* toString() override;
	virtual void uninstallListeners() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextFieldFormattedUI_h_