#ifndef _sun_font_LayoutPathImpl$SegmentPath$Segment_h_
#define _sun_font_LayoutPathImpl$SegmentPath$Segment_h_
//$ class sun.font.LayoutPathImpl$SegmentPath$Segment
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace geom {
			class GeneralPath;
		}
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

class LayoutPathImpl$SegmentPath$Segment : public ::java::lang::Object {
	$class(LayoutPathImpl$SegmentPath$Segment, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LayoutPathImpl$SegmentPath$Segment();
	void init$(::sun::font::LayoutPathImpl$SegmentPath* this$0, int32_t ix);
	virtual void close();
	virtual void init();
	virtual void line(::sun::font::LayoutPathImpl$SegmentPath$LineInfo* li);
	virtual void move();
	::sun::font::LayoutPathImpl$SegmentPath* this$0 = nullptr;
	int32_t ix = 0;
	double ux = 0.0;
	double uy = 0.0;
	::sun::font::LayoutPathImpl$SegmentPath$LineInfo* temp = nullptr;
	bool broken = false;
	double cx = 0.0;
	double cy = 0.0;
	::java::awt::geom::GeneralPath* gp = nullptr;
};

	} // font
} // sun

#endif // _sun_font_LayoutPathImpl$SegmentPath$Segment_h_