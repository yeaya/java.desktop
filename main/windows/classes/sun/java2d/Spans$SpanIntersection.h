#ifndef _sun_java2d_Spans$SpanIntersection_h_
#define _sun_java2d_Spans$SpanIntersection_h_
//$ class sun.java2d.Spans$SpanIntersection
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace sun {
	namespace java2d {
		class Spans$Span;
	}
}

namespace sun {
	namespace java2d {

class Spans$SpanIntersection : public ::java::util::Comparator {
	$class(Spans$SpanIntersection, 0, ::java::util::Comparator)
public:
	Spans$SpanIntersection();
	void init$();
	virtual int32_t compare(::sun::java2d::Spans$Span* span1, ::sun::java2d::Spans$Span* span2);
	virtual int32_t compare(Object$* span1, Object$* span2) override;
	static ::sun::java2d::Spans$SpanIntersection* instance;
};

	} // java2d
} // sun

#endif // _sun_java2d_Spans$SpanIntersection_h_