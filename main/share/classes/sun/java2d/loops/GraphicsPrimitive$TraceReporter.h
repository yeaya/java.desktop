#ifndef _sun_java2d_loops_GraphicsPrimitive$TraceReporter_h_
#define _sun_java2d_loops_GraphicsPrimitive$TraceReporter_h_
//$ class sun.java2d.loops.GraphicsPrimitive$TraceReporter
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		class Void;
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class GraphicsPrimitive$TraceReporter : public ::java::lang::Runnable {
	$class(GraphicsPrimitive$TraceReporter, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	GraphicsPrimitive$TraceReporter();
	void init$();
	static ::java::lang::Void* lambda$setShutdownHook$0();
	virtual void run() override;
	static void setShutdownHook();
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_GraphicsPrimitive$TraceReporter_h_