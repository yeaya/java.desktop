#ifndef _com_sun_java_swing_plaf_gtk_Metacity$RoundRectClipShape_h_
#define _com_sun_java_swing_plaf_gtk_Metacity$RoundRectClipShape_h_
//$ class com.sun.java.swing.plaf.gtk.Metacity$RoundRectClipShape
//$ extends java.awt.geom.RectangularShape

#include <java/awt/geom/RectangularShape.h>

#pragma push_macro("BOTTOM_LEFT")
#undef BOTTOM_LEFT
#pragma push_macro("BOTTOM_RIGHT")
#undef BOTTOM_RIGHT
#pragma push_macro("TOP_LEFT")
#undef TOP_LEFT
#pragma push_macro("TOP_RIGHT")
#undef TOP_RIGHT

namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class PathIterator;
			class Rectangle2D;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class Metacity$RoundRectClipShape : public ::java::awt::geom::RectangularShape {
	$class(Metacity$RoundRectClipShape, $NO_CLASS_INIT, ::java::awt::geom::RectangularShape)
public:
	Metacity$RoundRectClipShape();
	using ::java::awt::geom::RectangularShape::contains;
	using ::java::awt::geom::RectangularShape::getPathIterator;
	void init$();
	void init$(int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcw, int32_t arch, int32_t corners);
	int32_t classify(double coord, double left, double right, double arcsize);
	virtual bool contains(double x, double y) override;
	virtual bool contains(double x, double y, double w, double h) override;
	virtual double getArcHeight();
	virtual double getArcWidth();
	virtual ::java::awt::geom::Rectangle2D* getBounds2D() override;
	virtual int32_t getCornerFlags();
	virtual double getHeight() override;
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at) override;
	virtual double getWidth() override;
	virtual double getX() override;
	virtual double getY() override;
	using ::java::awt::geom::RectangularShape::intersects;
	virtual bool intersects(double x, double y, double w, double h) override;
	virtual bool isEmpty() override;
	using ::java::awt::geom::RectangularShape::setFrame;
	virtual void setFrame(double x, double y, double w, double h) override;
	virtual void setRoundedRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcw, int32_t arch, int32_t corners);
	static const int32_t TOP_LEFT = 1;
	static const int32_t TOP_RIGHT = 2;
	static const int32_t BOTTOM_LEFT = 4;
	static const int32_t BOTTOM_RIGHT = 8;
	int32_t x = 0;
	int32_t y = 0;
	int32_t width = 0;
	int32_t height = 0;
	int32_t arcwidth = 0;
	int32_t archeight = 0;
	int32_t corners = 0;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("BOTTOM_LEFT")
#pragma pop_macro("BOTTOM_RIGHT")
#pragma pop_macro("TOP_LEFT")
#pragma pop_macro("TOP_RIGHT")

#endif // _com_sun_java_swing_plaf_gtk_Metacity$RoundRectClipShape_h_