#ifndef _com_apple_laf_AquaSplitPaneUI_h_
#define _com_apple_laf_AquaSplitPaneUI_h_
//$ class com.apple.laf.AquaSplitPaneUI
//$ extends javax.swing.plaf.basic.BasicSplitPaneUI
//$ implements java.awt.event.MouseListener,java.beans.PropertyChangeListener

#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>

#pragma push_macro("DIVIDER_PAINTER_KEY")
#undef DIVIDER_PAINTER_KEY

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
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
		namespace plaf {
			namespace basic {
				class BasicSplitPaneDivider;
			}
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaSplitPaneUI : public ::javax::swing::plaf::basic::BasicSplitPaneUI, public ::java::awt::event::MouseListener, public ::java::beans::PropertyChangeListener {
	$class(AquaSplitPaneUI, 0, ::javax::swing::plaf::basic::BasicSplitPaneUI, ::java::awt::event::MouseListener, ::java::beans::PropertyChangeListener)
public:
	AquaSplitPaneUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::javax::swing::plaf::basic::BasicSplitPaneDivider* createDefaultDivider() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual void installListeners() override;
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual $String* toString() override;
	virtual void uninstallListeners() override;
	static $String* DIVIDER_PAINTER_KEY;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("DIVIDER_PAINTER_KEY")

#endif // _com_apple_laf_AquaSplitPaneUI_h_