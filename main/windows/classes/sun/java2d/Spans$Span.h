#ifndef _sun_java2d_Spans$Span_h_
#define _sun_java2d_Spans$Span_h_
//$ class sun.java2d.Spans$Span
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace sun {
	namespace java2d {

class Spans$Span : public ::java::lang::Comparable {
	$class(Spans$Span, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	Spans$Span();
	void init$(float start, float end);
	virtual int32_t compareTo(::sun::java2d::Spans$Span* otherSpan);
	virtual int32_t compareTo(Object$* otherSpan) override;
	virtual bool contains(float pos);
	float getEnd();
	float getStart();
	void setEnd(float end);
	void setStart(float start);
	virtual bool subsume(::sun::java2d::Spans$Span* otherSpan);
	virtual $String* toString() override;
	float mStart = 0.0;
	float mEnd = 0.0;
};

	} // java2d
} // sun

#endif // _sun_java2d_Spans$Span_h_