#ifndef _sun_font_DelegatingShape_h_
#define _sun_font_DelegatingShape_h_
//$ class sun.font.DelegatingShape
//$ extends java.awt.Shape

#include <java/awt/Shape.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class PathIterator;
			class Point2D;
			class Rectangle2D;
		}
	}
}

namespace sun {
	namespace font {

class DelegatingShape : public ::java::awt::Shape {
	$class(DelegatingShape, $NO_CLASS_INIT, ::java::awt::Shape)
public:
	DelegatingShape();
	void init$(::java::awt::Shape* delegate);
	virtual bool contains(double x, double y) override;
	virtual bool contains(::java::awt::geom::Point2D* p) override;
	virtual bool contains(double x, double y, double w, double h) override;
	virtual bool contains(::java::awt::geom::Rectangle2D* r) override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::geom::Rectangle2D* getBounds2D() override;
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at) override;
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at, double flatness) override;
	virtual bool intersects(double x, double y, double w, double h) override;
	virtual bool intersects(::java::awt::geom::Rectangle2D* r) override;
	::java::awt::Shape* delegate = nullptr;
};

	} // font
} // sun

#endif // _sun_font_DelegatingShape_h_