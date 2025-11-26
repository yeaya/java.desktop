#ifndef _sun_java2d_Spans_h_
#define _sun_java2d_Spans_h_
//$ class sun.java2d.Spans
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace java2d {

class Spans : public ::java::lang::Object {
	$class(Spans, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Spans();
	void init$();
	virtual void add(float start, float end);
	virtual void addInfinite();
	virtual bool intersects(float start, float end);
	void sortAndCollapse();
	static const int32_t kMaxAddsSinceSort = 256;
	::java::util::List* mSpans = nullptr;
	int32_t mAddsSinceSort = 0;
};

	} // java2d
} // sun

#endif // _sun_java2d_Spans_h_