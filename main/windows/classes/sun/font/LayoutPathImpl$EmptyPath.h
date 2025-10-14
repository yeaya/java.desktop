#ifndef _sun_font_LayoutPathImpl$EmptyPath_h_
#define _sun_font_LayoutPathImpl$EmptyPath_h_
//$ class sun.font.LayoutPathImpl$EmptyPath
//$ extends sun.font.LayoutPathImpl

#include <sun/font/LayoutPathImpl.h>

namespace java {
	namespace awt {
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Point2D;
		}
	}
}

namespace sun {
	namespace font {

class LayoutPathImpl$EmptyPath : public ::sun::font::LayoutPathImpl {
	$class(LayoutPathImpl$EmptyPath, $NO_CLASS_INIT, ::sun::font::LayoutPathImpl)
public:
	LayoutPathImpl$EmptyPath();
	void init$(::java::awt::geom::AffineTransform* tx);
	virtual double end() override;
	virtual double length() override;
	virtual ::java::awt::Shape* mapShape(::java::awt::Shape* s) override;
	using ::sun::font::LayoutPathImpl::pathToPoint;
	virtual void pathToPoint(::java::awt::geom::Point2D* location, bool preceding, ::java::awt::geom::Point2D* point) override;
	using ::sun::font::LayoutPathImpl::pointToPath;
	virtual bool pointToPath(::java::awt::geom::Point2D* pt, ::java::awt::geom::Point2D* result) override;
	virtual double start() override;
	::java::awt::geom::AffineTransform* tx = nullptr;
};

	} // font
} // sun

#endif // _sun_font_LayoutPathImpl$EmptyPath_h_