#ifndef _sun_java2d_ReentrantContextProviderCLQ_h_
#define _sun_java2d_ReentrantContextProviderCLQ_h_
//$ class sun.java2d.ReentrantContextProviderCLQ
//$ extends sun.java2d.ReentrantContextProvider

#include <sun/java2d/ReentrantContextProvider.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentLinkedQueue;
		}
	}
}
namespace sun {
	namespace java2d {
		class ReentrantContext;
	}
}

namespace sun {
	namespace java2d {

class ReentrantContextProviderCLQ : public ::sun::java2d::ReentrantContextProvider {
	$class(ReentrantContextProviderCLQ, $NO_CLASS_INIT, ::sun::java2d::ReentrantContextProvider)
public:
	ReentrantContextProviderCLQ();
	void init$(int32_t refType);
	virtual ::sun::java2d::ReentrantContext* acquire() override;
	virtual void release(::sun::java2d::ReentrantContext* ctx) override;
	::java::util::concurrent::ConcurrentLinkedQueue* ctxQueue = nullptr;
};

	} // java2d
} // sun

#endif // _sun_java2d_ReentrantContextProviderCLQ_h_