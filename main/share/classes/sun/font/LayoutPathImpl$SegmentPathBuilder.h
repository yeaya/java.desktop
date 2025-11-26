#ifndef _sun_font_LayoutPathImpl$SegmentPathBuilder_h_
#define _sun_font_LayoutPathImpl$SegmentPathBuilder_h_
//$ class sun.font.LayoutPathImpl$SegmentPathBuilder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace font {
		class LayoutPathImpl$EndType;
		class LayoutPathImpl$SegmentPath;
	}
}

namespace sun {
	namespace font {

class LayoutPathImpl$SegmentPathBuilder : public ::java::lang::Object {
	$class(LayoutPathImpl$SegmentPathBuilder, 0, ::java::lang::Object)
public:
	LayoutPathImpl$SegmentPathBuilder();
	void init$();
	::sun::font::LayoutPathImpl$SegmentPath* build(::sun::font::LayoutPathImpl$EndType* etype, $doubles* pts);
	::sun::font::LayoutPathImpl$SegmentPath* complete();
	::sun::font::LayoutPathImpl$SegmentPath* complete(::sun::font::LayoutPathImpl$EndType* etype);
	void lineTo(double x, double y);
	void moveTo(double x, double y);
	void nextPoint(double x, double y, bool connect);
	void reset(int32_t datalen);
	static bool $assertionsDisabled;
	$doubles* data = nullptr;
	int32_t w = 0;
	double px = 0.0;
	double py = 0.0;
	double a = 0.0;
	bool pconnect = false;
};

	} // font
} // sun

#endif // _sun_font_LayoutPathImpl$SegmentPathBuilder_h_