#ifndef _sun_java2d_ReentrantContextProvider_h_
#define _sun_java2d_ReentrantContextProvider_h_
//$ class sun.java2d.ReentrantContextProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("REF_HARD")
#undef REF_HARD
#pragma push_macro("REF_SOFT")
#undef REF_SOFT
#pragma push_macro("REF_WEAK")
#undef REF_WEAK
#pragma push_macro("USAGE_CLQ")
#undef USAGE_CLQ
#pragma push_macro("USAGE_TL_INACTIVE")
#undef USAGE_TL_INACTIVE
#pragma push_macro("USAGE_TL_IN_USE")
#undef USAGE_TL_IN_USE

namespace java {
	namespace lang {
		namespace ref {
			class Reference;
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

class ReentrantContextProvider : public ::java::lang::Object {
	$class(ReentrantContextProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReentrantContextProvider();
	void init$(int32_t refType);
	virtual ::sun::java2d::ReentrantContext* acquire() {return nullptr;}
	::java::lang::ref::Reference* getOrCreateReference(::sun::java2d::ReentrantContext* ctx);
	virtual ::sun::java2d::ReentrantContext* newContext() {return nullptr;}
	virtual void release(::sun::java2d::ReentrantContext* ctx) {}
	static const int8_t USAGE_TL_INACTIVE = 0;
	static const int8_t USAGE_TL_IN_USE = 1;
	static const int8_t USAGE_CLQ = 2;
	static const int32_t REF_HARD = 0;
	static const int32_t REF_SOFT = 1;
	static const int32_t REF_WEAK = 2;
	int32_t refType = 0;
};

	} // java2d
} // sun

#pragma pop_macro("REF_HARD")
#pragma pop_macro("REF_SOFT")
#pragma pop_macro("REF_WEAK")
#pragma pop_macro("USAGE_CLQ")
#pragma pop_macro("USAGE_TL_INACTIVE")
#pragma pop_macro("USAGE_TL_IN_USE")

#endif // _sun_java2d_ReentrantContextProvider_h_