#ifndef _com_apple_laf_AquaInternalFramePaneUI$Dock_h_
#define _com_apple_laf_AquaInternalFramePaneUI$Dock_h_
//$ class com.apple.laf.AquaInternalFramePaneUI$Dock
//$ extends javax.swing.JComponent
//$ implements javax.swing.border.Border

#include <javax/swing/JComponent.h>
#include <javax/swing/border/Border.h>

#pragma push_macro("DOCK_EDGE_SLACK")
#undef DOCK_EDGE_SLACK

namespace com {
	namespace apple {
		namespace laf {
			class AquaInternalFramePaneUI;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaInternalFramePaneUI$Dock : public ::javax::swing::JComponent, public ::javax::swing::border::Border {
	$class(AquaInternalFramePaneUI$Dock, $NO_CLASS_INIT, ::javax::swing::JComponent, ::javax::swing::border::Border)
public:
	AquaInternalFramePaneUI$Dock();
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::apple::laf::AquaInternalFramePaneUI* this$0, ::javax::swing::JComponent* parent);
	virtual ::java::awt::Component* add(::java::awt::Component* c) override;
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual bool isBorderOpaque() override;
	using ::javax::swing::JComponent::paintBorder;
	using ::javax::swing::JComponent::list;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	using ::javax::swing::JComponent::remove;
	virtual void remove(::java::awt::Component* c) override;
	virtual void removeNotify() override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	virtual $String* toString() override;
	virtual void updateSize();
	::com::apple::laf::AquaInternalFramePaneUI* this$0 = nullptr;
	static const int32_t DOCK_EDGE_SLACK = 8;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("DOCK_EDGE_SLACK")

#endif // _com_apple_laf_AquaInternalFramePaneUI$Dock_h_