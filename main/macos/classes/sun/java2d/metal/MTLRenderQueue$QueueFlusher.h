#ifndef _sun_java2d_metal_MTLRenderQueue$QueueFlusher_h_
#define _sun_java2d_metal_MTLRenderQueue$QueueFlusher_h_
//$ class sun.java2d.metal.MTLRenderQueue$QueueFlusher
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
		namespace metal {
			class MTLRenderQueue;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace metal {

class MTLRenderQueue$QueueFlusher : public ::java::lang::Runnable {
	$class(MTLRenderQueue$QueueFlusher, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	MTLRenderQueue$QueueFlusher();
	void init$(::sun::java2d::metal::MTLRenderQueue* this$0);
	virtual void flushAndInvokeNow(::java::lang::Runnable* task);
	virtual void flushNow();
	virtual void run() override;
	::sun::java2d::metal::MTLRenderQueue* this$0 = nullptr;
	bool needsFlush = false;
	::java::lang::Runnable* task = nullptr;
	::java::lang::Error* error = nullptr;
	$Thread* thread = nullptr;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLRenderQueue$QueueFlusher_h_