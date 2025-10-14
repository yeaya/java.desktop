#include <HeadlessJTable$2.h>

#include <HeadlessJTable.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $HeadlessJTable = ::HeadlessJTable;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJTable$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJTable$2::*)()>(&HeadlessJTable$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJTable$2_EnclosingMethodInfo_ = {
	"HeadlessJTable",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJTable$2_InnerClassesInfo_[] = {
	{"HeadlessJTable$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJTable$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJTable$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJTable$2_MethodInfo_,
	nullptr,
	&_HeadlessJTable$2_EnclosingMethodInfo_,
	_HeadlessJTable$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJTable"
};

$Object* allocate$HeadlessJTable$2($Class* clazz) {
	return $of($alloc(HeadlessJTable$2));
}

void HeadlessJTable$2::init$() {
	$Component::init$();
}

HeadlessJTable$2::HeadlessJTable$2() {
}

$Class* HeadlessJTable$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTable$2, name, initialize, &_HeadlessJTable$2_ClassInfo_, allocate$HeadlessJTable$2);
	return class$;
}

$Class* HeadlessJTable$2::class$ = nullptr;