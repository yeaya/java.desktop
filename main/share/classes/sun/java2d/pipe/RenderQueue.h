#ifndef _sun_java2d_pipe_RenderQueue_h_
#define _sun_java2d_pipe_RenderQueue_h_
//$ class sun.java2d.pipe.RenderQueue
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BUFFER_SIZE")
#undef BUFFER_SIZE

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		class Set;
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
		namespace pipe {

class RenderQueue : public ::java::lang::Object {
	$class(RenderQueue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RenderQueue();
	void init$();
	void addReference(Object$* ref);
	void ensureAlignment(int32_t first8ByteValueOffset);
	void ensureCapacity(int32_t opsize);
	void ensureCapacityAndAlignment(int32_t opsize, int32_t first8ByteValueOffset);
	virtual void flushAndInvokeNow(::java::lang::Runnable* task) {}
	virtual void flushNow() {}
	virtual void flushNow(int32_t position);
	::sun::java2d::pipe::RenderBuffer* getBuffer();
	void lock();
	bool tryLock();
	void unlock();
	static const int32_t BUFFER_SIZE = 32000;
	::sun::java2d::pipe::RenderBuffer* buf = nullptr;
	::java::util::Set* refSet = nullptr;
};

		} // pipe
	} // java2d
} // sun

#pragma pop_macro("BUFFER_SIZE")

#endif // _sun_java2d_pipe_RenderQueue_h_