#ifndef _javax_swing_plaf_nimbus_OptionPanePainter_h_
#define _javax_swing_plaf_nimbus_OptionPanePainter_h_
//$ class javax.swing.plaf.nimbus.OptionPanePainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("BACKGROUND_ENABLED")
#undef BACKGROUND_ENABLED
#pragma push_macro("ERRORICON_ENABLED")
#undef ERRORICON_ENABLED
#pragma push_macro("INFORMATIONICON_ENABLED")
#undef INFORMATIONICON_ENABLED
#pragma push_macro("QUESTIONICON_ENABLED")
#undef QUESTIONICON_ENABLED
#pragma push_macro("WARNINGICON_ENABLED")
#undef WARNINGICON_ENABLED

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

class OptionPanePainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(OptionPanePainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	OptionPanePainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::geom::Ellipse2D* decodeEllipse1();
	::java::awt::geom::Ellipse2D* decodeEllipse2();
	::java::awt::geom::Ellipse2D* decodeEllipse3();
	::java::awt::geom::Ellipse2D* decodeEllipse4();
	::java::awt::geom::Ellipse2D* decodeEllipse5();
	::java::awt::geom::Ellipse2D* decodeEllipse6();
	::java::awt::geom::Ellipse2D* decodeEllipse7();
	::java::awt::Paint* decodeGradient1(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient10(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient2(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient3(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient4(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient5(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient6(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient7(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient8(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient9(::java::awt::Shape* s);
	::java::awt::geom::Path2D* decodePath1();
	::java::awt::geom::Path2D* decodePath2();
	::java::awt::geom::Path2D* decodePath3();
	::java::awt::geom::Path2D* decodePath4();
	::java::awt::geom::Path2D* decodePath5();
	::java::awt::geom::Path2D* decodePath6();
	::java::awt::geom::Path2D* decodePath7();
	::java::awt::geom::Path2D* decodePath8();
	::java::awt::geom::Path2D* decodePath9();
	::java::awt::geom::Rectangle2D* decodeRect1();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void painterrorIconEnabled(::java::awt::Graphics2D* g);
	void paintinformationIconEnabled(::java::awt::Graphics2D* g);
	void paintquestionIconEnabled(::java::awt::Graphics2D* g);
	void paintwarningIconEnabled(::java::awt::Graphics2D* g);
	static const int32_t BACKGROUND_ENABLED = 1;
	static const int32_t ERRORICON_ENABLED = 2;
	static const int32_t INFORMATIONICON_ENABLED = 3;
	static const int32_t QUESTIONICON_ENABLED = 4;
	static const int32_t WARNINGICON_ENABLED = 5;
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
	::java::awt::Color* color27 = nullptr;
	::java::awt::Color* color28 = nullptr;
	::java::awt::Color* color29 = nullptr;
	::java::awt::Color* color30 = nullptr;
	::java::awt::Color* color31 = nullptr;
	::java::awt::Color* color32 = nullptr;
	::java::awt::Color* color33 = nullptr;
	::java::awt::Color* color34 = nullptr;
	::java::awt::Color* color35 = nullptr;
	::java::awt::Color* color36 = nullptr;
	::java::awt::Color* color37 = nullptr;
	$ObjectArray* componentColors = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BACKGROUND_ENABLED")
#pragma pop_macro("ERRORICON_ENABLED")
#pragma pop_macro("INFORMATIONICON_ENABLED")
#pragma pop_macro("QUESTIONICON_ENABLED")
#pragma pop_macro("WARNINGICON_ENABLED")

#endif // _javax_swing_plaf_nimbus_OptionPanePainter_h_