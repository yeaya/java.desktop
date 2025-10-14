#ifndef _com_sun_java_swing_plaf_windows_WindowsSliderUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsSliderUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsSliderUI
//$ extends javax.swing.plaf.basic.BasicSliderUI

#include <javax/swing/plaf/basic/BasicSliderUI.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JSlider;
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
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsSliderUI : public ::javax::swing::plaf::basic::BasicSliderUI {
	$class(WindowsSliderUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSliderUI)
public:
	WindowsSliderUI();
	void init$(::javax::swing::JSlider* b);
	static ::java::awt::Rectangle* access$000(::com::sun::java::swing::plaf::windows::WindowsSliderUI* x0);
	static ::java::awt::Rectangle* access$100(::com::sun::java::swing::plaf::windows::WindowsSliderUI* x0);
	static ::java::awt::Rectangle* access$200(::com::sun::java::swing::plaf::windows::WindowsSliderUI* x0);
	static ::javax::swing::JSlider* access$300(::com::sun::java::swing::plaf::windows::WindowsSliderUI* x0);
	static ::java::awt::Rectangle* access$400(::com::sun::java::swing::plaf::windows::WindowsSliderUI* x0);
	static ::javax::swing::JSlider* access$500(::com::sun::java::swing::plaf::windows::WindowsSliderUI* x0);
	static ::javax::swing::JSlider* access$600(::com::sun::java::swing::plaf::windows::WindowsSliderUI* x0);
	static ::java::awt::Rectangle* access$700(::com::sun::java::swing::plaf::windows::WindowsSliderUI* x0);
	static ::javax::swing::JSlider* access$800(::com::sun::java::swing::plaf::windows::WindowsSliderUI* x0);
	virtual ::javax::swing::plaf::basic::BasicSliderUI$TrackListener* createTrackListener(::javax::swing::JSlider* slider) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
	virtual ::java::awt::Dimension* getThumbSize() override;
	::com::sun::java::swing::plaf::windows::TMSchema$Part* getXPThumbPart();
	virtual void paintMajorTickForHorizSlider(::java::awt::Graphics* g, ::java::awt::Rectangle* tickBounds, int32_t x) override;
	virtual void paintMajorTickForVertSlider(::java::awt::Graphics* g, ::java::awt::Rectangle* tickBounds, int32_t y) override;
	virtual void paintMinorTickForHorizSlider(::java::awt::Graphics* g, ::java::awt::Rectangle* tickBounds, int32_t x) override;
	virtual void paintMinorTickForVertSlider(::java::awt::Graphics* g, ::java::awt::Rectangle* tickBounds, int32_t y) override;
	virtual void paintThumb(::java::awt::Graphics* g) override;
	virtual void paintTrack(::java::awt::Graphics* g) override;
	bool rollover = false;
	bool pressed = false;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsSliderUI_h_