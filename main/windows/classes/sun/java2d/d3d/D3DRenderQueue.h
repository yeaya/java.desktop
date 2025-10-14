#ifndef _sun_java2d_d3d_D3DRenderQueue_h_
#define _sun_java2d_d3d_D3DRenderQueue_h_
//$ class sun.java2d.d3d.D3DRenderQueue
//$ extends sun.java2d.pipe.RenderQueue

#include <sun/java2d/pipe/RenderQueue.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DRenderQueue : public ::sun::java2d::pipe::RenderQueue {
	$class(D3DRenderQueue, $NO_CLASS_INIT, ::sun::java2d::pipe::RenderQueue)
public:
	D3DRenderQueue();
	using ::sun::java2d::pipe::RenderQueue::flushNow;
	void init$();
	static void disposeGraphicsConfig(int64_t pConfigInfo);
	virtual void flushAndInvokeNow(::java::lang::Runnable* r) override;
	void flushBuffer(int64_t buf, int32_t limit, ::java::lang::Runnable* task);
	void flushBuffer(::java::lang::Runnable* task);
	virtual void flushNow() override;
	static ::sun::java2d::d3d::D3DRenderQueue* getInstance();
	static bool isRenderQueueThread();
	static void restoreDevices();
	static void sync();
	static ::sun::java2d::d3d::D3DRenderQueue* theInstance;
	static $Thread* rqThread;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DRenderQueue_h_