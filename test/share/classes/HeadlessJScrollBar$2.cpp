#include <HeadlessJScrollBar$2.h>

#include <HeadlessJScrollBar.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJScrollBar$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJScrollBar$2::*)()>(&HeadlessJScrollBar$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJScrollBar$2_EnclosingMethodInfo_ = {
	"HeadlessJScrollBar",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJScrollBar$2_InnerClassesInfo_[] = {
	{"HeadlessJScrollBar$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJScrollBar$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJScrollBar$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJScrollBar$2_MethodInfo_,
	nullptr,
	&_HeadlessJScrollBar$2_EnclosingMethodInfo_,
	_HeadlessJScrollBar$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJScrollBar"
};

$Object* allocate$HeadlessJScrollBar$2($Class* clazz) {
	return $of($alloc(HeadlessJScrollBar$2));
}

void HeadlessJScrollBar$2::init$() {
	$Component::init$();
}

HeadlessJScrollBar$2::HeadlessJScrollBar$2() {
}

$Class* HeadlessJScrollBar$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJScrollBar$2, name, initialize, &_HeadlessJScrollBar$2_ClassInfo_, allocate$HeadlessJScrollBar$2);
	return class$;
}

$Class* HeadlessJScrollBar$2::class$ = nullptr;