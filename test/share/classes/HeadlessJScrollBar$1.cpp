#include <HeadlessJScrollBar$1.h>

#include <HeadlessJScrollBar.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJScrollBar$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJScrollBar$1::*)()>(&HeadlessJScrollBar$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJScrollBar$1_EnclosingMethodInfo_ = {
	"HeadlessJScrollBar",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJScrollBar$1_InnerClassesInfo_[] = {
	{"HeadlessJScrollBar$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJScrollBar$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJScrollBar$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJScrollBar$1_MethodInfo_,
	nullptr,
	&_HeadlessJScrollBar$1_EnclosingMethodInfo_,
	_HeadlessJScrollBar$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJScrollBar"
};

$Object* allocate$HeadlessJScrollBar$1($Class* clazz) {
	return $of($alloc(HeadlessJScrollBar$1));
}

void HeadlessJScrollBar$1::init$() {
	$Component::init$();
}

HeadlessJScrollBar$1::HeadlessJScrollBar$1() {
}

$Class* HeadlessJScrollBar$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJScrollBar$1, name, initialize, &_HeadlessJScrollBar$1_ClassInfo_, allocate$HeadlessJScrollBar$1);
	return class$;
}

$Class* HeadlessJScrollBar$1::class$ = nullptr;