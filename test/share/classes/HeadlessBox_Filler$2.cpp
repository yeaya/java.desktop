#include <HeadlessBox_Filler$2.h>

#include <HeadlessBox_Filler.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessBox_Filler = ::HeadlessBox_Filler;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessBox_Filler$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessBox_Filler$2::*)()>(&HeadlessBox_Filler$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessBox_Filler$2_EnclosingMethodInfo_ = {
	"HeadlessBox_Filler",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessBox_Filler$2_InnerClassesInfo_[] = {
	{"HeadlessBox_Filler$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessBox_Filler$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessBox_Filler$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessBox_Filler$2_MethodInfo_,
	nullptr,
	&_HeadlessBox_Filler$2_EnclosingMethodInfo_,
	_HeadlessBox_Filler$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessBox_Filler"
};

$Object* allocate$HeadlessBox_Filler$2($Class* clazz) {
	return $of($alloc(HeadlessBox_Filler$2));
}

void HeadlessBox_Filler$2::init$() {
	$Component::init$();
}

HeadlessBox_Filler$2::HeadlessBox_Filler$2() {
}

$Class* HeadlessBox_Filler$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessBox_Filler$2, name, initialize, &_HeadlessBox_Filler$2_ClassInfo_, allocate$HeadlessBox_Filler$2);
	return class$;
}

$Class* HeadlessBox_Filler$2::class$ = nullptr;