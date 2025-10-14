#ifndef _javax_swing_plaf_nimbus_ProgressBarPainter_h_
#define _javax_swing_plaf_nimbus_ProgressBarPainter_h_
//$ class javax.swing.plaf.nimbus.ProgressBarPainter
//$ extends javax.swing.plaf.nimbus.AbstractRegionPainter

#include <java/lang/Array.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#pragma push_macro("BACKGROUND_DISABLED")
#undef BACKGROUND_DISABLED
#pragma push_macro("BACKGROUND_ENABLED")
#undef BACKGROUND_ENABLED
#pragma push_macro("FOREGROUND_DISABLED")
#undef FOREGROUND_DISABLED
#pragma push_macro("FOREGROUND_DISABLED_FINISHED")
#undef FOREGROUND_DISABLED_FINISHED
#pragma push_macro("FOREGROUND_DISABLED_INDETERMINATE")
#undef FOREGROUND_DISABLED_INDETERMINATE
#pragma push_macro("FOREGROUND_ENABLED")
#undef FOREGROUND_ENABLED
#pragma push_macro("FOREGROUND_ENABLED_FINISHED")
#undef FOREGROUND_ENABLED_FINISHED
#pragma push_macro("FOREGROUND_ENABLED_INDETERMINATE")
#undef FOREGROUND_ENABLED_INDETERMINATE

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

class ProgressBarPainter : public ::javax::swing::plaf::nimbus::AbstractRegionPainter {
	$class(ProgressBarPainter, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::AbstractRegionPainter)
public:
	ProgressBarPainter();
	void init$(::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, int32_t state);
	::java::awt::Paint* decodeGradient1(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient10(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient11(::java::awt::Shape* s);
	::java::awt::Paint* decodeGradient12(::java::awt::Shape* s);
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
	::java::awt::geom::Rectangle2D* decodeRect1();
	::java::awt::geom::Rectangle2D* decodeRect2();
	::java::awt::geom::Rectangle2D* decodeRect3();
	::java::awt::geom::Rectangle2D* decodeRect4();
	::java::awt::geom::Rectangle2D* decodeRect5();
	::java::awt::geom::Rectangle2D* decodeRect6();
	::java::awt::geom::Rectangle2D* decodeRect7();
	::java::awt::geom::Rectangle2D* decodeRect8();
	::java::awt::geom::Rectangle2D* decodeRect9();
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) override;
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() override;
	void paintBackgroundDisabled(::java::awt::Graphics2D* g);
	void paintBackgroundEnabled(::java::awt::Graphics2D* g);
	void paintForegroundDisabled(::java::awt::Graphics2D* g);
	void paintForegroundDisabledAndFinished(::java::awt::Graphics2D* g);
	void paintForegroundDisabledAndIndeterminate(::java::awt::Graphics2D* g);
	void paintForegroundEnabled(::java::awt::Graphics2D* g);
	void paintForegroundEnabledAndFinished(::java::awt::Graphics2D* g);
	void paintForegroundEnabledAndIndeterminate(::java::awt::Graphics2D* g);
	static const int32_t BACKGROUND_ENABLED = 1;
	static const int32_t BACKGROUND_DISABLED = 2;
	static const int32_t FOREGROUND_ENABLED = 3;
	static const int32_t FOREGROUND_ENABLED_FINISHED = 4;
	static const int32_t FOREGROUND_ENABLED_INDETERMINATE = 5;
	static const int32_t FOREGROUND_DISABLED = 6;
	static const int32_t FOREGROUND_DISABLED_FINISHED = 7;
	static const int32_t FOREGROUND_DISABLED_INDETERMINATE = 8;
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
	::java::awt::Color* color38 = nullptr;
	::java::awt::Color* color39 = nullptr;
	::java::awt::Color* color40 = nullptr;
	::java::awt::Color* color41 = nullptr;
	::java::awt::Color* color42 = nullptr;
	::java::awt::Color* color43 = nullptr;
	::java::awt::Color* color44 = nullptr;
	::java::awt::Color* color45 = nullptr;
	::java::awt::Color* color46 = nullptr;
	::java::awt::Color* color47 = nullptr;
	::java::awt::Color* color48 = nullptr;
	::java::awt::Color* color49 = nullptr;
	::java::awt::Color* color50 = nullptr;
	$ObjectArray* componentColors = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BACKGROUND_DISABLED")
#pragma pop_macro("BACKGROUND_ENABLED")
#pragma pop_macro("FOREGROUND_DISABLED")
#pragma pop_macro("FOREGROUND_DISABLED_FINISHED")
#pragma pop_macro("FOREGROUND_DISABLED_INDETERMINATE")
#pragma pop_macro("FOREGROUND_ENABLED")
#pragma pop_macro("FOREGROUND_ENABLED_FINISHED")
#pragma pop_macro("FOREGROUND_ENABLED_INDETERMINATE")

#endif // _javax_swing_plaf_nimbus_ProgressBarPainter_h_