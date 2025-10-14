#ifndef _javax_swing_plaf_nimbus_AbstractRegionPainter_h_
#define _javax_swing_plaf_nimbus_AbstractRegionPainter_h_
//$ class javax.swing.plaf.nimbus.AbstractRegionPainter
//$ extends javax.swing.Painter

#include <java/lang/Array.h>
#include <javax/swing/Painter.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics2D;
		class GraphicsConfiguration;
		class LinearGradientPaint;
		class RadialGradientPaint;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class VolatileImage;
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

class $import AbstractRegionPainter : public ::javax::swing::Painter {
	$class(AbstractRegionPainter, $NO_CLASS_INIT, ::javax::swing::Painter)
public:
	AbstractRegionPainter();
	void init$();
	float clamp(float value);
	int32_t clamp(int32_t value);
	virtual void configureGraphics(::java::awt::Graphics2D* g);
	float decodeAnchorX(float x, float dx);
	float decodeAnchorY(float y, float dy);
	::java::awt::Color* decodeColor($String* key, float hOffset, float sOffset, float bOffset, int32_t aOffset);
	::java::awt::Color* decodeColor(::java::awt::Color* color1, ::java::awt::Color* color2, float midPoint);
	::java::awt::LinearGradientPaint* decodeGradient(float x1, float y1, float x2, float y2, $floats* midpoints, $Array<::java::awt::Color>* colors);
	::java::awt::RadialGradientPaint* decodeRadialGradient(float x, float y, float r, $floats* midpoints, $Array<::java::awt::Color>* colors);
	float decodeX(float x);
	float decodeY(float y);
	virtual void doPaint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {}
	::java::awt::Color* getComponentColor(::javax::swing::JComponent* c, $String* property, ::java::awt::Color* defaultColor, float saturationOffset, float brightnessOffset, int32_t alphaOffset);
	virtual $ObjectArray* getExtendedCacheKeys(::javax::swing::JComponent* c);
	::java::awt::image::VolatileImage* getImage(::java::awt::GraphicsConfiguration* config, ::javax::swing::JComponent* c, int32_t w, int32_t h, $ObjectArray* extendedCacheKeys);
	virtual ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* getPaintContext() {return nullptr;}
	void paint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t w, int32_t h);
	virtual void paint(::java::awt::Graphics2D* g, Object$* c, int32_t w, int32_t h) override;
	void paint0(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys);
	void paintWith9SquareCaching(::java::awt::Graphics2D* g, ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx, ::javax::swing::JComponent* c, int32_t w, int32_t h, $ObjectArray* extendedCacheKeys);
	void paintWithFixedSizeCaching(::java::awt::Graphics2D* g, ::javax::swing::JComponent* c, int32_t w, int32_t h, $ObjectArray* extendedCacheKeys);
	void prepare(float w, float h);
	::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext* ctx = nullptr;
	float f = 0.0;
	float leftWidth = 0.0;
	float topHeight = 0.0;
	float centerWidth = 0.0;
	float centerHeight = 0.0;
	float rightWidth = 0.0;
	float bottomHeight = 0.0;
	float leftScale = 0.0;
	float topScale = 0.0;
	float centerHScale = 0.0;
	float centerVScale = 0.0;
	float rightScale = 0.0;
	float bottomScale = 0.0;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_AbstractRegionPainter_h_