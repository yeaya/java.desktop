#ifndef _bug8041982$BusyLayer_h_
#define _bug8041982$BusyLayer_h_
//$ class bug8041982$BusyLayer
//$ extends javax.swing.plaf.LayerUI

#include <javax/swing/plaf/LayerUI.h>

class bug8041982;
namespace java {
	namespace awt {
		class Graphics;
		class Image;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JComponent;
		class JLayer;
	}
}

class bug8041982$BusyLayer : public ::javax::swing::plaf::LayerUI {
	$class(bug8041982$BusyLayer, $NO_CLASS_INIT, ::javax::swing::plaf::LayerUI)
public:
	bug8041982$BusyLayer();
	void init$(::bug8041982* this$0);
	virtual void applyPropertyChange(::java::beans::PropertyChangeEvent* evt, ::javax::swing::JLayer* l) override;
	virtual bool imageUpdate(::java::awt::Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h, ::javax::swing::JLayer* l) override;
	virtual bool isAnimated();
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void setAnimated(bool animated);
	::bug8041982* this$0 = nullptr;
	$volatile(bool) animated = false;
	::javax::swing::Icon* icon = nullptr;
	int32_t imageUpdateCount = 0;
};

#endif // _bug8041982$BusyLayer_h_