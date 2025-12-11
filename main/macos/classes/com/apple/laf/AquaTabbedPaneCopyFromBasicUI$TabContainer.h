#ifndef _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$TabContainer_h_
#define _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$TabContainer_h_
//$ class com.apple.laf.AquaTabbedPaneCopyFromBasicUI$TabContainer
//$ extends javax.swing.JPanel
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/JPanel.h>
#include <javax/swing/plaf/UIResource.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneCopyFromBasicUI;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneCopyFromBasicUI$TabContainer : public ::javax::swing::JPanel, public ::javax::swing::plaf::UIResource {
	$class(AquaTabbedPaneCopyFromBasicUI$TabContainer, $NO_CLASS_INIT, ::javax::swing::JPanel, ::javax::swing::plaf::UIResource)
public:
	AquaTabbedPaneCopyFromBasicUI$TabContainer();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0);
	virtual void doLayout() override;
	virtual bool isOptimizedDrawingEnabled() override;
	using ::javax::swing::JPanel::remove;
	using ::javax::swing::JPanel::list;
	virtual void remove(::java::awt::Component* comp) override;
	void removeUnusedTabComponents();
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	virtual $String* toString() override;
	::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0 = nullptr;
	bool notifyTabbedPane = false;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$TabContainer_h_