#include <sun/java2d/ReentrantContextProviderTL.h>

#include <java/lang/ThreadLocal.h>
#include <java/lang/ref/Reference.h>
#include <sun/java2d/ReentrantContext.h>
#include <sun/java2d/ReentrantContextProvider.h>
#include <sun/java2d/ReentrantContextProviderCLQ.h>
#include <sun/java2d/ReentrantContextProviderTL$1.h>
#include <jcpp.h>

#undef REF_WEAK
#undef USAGE_TL_INACTIVE
#undef USAGE_TL_IN_USE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Reference = ::java::lang::ref::Reference;
using $ReentrantContext = ::sun::java2d::ReentrantContext;
using $ReentrantContextProvider = ::sun::java2d::ReentrantContextProvider;
using $ReentrantContextProviderCLQ = ::sun::java2d::ReentrantContextProviderCLQ;
using $ReentrantContextProviderTL$1 = ::sun::java2d::ReentrantContextProviderTL$1;

namespace sun {
	namespace java2d {

$FieldInfo _ReentrantContextProviderTL_FieldInfo_[] = {
	{"ctxTL", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljava/lang/ref/Reference<TK;>;>;", $PRIVATE | $FINAL, $field(ReentrantContextProviderTL, ctxTL)},
	{"ctxProviderCLQ", "Lsun/java2d/ReentrantContextProviderCLQ;", "Lsun/java2d/ReentrantContextProviderCLQ<TK;>;", $PRIVATE | $FINAL, $field(ReentrantContextProviderTL, ctxProviderCLQ)},
	{}
};

$MethodInfo _ReentrantContextProviderTL_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ReentrantContextProviderTL::*)(int32_t)>(&ReentrantContextProviderTL::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(ReentrantContextProviderTL::*)(int32_t,int32_t)>(&ReentrantContextProviderTL::init$))},
	{"acquire", "()Lsun/java2d/ReentrantContext;", "()TK;", $PUBLIC | $FINAL},
	{"release", "(Lsun/java2d/ReentrantContext;)V", "(TK;)V", $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ReentrantContextProviderTL_InnerClassesInfo_[] = {
	{"sun.java2d.ReentrantContextProviderTL$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ReentrantContextProviderTL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.ReentrantContextProviderTL",
	"sun.java2d.ReentrantContextProvider",
	nullptr,
	_ReentrantContextProviderTL_FieldInfo_,
	_ReentrantContextProviderTL_MethodInfo_,
	"<K:Lsun/java2d/ReentrantContext;>Lsun/java2d/ReentrantContextProvider<TK;>;",
	nullptr,
	_ReentrantContextProviderTL_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.ReentrantContextProviderTL$1"
};

$Object* allocate$ReentrantContextProviderTL($Class* clazz) {
	return $of($alloc(ReentrantContextProviderTL));
}

void ReentrantContextProviderTL::init$(int32_t refType) {
	ReentrantContextProviderTL::init$(refType, $ReentrantContextProvider::REF_WEAK);
}

void ReentrantContextProviderTL::init$(int32_t refTypeTL, int32_t refTypeCLQ) {
	$ReentrantContextProvider::init$(refTypeTL);
	$set(this, ctxTL, $new($ThreadLocal));
	$var(ReentrantContextProviderTL, parent, this);
	$set(this, ctxProviderCLQ, $new($ReentrantContextProviderTL$1, this, refTypeCLQ, parent));
}

$ReentrantContext* ReentrantContextProviderTL::acquire() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantContext, ctx, nullptr);
	$var($Reference, ref, $cast($Reference, $nc(this->ctxTL)->get()));
	if (ref != nullptr) {
		$assign(ctx, $cast($ReentrantContext, ref->get()));
	}
	if (ctx == nullptr) {
		$assign(ctx, newContext());
		$nc(this->ctxTL)->set($(getOrCreateReference(ctx)));
	}
	if ($nc(ctx)->usage == $ReentrantContextProvider::USAGE_TL_INACTIVE) {
		ctx->usage = $ReentrantContextProvider::USAGE_TL_IN_USE;
	} else {
		$assign(ctx, $nc(this->ctxProviderCLQ)->acquire());
	}
	return ctx;
}

void ReentrantContextProviderTL::release($ReentrantContext* ctx) {
	if ($nc(ctx)->usage == $ReentrantContextProvider::USAGE_TL_IN_USE) {
		ctx->usage = $ReentrantContextProvider::USAGE_TL_INACTIVE;
	} else {
		$nc(this->ctxProviderCLQ)->release(ctx);
	}
}

ReentrantContextProviderTL::ReentrantContextProviderTL() {
}

$Class* ReentrantContextProviderTL::load$($String* name, bool initialize) {
	$loadClass(ReentrantContextProviderTL, name, initialize, &_ReentrantContextProviderTL_ClassInfo_, allocate$ReentrantContextProviderTL);
	return class$;
}

$Class* ReentrantContextProviderTL::class$ = nullptr;

	} // java2d
} // sun