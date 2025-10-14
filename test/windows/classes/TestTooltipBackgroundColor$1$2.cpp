#include <TestTooltipBackgroundColor$1$2.h>

#include <TestTooltipBackgroundColor$1.h>
#include <TestTooltipBackgroundColor.h>
#include <java/awt/event/ContainerAdapter.h>
#include <java/awt/event/ContainerEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $TestTooltipBackgroundColor = ::TestTooltipBackgroundColor;
using $TestTooltipBackgroundColor$1 = ::TestTooltipBackgroundColor$1;
using $ContainerAdapter = ::java::awt::event::ContainerAdapter;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _TestTooltipBackgroundColor$1$2_FieldInfo_[] = {
	{"this$0", "LTestTooltipBackgroundColor$1;", nullptr, $FINAL | $SYNTHETIC, $field(TestTooltipBackgroundColor$1$2, this$0)},
	{}
};

$MethodInfo _TestTooltipBackgroundColor$1$2_MethodInfo_[] = {
	{"<init>", "(LTestTooltipBackgroundColor$1;)V", nullptr, 0, $method(static_cast<void(TestTooltipBackgroundColor$1$2::*)($TestTooltipBackgroundColor$1*)>(&TestTooltipBackgroundColor$1$2::init$))},
	{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestTooltipBackgroundColor$1$2_EnclosingMethodInfo_ = {
	"TestTooltipBackgroundColor$1",
	"run",
	"()V"
};

$InnerClassInfo _TestTooltipBackgroundColor$1$2_InnerClassesInfo_[] = {
	{"TestTooltipBackgroundColor$1", nullptr, nullptr, 0},
	{"TestTooltipBackgroundColor$1$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestTooltipBackgroundColor$1$2_ClassInfo_ = {
	$ACC_SUPER,
	"TestTooltipBackgroundColor$1$2",
	"java.awt.event.ContainerAdapter",
	nullptr,
	_TestTooltipBackgroundColor$1$2_FieldInfo_,
	_TestTooltipBackgroundColor$1$2_MethodInfo_,
	nullptr,
	&_TestTooltipBackgroundColor$1$2_EnclosingMethodInfo_,
	_TestTooltipBackgroundColor$1$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestTooltipBackgroundColor"
};

$Object* allocate$TestTooltipBackgroundColor$1$2($Class* clazz) {
	return $of($alloc(TestTooltipBackgroundColor$1$2));
}

void TestTooltipBackgroundColor$1$2::init$($TestTooltipBackgroundColor$1* this$0) {
	$set(this, this$0, this$0);
	$ContainerAdapter::init$();
}

void TestTooltipBackgroundColor$1$2::componentAdded($ContainerEvent* e) {
	$init($TestTooltipBackgroundColor);
	$nc($TestTooltipBackgroundColor::latch)->countDown();
}

TestTooltipBackgroundColor$1$2::TestTooltipBackgroundColor$1$2() {
}

$Class* TestTooltipBackgroundColor$1$2::load$($String* name, bool initialize) {
	$loadClass(TestTooltipBackgroundColor$1$2, name, initialize, &_TestTooltipBackgroundColor$1$2_ClassInfo_, allocate$TestTooltipBackgroundColor$1$2);
	return class$;
}

$Class* TestTooltipBackgroundColor$1$2::class$ = nullptr;