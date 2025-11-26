#ifndef _sun_font_LayoutPathImpl$SegmentPath_h_
#define _sun_font_LayoutPathImpl$SegmentPath_h_
//$ class sun.font.LayoutPathImpl$SegmentPath
//$ extends sun.font.LayoutPathImpl

#include <java/lang/Array.h>
#include <sun/font/LayoutPathImpl.h>

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
namespace sun {
	namespace font {
		class LayoutPathImpl$EndType;
	}
}

namespace sun {
	namespace font {

class LayoutPathImpl$SegmentPath : public ::sun::font::LayoutPathImpl {
	$class(LayoutPathImpl$SegmentPath, $NO_CLASS_INIT, ::sun::font::LayoutPathImpl)
public:
	LayoutPathImpl$SegmentPath();
	void init$($doubles* data, ::sun::font::LayoutPathImpl$EndType* etype);
	void calcoffset(int32_t index, bool doExtend, ::java::awt::geom::Point2D* result);
	virtual double end() override;
	static ::sun::font::LayoutPathImpl$SegmentPath* get(::sun::font::LayoutPathImpl$EndType* etype, $doubles* pts);
	double getClosedAdvance(double a, bool preceding);
	int32_t getSegmentIndexForAdvance(double a, bool preceding);
	virtual double length() override;
	int32_t locateAndGetIndex(::java::awt::geom::Point2D* loc, bool preceding, ::java::awt::geom::Point2D* result);
	void map(int32_t seg, double a, double o, ::java::awt::geom::Point2D* pt);
	virtual ::java::awt::Shape* mapShape(::java::awt::Shape* s) override;
	using ::sun::font::LayoutPathImpl::pathToPoint;
	virtual void pathToPoint(::java::awt::geom::Point2D* location, bool preceding, ::java::awt::geom::Point2D* point) override;
	using ::sun::font::LayoutPathImpl::pointToPath;
	virtual bool pointToPath(::java::awt::geom::Point2D* pt, ::java::awt::geom::Point2D* result) override;
	virtual double start() override;
	virtual $String* toString() override;
	$doubles* data = nullptr;
	::sun::font::LayoutPathImpl$EndType* etype = nullptr;
};

	} // font
} // sun

#endif // _sun_font_LayoutPathImpl$SegmentPath_h_