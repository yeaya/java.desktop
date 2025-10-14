#ifndef _sun_java2d_ReentrantContextProviderTL_h_
#define _sun_java2d_ReentrantContextProviderTL_h_
//$ class sun.java2d.ReentrantContextProviderTL
//$ extends sun.java2d.ReentrantContextProvider

#include <sun/java2d/ReentrantContextProvider.h>

namespace java {
	namespace lang {
		class ThreadLocal;
	}
}
namespace sun {
	namespace java2d {
		class ReentrantContext;
		class ReentrantContextProviderCLQ;
	}
}

namespace sun {
	namespace java2d {

class ReentrantContextProviderTL : public ::sun::java2d::ReentrantContextProvider {
	$class(ReentrantContextProviderTL, $NO_CLASS_INIT, ::sun::java2d::ReentrantContextProvider)
public:
	ReentrantContextProviderTL();
	void init$(int32_t refType);
	void init$(int32_t refTypeTL, int32_t refTypeCLQ);
	virtual ::sun::java2d::ReentrantContext* acquire() override;
	virtual void release(::sun::java2d::ReentrantContext* ctx) override;
	::java::lang::ThreadLocal* ctxTL = nullptr;
	::sun::java2d::ReentrantContextProviderCLQ* ctxProviderCLQ = nullptr;
};

	} // java2d
} // sun

#endif // _sun_java2d_ReentrantContextProviderTL_h_