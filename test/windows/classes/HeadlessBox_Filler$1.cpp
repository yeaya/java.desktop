#include <HeadlessBox_Filler$1.h>

#include <HeadlessBox_Filler.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessBox_Filler = ::HeadlessBox_Filler;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessBox_Filler$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessBox_Filler$1::*)()>(&HeadlessBox_Filler$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessBox_Filler$1_EnclosingMethodInfo_ = {
	"HeadlessBox_Filler",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessBox_Filler$1_InnerClassesInfo_[] = {
	{"HeadlessBox_Filler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessBox_Filler$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessBox_Filler$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessBox_Filler$1_MethodInfo_,
	nullptr,
	&_HeadlessBox_Filler$1_EnclosingMethodInfo_,
	_HeadlessBox_Filler$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessBox_Filler"
};

$Object* allocate$HeadlessBox_Filler$1($Class* clazz) {
	return $of($alloc(HeadlessBox_Filler$1));
}

void HeadlessBox_Filler$1::init$() {
	$Component::init$();
}

HeadlessBox_Filler$1::HeadlessBox_Filler$1() {
}

$Class* HeadlessBox_Filler$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessBox_Filler$1, name, initialize, &_HeadlessBox_Filler$1_ClassInfo_, allocate$HeadlessBox_Filler$1);
	return class$;
}

$Class* HeadlessBox_Filler$1::class$ = nullptr;