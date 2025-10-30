#include <HeadlessJScrollBar$3.h>

#include <HeadlessJScrollBar.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJScrollBar = ::HeadlessJScrollBar;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJScrollBar$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJScrollBar$3::*)()>(&HeadlessJScrollBar$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJScrollBar$3_EnclosingMethodInfo_ = {
	"HeadlessJScrollBar",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJScrollBar$3_InnerClassesInfo_[] = {
	{"HeadlessJScrollBar$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJScrollBar$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJScrollBar$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJScrollBar$3_MethodInfo_,
	nullptr,
	&_HeadlessJScrollBar$3_EnclosingMethodInfo_,
	_HeadlessJScrollBar$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJScrollBar"
};

$Object* allocate$HeadlessJScrollBar$3($Class* clazz) {
	return $of($alloc(HeadlessJScrollBar$3));
}

void HeadlessJScrollBar$3::init$() {
	$Component::init$();
}

HeadlessJScrollBar$3::HeadlessJScrollBar$3() {
}

$Class* HeadlessJScrollBar$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJScrollBar$3, name, initialize, &_HeadlessJScrollBar$3_ClassInfo_, allocate$HeadlessJScrollBar$3);
	return class$;
}

$Class* HeadlessJScrollBar$3::class$ = nullptr;