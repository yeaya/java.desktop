#ifndef _sun_java2d_loops_ProcessPath$FillData_h_
#define _sun_java2d_loops_ProcessPath$FillData_h_
//$ class sun.java2d.loops.ProcessPath$FillData
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class ProcessPath$FillData : public ::java::lang::Object {
	$class(ProcessPath$FillData, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ProcessPath$FillData();
	void init$();
	virtual void addPoint(int32_t x, int32_t y, bool lastPoint);
	virtual bool isEmpty();
	virtual bool isEnded();
	virtual bool setEnded();
	::java::util::List* plgPnts = nullptr;
	int32_t plgYMin = 0;
	int32_t plgYMax = 0;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_ProcessPath$FillData_h_