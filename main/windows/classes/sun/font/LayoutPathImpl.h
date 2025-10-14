#ifndef _sun_font_LayoutPathImpl_h_
#define _sun_font_LayoutPathImpl_h_
//$ class sun.font.LayoutPathImpl
//$ extends java.awt.font.LayoutPath

#include <java/awt/font/LayoutPath.h>
#include <java/lang/Array.h>

#pragma push_macro("LOG")
#undef LOG
#pragma push_macro("LOGMAP")
#undef LOGMAP

namespace java {
	namespace awt {
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Point2D;
		}
	}
}
namespace java {
	namespace util {
		class Formatter;
	}
}
namespace sun {
	namespace font {
		class LayoutPathImpl$EndType;
	}
}

namespace sun {
	namespace font {

class LayoutPathImpl : public ::java::awt::font::LayoutPath {
	$class(LayoutPathImpl, 0, ::java::awt::font::LayoutPath)
public:
	LayoutPathImpl();
	void init$();
	virtual double end() {return 0.0;}
	static ::sun::font::LayoutPathImpl* getPath(::sun::font::LayoutPathImpl$EndType* etype, $doubles* coords);
	virtual double length() {return 0.0;}
	virtual ::java::awt::Shape* mapShape(::java::awt::Shape* s) {return nullptr;}
	using ::java::awt::font::LayoutPath::pathToPoint;
	virtual ::java::awt::geom::Point2D* pathToPoint(double a, double o, bool preceding);
	virtual void pathToPoint(double a, double o, bool preceding, ::java::awt::geom::Point2D* pt);
	using ::java::awt::font::LayoutPath::pointToPath;
	virtual ::java::awt::geom::Point2D* pointToPath(double x, double y);
	virtual void pointToPath(double x, double y, ::java::awt::geom::Point2D* pt);
	virtual double start() {return 0.0;}
	static const bool LOGMAP = false;
	static ::java::util::Formatter* LOG;
};

	} // font
} // sun

#pragma pop_macro("LOG")
#pragma pop_macro("LOGMAP")

#endif // _sun_font_LayoutPathImpl_h_