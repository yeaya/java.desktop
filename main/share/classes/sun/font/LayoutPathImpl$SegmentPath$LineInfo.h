#ifndef _sun_font_LayoutPathImpl$SegmentPath$LineInfo_h_
#define _sun_font_LayoutPathImpl$SegmentPath$LineInfo_h_
//$ class sun.font.LayoutPathImpl$SegmentPath$LineInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace font {
		class LayoutPathImpl$SegmentPath;
	}
}

namespace sun {
	namespace font {

class LayoutPathImpl$SegmentPath$LineInfo : public ::java::lang::Object {
	$class(LayoutPathImpl$SegmentPath$LineInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LayoutPathImpl$SegmentPath$LineInfo();
	void init$(::sun::font::LayoutPathImpl$SegmentPath* this$0);
	virtual bool pin(double lo, double hi, ::sun::font::LayoutPathImpl$SegmentPath$LineInfo* result);
	virtual bool pin(int32_t ix, ::sun::font::LayoutPathImpl$SegmentPath$LineInfo* result);
	virtual void set(double sx, double sy, double lx, double ly);
	virtual void set(::sun::font::LayoutPathImpl$SegmentPath$LineInfo* rhs);
	::sun::font::LayoutPathImpl$SegmentPath* this$0 = nullptr;
	double sx = 0.0;
	double sy = 0.0;
	double lx = 0.0;
	double ly = 0.0;
	double m = 0.0;
};

	} // font
} // sun

#endif // _sun_font_LayoutPathImpl$SegmentPath$LineInfo_h_