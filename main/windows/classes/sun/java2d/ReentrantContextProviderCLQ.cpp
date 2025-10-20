#include <sun/java2d/ReentrantContextProviderCLQ.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ConcurrentLinkedQueue.h>
#include <sun/java2d/ReentrantContext.h>
#include <sun/java2d/ReentrantContextProvider.h>
#include <jcpp.h>

#undef USAGE_CLQ

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ConcurrentLinkedQueue = ::java::util::concurrent::ConcurrentLinkedQueue;
using $ReentrantContext = ::sun::java2d::ReentrantContext;
using $ReentrantContextProvider = ::sun::java2d::ReentrantContextProvider;

namespace sun {
	namespace java2d {

$FieldInfo _ReentrantContextProviderCLQ_FieldInfo_[] = {
	{"ctxQueue", "Ljava/util/concurrent/ConcurrentLinkedQueue;", "Ljava/util/concurrent/ConcurrentLinkedQueue<Ljava/lang/ref/Reference<TK;>;>;", $PRIVATE | $FINAL, $field(ReentrantContextProviderCLQ, ctxQueue)},
	{}
};

$MethodInfo _ReentrantContextProviderCLQ_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ReentrantContextProviderCLQ::*)(int32_t)>(&ReentrantContextProviderCLQ::init$))},
	{"acquire", "()Lsun/java2d/ReentrantContext;", "()TK;", $PUBLIC | $FINAL},
	{"release", "(Lsun/java2d/ReentrantContext;)V", "(TK;)V", $PUBLIC | $FINAL},
	{}
};

$ClassInfo _ReentrantContextProviderCLQ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.ReentrantContextProviderCLQ",
	"sun.java2d.ReentrantContextProvider",
	nullptr,
	_ReentrantContextProviderCLQ_FieldInfo_,
	_ReentrantContextProviderCLQ_MethodInfo_,
	"<K:Lsun/java2d/ReentrantContext;>Lsun/java2d/ReentrantContextProvider<TK;>;"
};

$Object* allocate$ReentrantContextProviderCLQ($Class* clazz) {
	return $of($alloc(ReentrantContextProviderCLQ));
}

void ReentrantContextProviderCLQ::init$(int32_t refType) {
	$ReentrantContextProvider::init$(refType);
	$set(this, ctxQueue, $new($ConcurrentLinkedQueue));
}

$ReentrantContext* ReentrantContextProviderCLQ::acquire() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantContext, ctx, nullptr);
	$var($Reference, ref, nullptr);
	while ((ctx == nullptr) && (($assign(ref, $cast($Reference, $nc(this->ctxQueue)->poll()))) != nullptr)) {
		$assign(ctx, $cast($ReentrantContext, $nc(ref)->get()));
	}
	if (ctx == nullptr) {
		$assign(ctx, newContext());
		$nc(ctx)->usage = $ReentrantContextProvider::USAGE_CLQ;
	}
	return ctx;
}

void ReentrantContextProviderCLQ::release($ReentrantContext* ctx) {
	if ($nc(ctx)->usage == $ReentrantContextProvider::USAGE_CLQ) {
		$nc(this->ctxQueue)->offer($(getOrCreateReference(ctx)));
	}
}

ReentrantContextProviderCLQ::ReentrantContextProviderCLQ() {
}

$Class* ReentrantContextProviderCLQ::load$($String* name, bool initialize) {
	$loadClass(ReentrantContextProviderCLQ, name, initialize, &_ReentrantContextProviderCLQ_ClassInfo_, allocate$ReentrantContextProviderCLQ);
	return class$;
}

$Class* ReentrantContextProviderCLQ::class$ = nullptr;

	} // java2d
} // sun