#include <sun/java2d/ReentrantContextProviderTL$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/ReentrantContext.h>
#include <sun/java2d/ReentrantContextProviderCLQ.h>
#include <sun/java2d/ReentrantContextProviderTL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReentrantContext = ::sun::java2d::ReentrantContext;
using $ReentrantContextProvider = ::sun::java2d::ReentrantContextProvider;
using $ReentrantContextProviderCLQ = ::sun::java2d::ReentrantContextProviderCLQ;
using $ReentrantContextProviderTL = ::sun::java2d::ReentrantContextProviderTL;

namespace sun {
	namespace java2d {

$FieldInfo _ReentrantContextProviderTL$1_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/ReentrantContextProviderTL;", nullptr, $FINAL | $SYNTHETIC, $field(ReentrantContextProviderTL$1, this$0)},
	{"val$parent", "Lsun/java2d/ReentrantContextProviderTL;", nullptr, $FINAL | $SYNTHETIC, $field(ReentrantContextProviderTL$1, val$parent)},
	{}
};

$MethodInfo _ReentrantContextProviderTL$1_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/ReentrantContextProviderTL;ILsun/java2d/ReentrantContextProviderTL;)V", nullptr, 0, $method(static_cast<void(ReentrantContextProviderTL$1::*)($ReentrantContextProviderTL*,int32_t,$ReentrantContextProviderTL*)>(&ReentrantContextProviderTL$1::init$))},
	{"newContext", "()Lsun/java2d/ReentrantContext;", "()TK;", $PROTECTED},
	{}
};

$EnclosingMethodInfo _ReentrantContextProviderTL$1_EnclosingMethodInfo_ = {
	"sun.java2d.ReentrantContextProviderTL",
	"<init>",
	"(II)V"
};

$InnerClassInfo _ReentrantContextProviderTL$1_InnerClassesInfo_[] = {
	{"sun.java2d.ReentrantContextProviderTL$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ReentrantContextProviderTL$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.ReentrantContextProviderTL$1",
	"sun.java2d.ReentrantContextProviderCLQ",
	nullptr,
	_ReentrantContextProviderTL$1_FieldInfo_,
	_ReentrantContextProviderTL$1_MethodInfo_,
	"Lsun/java2d/ReentrantContextProviderCLQ<TK;>;",
	&_ReentrantContextProviderTL$1_EnclosingMethodInfo_,
	_ReentrantContextProviderTL$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.ReentrantContextProviderTL"
};

$Object* allocate$ReentrantContextProviderTL$1($Class* clazz) {
	return $of($alloc(ReentrantContextProviderTL$1));
}

void ReentrantContextProviderTL$1::init$($ReentrantContextProviderTL* this$0, int32_t refType, $ReentrantContextProviderTL* val$parent) {
	$set(this, this$0, this$0);
	$set(this, val$parent, val$parent);
	$ReentrantContextProviderCLQ::init$(refType);
}

$ReentrantContext* ReentrantContextProviderTL$1::newContext() {
	return $nc(this->val$parent)->newContext();
}

ReentrantContextProviderTL$1::ReentrantContextProviderTL$1() {
}

$Class* ReentrantContextProviderTL$1::load$($String* name, bool initialize) {
	$loadClass(ReentrantContextProviderTL$1, name, initialize, &_ReentrantContextProviderTL$1_ClassInfo_, allocate$ReentrantContextProviderTL$1);
	return class$;
}

$Class* ReentrantContextProviderTL$1::class$ = nullptr;

	} // java2d
} // sun