#ifndef _sun_java2d_opengl_OGLRenderQueue$QueueFlusher_h_
#define _sun_java2d_opengl_OGLRenderQueue$QueueFlusher_h_
//$ class sun.java2d.opengl.OGLRenderQueue$QueueFlusher
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		class Error;
		class Thread;
	}
}
namespace sun {
	namespace java2d {
		namespace opengl {
			class OGLRenderQueue;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class OGLRenderQueue$QueueFlusher : public ::java::lang::Runnable {
	$class(OGLRenderQueue$QueueFlusher, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	OGLRenderQueue$QueueFlusher();
	void init$(::sun::java2d::opengl::OGLRenderQueue* this$0);
	virtual void flushAndInvokeNow(::java::lang::Runnable* task);
	virtual void flushNow();
	virtual void run() override;
	::sun::java2d::opengl::OGLRenderQueue* this$0 = nullptr;
	bool needsFlush = false;
	::java::lang::Runnable* task = nullptr;
	::java::lang::Error* error = nullptr;
	$Thread* thread = nullptr;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_OGLRenderQueue$QueueFlusher_h_