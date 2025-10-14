#ifndef _sun_java2d_loops_ProcessPath$Edge_h_
#define _sun_java2d_loops_ProcessPath$Edge_h_
//$ class sun.java2d.loops.ProcessPath$Edge
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		namespace loops {
			class ProcessPath$Point;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class ProcessPath$Edge : public ::java::lang::Object {
	$class(ProcessPath$Edge, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ProcessPath$Edge();
	void init$(::sun::java2d::loops::ProcessPath$Point* p, int32_t x, int32_t dx, int32_t dir);
	int32_t x = 0;
	int32_t dx = 0;
	::sun::java2d::loops::ProcessPath$Point* p = nullptr;
	int32_t dir = 0;
	::sun::java2d::loops::ProcessPath$Edge* prev = nullptr;
	::sun::java2d::loops::ProcessPath$Edge* next = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_ProcessPath$Edge_h_