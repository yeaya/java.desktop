#ifndef _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$CroppedEdge_h_
#define _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$CroppedEdge_h_
//$ class com.apple.laf.AquaTabbedPaneCopyFromBasicUI$CroppedEdge
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
		class Color;
		class Graphics;
		class Shape;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneCopyFromBasicUI$CroppedEdge : public ::javax::swing::JPanel, public ::javax::swing::plaf::UIResource {
	$class(AquaTabbedPaneCopyFromBasicUI$CroppedEdge, $NO_CLASS_INIT, ::javax::swing::JPanel, ::javax::swing::plaf::UIResource)
public:
	AquaTabbedPaneCopyFromBasicUI$CroppedEdge();
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
	::java::awt::Color* getBgColor();
	virtual int32_t getCropline();
	virtual int32_t getCroppedSideWidth();
	virtual int32_t getTabIndex();
	virtual bool isParamsSet();
	using ::javax::swing::JPanel::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	virtual void resetParams();
	virtual void setParams(int32_t tabIndex, int32_t cropline, int32_t cropx, int32_t cropy);
	using ::javax::swing::JPanel::setUI;
	virtual $String* toString() override;
	::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0 = nullptr;
	::java::awt::Shape* shape = nullptr;
	int32_t tabIndex = 0;
	int32_t cropline = 0;
	int32_t cropx = 0;
	int32_t cropy = 0;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$CroppedEdge_h_