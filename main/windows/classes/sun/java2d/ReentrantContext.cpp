#include <sun/java2d/ReentrantContext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/ReentrantContextProvider.h>
#include <jcpp.h>

#undef USAGE_TL_INACTIVE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReentrantContextProvider = ::sun::java2d::ReentrantContextProvider;

namespace sun {
	namespace java2d {

$FieldInfo _ReentrantContext_FieldInfo_[] = {
	{"usage", "B", nullptr, 0, $field(ReentrantContext, usage)},
	{"reference", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<+Lsun/java2d/ReentrantContext;>;", 0, $field(ReentrantContext, reference)},
	{}
};

$MethodInfo _ReentrantContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReentrantContext::*)()>(&ReentrantContext::init$))},
	{}
};

$ClassInfo _ReentrantContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.ReentrantContext",
	"java.lang.Object",
	nullptr,
	_ReentrantContext_FieldInfo_,
	_ReentrantContext_MethodInfo_
};

$Object* allocate$ReentrantContext($Class* clazz) {
	return $of($alloc(ReentrantContext));
}

void ReentrantContext::init$() {
	this->usage = $ReentrantContextProvider::USAGE_TL_INACTIVE;
	$set(this, reference, nullptr);
}

ReentrantContext::ReentrantContext() {
}

$Class* ReentrantContext::load$($String* name, bool initialize) {
	$loadClass(ReentrantContext, name, initialize, &_ReentrantContext_ClassInfo_, allocate$ReentrantContext);
	return class$;
}

$Class* ReentrantContext::class$ = nullptr;

	} // java2d
} // sun