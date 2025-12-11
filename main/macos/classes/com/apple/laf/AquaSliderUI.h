#ifndef _com_apple_laf_AquaSliderUI_h_
#define _com_apple_laf_AquaSliderUI_h_
//$ class com.apple.laf.AquaSliderUI
//$ extends javax.swing.plaf.basic.BasicSliderUI
//$ implements com.apple.laf.AquaUtilControlSize$Sizeable

#include <com/apple/laf/AquaUtilControlSize$Sizeable.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$Direction;
		class JRSUIConstants$Orientation;
		class JRSUIConstants$Size;
		class JRSUIConstants$State;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaPainter;
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Dimension;
		class Graphics;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JSlider;
		class Timer;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
		}
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
				class BasicSliderUI$TrackListener;
			}
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaSliderUI : public ::javax::swing::plaf::basic::BasicSliderUI, public ::com::apple::laf::AquaUtilControlSize$Sizeable {
	$class(AquaSliderUI, 0, ::javax::swing::plaf::basic::BasicSliderUI, ::com::apple::laf::AquaUtilControlSize$Sizeable)
public:
	AquaSliderUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JSlider* b);
	static ::javax::swing::JSlider* access$000(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$100(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$1000(::com::apple::laf::AquaSliderUI* x0);
	static ::java::awt::Rectangle* access$1100(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$1200(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$1300(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$1400(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$1500(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$1600(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$1700(::com::apple::laf::AquaSliderUI* x0);
	static ::java::awt::Rectangle* access$1800(::com::apple::laf::AquaSliderUI* x0);
	static ::java::awt::Rectangle* access$1900(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::Timer* access$200(::com::apple::laf::AquaSliderUI* x0);
	static ::java::awt::Rectangle* access$2000(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$2100(::com::apple::laf::AquaSliderUI* x0);
	static bool access$2200(::com::apple::laf::AquaSliderUI* x0);
	static bool access$2300(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$2400(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$2500(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$2600(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$2700(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$2800(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$2900(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$300(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$3000(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$3100(::com::apple::laf::AquaSliderUI* x0);
	static ::java::awt::Rectangle* access$3200(::com::apple::laf::AquaSliderUI* x0);
	static ::java::awt::Rectangle* access$3300(::com::apple::laf::AquaSliderUI* x0);
	static ::java::awt::Rectangle* access$3400(::com::apple::laf::AquaSliderUI* x0);
	static ::java::awt::Rectangle* access$3500(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$3600(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$3700(::com::apple::laf::AquaSliderUI* x0);
	static int32_t access$3800(::com::apple::laf::AquaSliderUI* x0, int32_t x1);
	static bool access$3900(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$400(::com::apple::laf::AquaSliderUI* x0);
	static ::java::awt::Rectangle* access$4000(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$4100(::com::apple::laf::AquaSliderUI* x0);
	static ::java::awt::Rectangle* access$4200(::com::apple::laf::AquaSliderUI* x0);
	static ::java::awt::Rectangle* access$4300(::com::apple::laf::AquaSliderUI* x0);
	static ::java::awt::Rectangle* access$4400(::com::apple::laf::AquaSliderUI* x0);
	static ::java::awt::Rectangle* access$4500(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$4600(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$4700(::com::apple::laf::AquaSliderUI* x0);
	static int32_t access$4800(::com::apple::laf::AquaSliderUI* x0, int32_t x1);
	static bool access$4900(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$500(::com::apple::laf::AquaSliderUI* x0);
	static ::java::awt::Rectangle* access$5000(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$5100(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$5200(::com::apple::laf::AquaSliderUI* x0);
	static ::java::awt::Rectangle* access$5300(::com::apple::laf::AquaSliderUI* x0);
	static ::java::awt::Rectangle* access$5400(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$600(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$700(::com::apple::laf::AquaSliderUI* x0);
	static void access$800(::com::apple::laf::AquaSliderUI* x0);
	static ::javax::swing::JSlider* access$900(::com::apple::laf::AquaSliderUI* x0);
	virtual void applySizeFor(::javax::swing::JComponent* c, ::apple::laf::JRSUIConstants$Size* size) override;
	virtual void calculateThumbLocation() override;
	virtual void calculateThumbSize() override;
	virtual void calculateTickRect() override;
	virtual ::javax::swing::event::ChangeListener* createChangeListener(::javax::swing::JSlider* s) override;
	virtual ::javax::swing::plaf::basic::BasicSliderUI$TrackListener* createTrackListener(::javax::swing::JSlider* s) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::apple::laf::JRSUIConstants$Direction* getDirection(::apple::laf::JRSUIConstants$Orientation* orientation);
	virtual ::java::awt::Dimension* getPreferredHorizontalSize() override;
	virtual ::java::awt::Dimension* getPreferredVerticalSize() override;
	virtual int32_t getScale();
	virtual ::apple::laf::JRSUIConstants$State* getState();
	virtual void installListeners(::javax::swing::JSlider* s) override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	using ::javax::swing::plaf::basic::BasicSliderUI::paintThumb;
	virtual void paintThumb(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::apple::laf::JRSUIConstants$Orientation* orientation, ::apple::laf::JRSUIConstants$State* state);
	virtual void paintTicks(::java::awt::Graphics* g) override;
	using ::javax::swing::plaf::basic::BasicSliderUI::paintTrack;
	virtual void paintTrack(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::apple::laf::JRSUIConstants$Orientation* orientation, ::apple::laf::JRSUIConstants$State* state);
	virtual bool shouldUseArrowThumb();
	virtual $String* toString() override;
	virtual void uninstallListeners(::javax::swing::JSlider* s) override;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* roundThumbDescriptor;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* pointingThumbDescriptor;
	static ::com::apple::laf::AquaPainter* trackPainter;
	::com::apple::laf::AquaPainter* thumbPainter = nullptr;
	::java::awt::Color* tickColor = nullptr;
	::java::awt::Color* disabledTickColor = nullptr;
	bool fIsDragging = false;
	static const int32_t kTickWidth = 3;
	static const int32_t kTickLength = 8;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaSliderUI_h_