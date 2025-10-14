#ifndef _sun_java2d_opengl_OGLRenderQueue_h_
#define _sun_java2d_opengl_OGLRenderQueue_h_
//$ class sun.java2d.opengl.OGLRenderQueue
//$ extends sun.java2d.pipe.RenderQueue

#include <sun/java2d/pipe/RenderQueue.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace sun {
	namespace java2d {
		namespace opengl {
			class OGLRenderQueue$QueueFlusher;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class RenderBuffer;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class OGLRenderQueue : public ::sun::java2d::pipe::RenderQueue {
	$class(OGLRenderQueue, $NO_CLASS_INIT, ::sun::java2d::pipe::RenderQueue)
public:
	OGLRenderQueue();
	using ::sun::java2d::pipe::RenderQueue::flushNow;
	void init$();
	static ::sun::java2d::pipe::RenderBuffer* access$000(::sun::java2d::opengl::OGLRenderQueue* x0);
	static void disposeGraphicsConfig(int64_t pConfigInfo);
	virtual void flushAndInvokeNow(::java::lang::Runnable* r) override;
	void flushBuffer(int64_t buf, int32_t limit);
	void flushBuffer();
	virtual void flushNow() override;
	static ::sun::java2d::opengl::OGLRenderQueue* getInstance();
	static bool isQueueFlusherThread();
	::sun::java2d::opengl::OGLRenderQueue$QueueFlusher* lambda$new$0();
	static void sync();
	static ::sun::java2d::opengl::OGLRenderQueue* theInstance;
	::sun::java2d::opengl::OGLRenderQueue$QueueFlusher* flusher = nullptr;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_OGLRenderQueue_h_