#ifndef _sun_java2d_ReentrantContextProviderTL$1_h_
#define _sun_java2d_ReentrantContextProviderTL$1_h_
//$ class sun.java2d.ReentrantContextProviderTL$1
//$ extends sun.java2d.ReentrantContextProviderCLQ

#include <sun/java2d/ReentrantContextProviderCLQ.h>

namespace sun {
	namespace java2d {
		class ReentrantContext;
		class ReentrantContextProviderTL;
	}
}

namespace sun {
	namespace java2d {

class ReentrantContextProviderTL$1 : public ::sun::java2d::ReentrantContextProviderCLQ {
	$class(ReentrantContextProviderTL$1, $NO_CLASS_INIT, ::sun::java2d::ReentrantContextProviderCLQ)
public:
	ReentrantContextProviderTL$1();
	void init$(::sun::java2d::ReentrantContextProviderTL* this$0, int32_t refType, ::sun::java2d::ReentrantContextProviderTL* val$parent);
	virtual ::sun::java2d::ReentrantContext* newContext() override;
	::sun::java2d::ReentrantContextProviderTL* this$0 = nullptr;
	::sun::java2d::ReentrantContextProviderTL* val$parent = nullptr;
};

	} // java2d
} // sun

#endif // _sun_java2d_ReentrantContextProviderTL$1_h_