#ifndef _javax_swing_plaf_nimbus_TreePainter_h_
#define _javax_swing_plaf_nimbus_TreePainter_h_
//$ class javax.swing.plaf.nimbus.TreePainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("BACKGROUND_DISABLED")
#undef BACKGROUND_DISABLED
#pragma push_macro("BACKGROUND_ENABLED")
#undef BACKGROUND_ENABLED
#pragma push_macro("BACKGROUND_ENABLED_SELECTED")
#undef BACKGROUND_ENABLED_SELECTED
#pragma push_macro("CLOSEDICON_ENABLED")
#undef CLOSEDICON_ENABLED
#pragma push_macro("COLLAPSEDICON_ENABLED")
#undef COLLAPSEDICON_ENABLED
#pragma push_macro("COLLAPSEDICON_ENABLED_SELECTED")
#undef COLLAPSEDICON_ENABLED_SELECTED
#pragma push_macro("EXPANDEDICON_ENABLED")
#undef EXPANDEDICON_ENABLED
#pragma push_macro("EXPANDEDICON_ENABLED_SELECTED")
#undef EXPANDEDICON_ENABLED_SELECTED
#pragma push_macro("LEAFICON_ENABLED")
#undef LEAFICON_ENABLED
#pragma push_macro("OPENICON_ENABLED")
#undef OPENICON_ENABLED

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

class TreePainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(TreePainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	TreePainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::Paint* decodeGradient1(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient2(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient3(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient4(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient5(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient6(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient7(::java::awt::Shape* s);
	::java::awt::geom::Path2D* decodePath1();
	::java::awt::geom::Path2D* decodePath10();
	::java::awt::geom::Path2D* decodePath11();
	::java::awt::geom::Path2D* decodePath12();
	::java::awt::geom::Path2D* decodePath13();
	::java::awt::geom::Path2D* decodePath14();
	::java::awt::geom::Path2D* decodePath15();
	::java::awt::geom::Path2D* decodePath16();
	::java::awt::geom::Path2D* decodePath17();
	::java::awt::geom::Path2D* decodePath2();
	::java::awt::geom::Path2D* decodePath3();
	::java::awt::geom::Path2D* decodePath4();
	::java::awt::geom::Path2D* decodePath5();
	::java::awt::geom::Path2D* decodePath6();
	::java::awt::geom::Path2D* decodePath7();
	::java::awt::geom::Path2D* decodePath8();
	::java::awt::geom::Path2D* decodePath9();
	::java::awt::geom::Rectangle2D* decodeRect1();
	::java::awt::geom::Rectangle2D* decodeRect2();
	::java::awt::geom::Rectangle2D* decodeRect3();
	::java::awt::geom::Rectangle2D* decodeRect4();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void paintclosedIconEnabled(::java::awt::Graphics2D* g);
	void paintcollapsedIconEnabled(::java::awt::Graphics2D* g);
	void paintcollapsedIconEnabledAndSelected(::java::awt::Graphics2D* g);
	void paintexpandedIconEnabled(::java::awt::Graphics2D* g);
	void paintexpandedIconEnabledAndSelected(::java::awt::Graphics2D* g);
	void paintleafIconEnabled(::java::awt::Graphics2D* g);
	void paintopenIconEnabled(::java::awt::Graphics2D* g);
	static const int32_t BACKGROUND_DISABLED = 1;
	static const int32_t BACKGROUND_ENABLED = 2;
	static const int32_t BACKGROUND_ENABLED_SELECTED = 3;
	static const int32_t LEAFICON_ENABLED = 4;
	static const int32_t CLOSEDICON_ENABLED = 5;
	static const int32_t OPENICON_ENABLED = 6;
	static const int32_t COLLAPSEDICON_ENABLED = 7;
	static const int32_t COLLAPSEDICON_ENABLED_SELECTED = 8;
	static const int32_t EXPANDEDICON_ENABLED = 9;
	static const int32_t EXPANDEDICON_ENABLED_SELECTED = 10;
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
	::java::awt::Color* color13 = nullptr;
	::java::awt::Color* color14 = nullptr;
	::java::awt::Color* color15 = nullptr;
	::java::awt::Color* color16 = nullptr;
	::java::awt::Color* color17 = nullptr;
	::java::awt::Color* color18 = nullptr;
	::java::awt::Color* color19 = nullptr;
	::java::awt::Color* color20 = nullptr;
	::java::awt::Color* color21 = nullptr;
	::java::awt::Color* color22 = nullptr;
	::java::awt::Color* color23 = nullptr;
	::java::awt::Color* color24 = nullptr;
	::java::awt::Color* color25 = nullptr;
	::java::awt::Color* color26 = nullptr;
	$ObjectArray* componentColors = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BACKGROUND_DISABLED")
#pragma pop_macro("BACKGROUND_ENABLED")
#pragma pop_macro("BACKGROUND_ENABLED_SELECTED")
#pragma pop_macro("CLOSEDICON_ENABLED")
#pragma pop_macro("COLLAPSEDICON_ENABLED")
#pragma pop_macro("COLLAPSEDICON_ENABLED_SELECTED")
#pragma pop_macro("EXPANDEDICON_ENABLED")
#pragma pop_macro("EXPANDEDICON_ENABLED_SELECTED")
#pragma pop_macro("LEAFICON_ENABLED")
#pragma pop_macro("OPENICON_ENABLED")

#endif // _javax_swing_plaf_nimbus_TreePainter_h_