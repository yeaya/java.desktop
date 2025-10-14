#ifndef _com_sun_java_swing_plaf_windows_WindowsTextUI$WindowsHighlightPainter_h_
#define _com_sun_java_swing_plaf_windows_WindowsTextUI$WindowsHighlightPainter_h_
//$ class com.sun.java.swing.plaf.windows.WindowsTextUI$WindowsHighlightPainter
//$ extends javax.swing.text.DefaultHighlighter$DefaultHighlightPainter

#include <javax/swing/text/DefaultHighlighter$DefaultHighlightPainter.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
			class View;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsTextUI$WindowsHighlightPainter : public ::javax::swing::text::DefaultHighlighter$DefaultHighlightPainter {
	$class(WindowsTextUI$WindowsHighlightPainter, $NO_CLASS_INIT, ::javax::swing::text::DefaultHighlighter$DefaultHighlightPainter)
public:
	WindowsTextUI$WindowsHighlightPainter();
	void init$(::java::awt::Color* c);
	virtual void paint(::java::awt::Graphics* g, int32_t offs0, int32_t offs1, ::java::awt::Shape* bounds, ::javax::swing::text::JTextComponent* c) override;
	virtual ::java::awt::Shape* paintLayer(::java::awt::Graphics* g, int32_t offs0, int32_t offs1, ::java::awt::Shape* bounds, ::javax::swing::text::JTextComponent* c, ::javax::swing::text::View* view) override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsTextUI$WindowsHighlightPainter_h_