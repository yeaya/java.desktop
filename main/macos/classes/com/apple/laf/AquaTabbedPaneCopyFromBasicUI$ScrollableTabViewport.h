#ifndef _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport_h_
#define _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport_h_
//$ class com.apple.laf.AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport
//$ extends javax.swing.JViewport
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/JViewport.h>
#include <javax/swing/plaf/UIResource.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneCopyFromBasicUI;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport : public ::javax::swing::JViewport, public ::javax::swing::plaf::UIResource {
	$class(AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport, $NO_CLASS_INIT, ::javax::swing::JViewport, ::javax::swing::plaf::UIResource)
public:
	AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport();
	using ::javax::swing::JViewport::firePropertyChange;
	using ::javax::swing::JViewport::contains;
	using ::javax::swing::JViewport::enable;
	using ::javax::swing::JViewport::getBounds;
	using ::javax::swing::JViewport::getSize;
	using ::javax::swing::JViewport::getLocation;
	using ::javax::swing::JViewport::add;
	using ::javax::swing::JViewport::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0);
	using ::javax::swing::JViewport::setUI;
	using ::javax::swing::JViewport::remove;
	using ::javax::swing::JViewport::repaint;
	using ::javax::swing::JViewport::requestFocus;
	using ::javax::swing::JViewport::requestFocusInWindow;
	using ::javax::swing::JViewport::list;
	virtual $String* toString() override;
	::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport_h_