#ifndef _javax_swing_plaf_nimbus_PasswordFieldPainter_h_
#define _javax_swing_plaf_nimbus_PasswordFieldPainter_h_
//$ class javax.swing.plaf.nimbus.PasswordFieldPainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("BACKGROUND_DISABLED")
#undef BACKGROUND_DISABLED
#pragma push_macro("BACKGROUND_ENABLED")
#undef BACKGROUND_ENABLED
#pragma push_macro("BACKGROUND_SELECTED")
#undef BACKGROUND_SELECTED
#pragma push_macro("BORDER_DISABLED")
#undef BORDER_DISABLED
#pragma push_macro("BORDER_ENABLED")
#undef BORDER_ENABLED
#pragma push_macro("BORDER_FOCUSED")
#undef BORDER_FOCUSED

namespace java {
	namespace awt {
		class Color;
		class Graphics2D;
		class Paint;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Ellipse2D;
			class Path2D;
			class Rectangle2D;
			class RoundRectangle2D;
		}
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
			namespace nimbus {
				class AbstractRegionPainter$PaintContext;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class PasswordFieldPainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(PasswordFieldPainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	PasswordFieldPainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::Paint* decodeGradient1(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient2(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient3(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient4(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient5(::java::awt::Shape* s);
	::java::awt::geom::Path2D* decodePath1();
	::java::awt::geom::Rectangle2D* decodeRect1();
	::java::awt::geom::Rectangle2D* decodeRect10();
	::java::awt::geom::Rectangle2D* decodeRect11();
	::java::awt::geom::Rectangle2D* decodeRect2();
	::java::awt::geom::Rectangle2D* decodeRect3();
	::java::awt::geom::Rectangle2D* decodeRect4();
	::java::awt::geom::Rectangle2D* decodeRect5();
	::java::awt::geom::Rectangle2D* decodeRect6();
	::java::awt::geom::Rectangle2D* decodeRect7();
	::java::awt::geom::Rectangle2D* decodeRect8();
	::java::awt::geom::Rectangle2D* decodeRect9();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual $ObjectArray* getExtendedCacheKeys(::javax::swing::JComponent* c) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void paintBackgroundDisabled(::java::awt::Graphics2D* g);
	void paintBackgroundEnabled(::java::awt::Graphics2D* g);
	void paintBackgroundSelected(::java::awt::Graphics2D* g);
	void paintBorderDisabled(::java::awt::Graphics2D* g);
	void paintBorderEnabled(::java::awt::Graphics2D* g);
	void paintBorderFocused(::java::awt::Graphics2D* g);
	static const int32_t BACKGROUND_DISABLED = 1;
	static const int32_t BACKGROUND_ENABLED = 2;
	static const int32_t BACKGROUND_SELECTED = 3;
	static const int32_t BORDER_DISABLED = 4;
	static const int32_t BORDER_FOCUSED = 5;
	static const int32_t BORDER_ENABLED = 6;
	int32_t state = 0;
	::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx = nullptr;
	::java::awt::geom::Path2D* path = nullptr;
	::java::awt::geom::Rectangle2D* rect = nullptr;
	::java::awt::geom::RoundRectangle2D* roundRect = nullptr;
	::java::awt::geom::Ellipse2D* ellipse = nullptr;
	::java::awt::Color* color1 = nullptr;
	::java::awt::Color* color2 = nullptr;
	::java::awt::Color* color3 = nullptr;
	::java::awt::Color* color4 = nullptr;
	::java::awt::Color* color5 = nullptr;
	::java::awt::Color* color6 = nullptr;
	::java::awt::Color* color7 = nullptr;
	::java::awt::Color* color8 = nullptr;
	::java::awt::Color* color9 = nullptr;
	::java::awt::Color* color10 = nullptr;
	::java::awt::Color* color11 = nullptr;
	::java::awt::Color* color12 = nullptr;
	$ObjectArray* componentColors = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BACKGROUND_DISABLED")
#pragma pop_macro("BACKGROUND_ENABLED")
#pragma pop_macro("BACKGROUND_SELECTED")
#pragma pop_macro("BORDER_DISABLED")
#pragma pop_macro("BORDER_ENABLED")
#pragma pop_macro("BORDER_FOCUSED")

#endif // _javax_swing_plaf_nimbus_PasswordFieldPainter_h_