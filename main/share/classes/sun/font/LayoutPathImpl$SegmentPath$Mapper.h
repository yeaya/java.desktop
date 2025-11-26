#ifndef _sun_font_LayoutPathImpl$SegmentPath$Mapper_h_
#define _sun_font_LayoutPathImpl$SegmentPath$Mapper_h_
//$ class sun.font.LayoutPathImpl$SegmentPath$Mapper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Point2D$Double;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace sun {
	namespace font {
		class LayoutPathImpl$SegmentPath;
		class LayoutPathImpl$SegmentPath$LineInfo;
	}
}

namespace sun {
	namespace font {

class LayoutPathImpl$SegmentPath$Mapper : public ::java::lang::Object {
	$class(LayoutPathImpl$SegmentPath$Mapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LayoutPathImpl$SegmentPath$Mapper();
	void init$(::sun::font::LayoutPathImpl$SegmentPath* this$0);
	virtual void close();
	virtual void init();
	virtual void lineTo(double x, double y);
	virtual ::java::awt::Shape* mapShape(::java::awt::Shape* s);
	virtual void moveTo(double x, double y);
	::sun::font::LayoutPathImpl$SegmentPath* this$0 = nullptr;
	::sun::font::LayoutPathImpl$SegmentPath$LineInfo* li = nullptr;
	::java::util::ArrayList* segments = nullptr;
	::java::awt::geom::Point2D$Double* mpt = nullptr;
	::java::awt::geom::Point2D$Double* cpt = nullptr;
	bool haveMT = false;
};

	} // font
} // sun

#endif // _sun_font_LayoutPathImpl$SegmentPath$Mapper_h_