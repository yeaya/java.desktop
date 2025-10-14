#ifndef _com_sun_java_swing_plaf_windows_WindowsProgressBarUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsProgressBarUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsProgressBarUI
//$ extends javax.swing.plaf.basic.BasicProgressBarUI

#include <javax/swing/plaf/basic/BasicProgressBarUI.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
		class Graphics2D;
		class Insets;
		class Rectangle;
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
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsProgressBarUI : public ::javax::swing::plaf::basic::BasicProgressBarUI {
	$class(WindowsProgressBarUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicProgressBarUI)
public:
	WindowsProgressBarUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	virtual ::java::awt::Rectangle* getBox(::java::awt::Rectangle* r) override;
	virtual int32_t getBoxLength(int32_t availableLength, int32_t otherDimension) override;
	::java::awt::Rectangle* getFullChunkBounds(::java::awt::Rectangle* box);
	virtual ::java::awt::Dimension* getPreferredInnerHorizontal() override;
	virtual ::java::awt::Dimension* getPreferredInnerVertical() override;
	virtual void installDefaults() override;
	virtual void paintDeterminate(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintIndeterminate(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void paintIndeterminateFrame(::java::awt::Rectangle* box, ::java::awt::Graphics2D* g, bool vertical, int32_t bgwidth, int32_t bgheight);
	void paintXPBackground(::java::awt::Graphics* g, bool vertical, int32_t barRectWidth, int32_t barRectHeight);
	virtual void setAnimationIndex(int32_t newValue) override;
	::java::awt::Rectangle* previousFullBox = nullptr;
	::java::awt::Insets* indeterminateInsets = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsProgressBarUI_h_