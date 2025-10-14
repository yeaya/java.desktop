#ifndef _sun_java2d_loops_ProcessPath$Point_h_
#define _sun_java2d_loops_ProcessPath$Point_h_
//$ class sun.java2d.loops.ProcessPath$Point
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		namespace loops {
			class ProcessPath$Edge;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class ProcessPath$Point : public ::java::lang::Object {
	$class(ProcessPath$Point, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ProcessPath$Point();
	void init$(int32_t x, int32_t y, bool lastPoint);
	int32_t x = 0;
	int32_t y = 0;
	bool lastPoint = false;
	::sun::java2d::loops::ProcessPath$Point* prev = nullptr;
	::sun::java2d::loops::ProcessPath$Point* next = nullptr;
	::sun::java2d::loops::ProcessPath$Point* nextByY = nullptr;
	::sun::java2d::loops::ProcessPath$Edge* edge = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_ProcessPath$Point_h_