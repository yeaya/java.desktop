#include <sun/java2d/ReentrantContextProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/ReentrantContext.h>
#include <sun/java2d/ReentrantContextProvider$HardReference.h>
#include <jcpp.h>

#undef REF_HARD
#undef REF_SOFT
#undef REF_WEAK
#undef USAGE_CLQ
#undef USAGE_TL_INACTIVE
#undef USAGE_TL_IN_USE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $SoftReference = ::java::lang::ref::SoftReference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $ReentrantContext = ::sun::java2d::ReentrantContext;
using $ReentrantContextProvider$HardReference = ::sun::java2d::ReentrantContextProvider$HardReference;

namespace sun {
	namespace java2d {

$FieldInfo _ReentrantContextProvider_FieldInfo_[] = {
	{"USAGE_TL_INACTIVE", "B", nullptr, $STATIC | $FINAL, $constField(ReentrantContextProvider, USAGE_TL_INACTIVE)},
	{"USAGE_TL_IN_USE", "B", nullptr, $STATIC | $FINAL, $constField(ReentrantContextProvider, USAGE_TL_IN_USE)},
	{"USAGE_CLQ", "B", nullptr, $STATIC | $FINAL, $constField(ReentrantContextProvider, USAGE_CLQ)},
	{"REF_HARD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ReentrantContextProvider, REF_HARD)},
	{"REF_SOFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ReentrantContextProvider, REF_SOFT)},
	{"REF_WEAK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ReentrantContextProvider, REF_WEAK)},
	{"refType", "I", nullptr, $PRIVATE | $FINAL, $field(ReentrantContextProvider, refType)},
	{}
};

$MethodInfo _ReentrantContextProvider_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(ReentrantContextProvider::*)(int32_t)>(&ReentrantContextProvider::init$))},
	{"acquire", "()Lsun/java2d/ReentrantContext;", "()TK;", $PUBLIC | $ABSTRACT},
	{"getOrCreateReference", "(Lsun/java2d/ReentrantContext;)Ljava/lang/ref/Reference;", "(TK;)Ljava/lang/ref/Reference<TK;>;", $PROTECTED | $FINAL, $method(static_cast<$Reference*(ReentrantContextProvider::*)($ReentrantContext*)>(&ReentrantContextProvider::getOrCreateReference))},
	{"newContext", "()Lsun/java2d/ReentrantContext;", "()TK;", $PROTECTED | $ABSTRACT},
	{"release", "(Lsun/java2d/ReentrantContext;)V", "(TK;)V", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ReentrantContextProvider_InnerClassesInfo_[] = {
	{"sun.java2d.ReentrantContextProvider$HardReference", "sun.java2d.ReentrantContextProvider", "HardReference", $STATIC | $FINAL},
	{}
};

$ClassInfo _ReentrantContextProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.ReentrantContextProvider",
	"java.lang.Object",
	nullptr,
	_ReentrantContextProvider_FieldInfo_,
	_ReentrantContextProvider_MethodInfo_,
	"<K:Lsun/java2d/ReentrantContext;>Ljava/lang/Object;",
	nullptr,
	_ReentrantContextProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.ReentrantContextProvider$HardReference"
};

$Object* allocate$ReentrantContextProvider($Class* clazz) {
	return $of($alloc(ReentrantContextProvider));
}

void ReentrantContextProvider::init$(int32_t refType) {
	this->refType = refType;
}

$Reference* ReentrantContextProvider::getOrCreateReference($ReentrantContext* ctx) {
	if ($nc(ctx)->reference == nullptr) {
		switch (this->refType) {
		case ReentrantContextProvider::REF_HARD:
			{
				$set(ctx, reference, $new($ReentrantContextProvider$HardReference, ctx));
				break;
			}
		case ReentrantContextProvider::REF_SOFT:
			{
				$set(ctx, reference, $new($SoftReference, ctx));
				break;
			}
		default:
			{}
		case ReentrantContextProvider::REF_WEAK:
			{
				$set(ctx, reference, $new($WeakReference, ctx));
				break;
			}
		}
	}
	return $nc(ctx)->reference;
}

ReentrantContextProvider::ReentrantContextProvider() {
}

$Class* ReentrantContextProvider::load$($String* name, bool initialize) {
	$loadClass(ReentrantContextProvider, name, initialize, &_ReentrantContextProvider_ClassInfo_, allocate$ReentrantContextProvider);
	return class$;
}

$Class* ReentrantContextProvider::class$ = nullptr;

	} // java2d
} // sun