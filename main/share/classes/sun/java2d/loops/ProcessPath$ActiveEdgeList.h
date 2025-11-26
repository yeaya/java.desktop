#ifndef _sun_java2d_loops_ProcessPath$ActiveEdgeList_h_
#define _sun_java2d_loops_ProcessPath$ActiveEdgeList_h_
//$ class sun.java2d.loops.ProcessPath$ActiveEdgeList
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		namespace loops {
			class ProcessPath$Edge;
			class ProcessPath$Point;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class ProcessPath$ActiveEdgeList : public ::java::lang::Object {
	$class(ProcessPath$ActiveEdgeList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ProcessPath$ActiveEdgeList();
	void init$();
	virtual void delete$(::sun::java2d::loops::ProcessPath$Edge* e);
	virtual void insert(::sun::java2d::loops::ProcessPath$Point* pnt, int32_t cy);
	virtual bool isEmpty();
	virtual void sort();
	::sun::java2d::loops::ProcessPath$Edge* head = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_ProcessPath$ActiveEdgeList_h_