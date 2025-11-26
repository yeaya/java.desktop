#include <HeadlessJToolBar$1.h>

#include <HeadlessJToolBar.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJToolBar = ::HeadlessJToolBar;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJToolBar$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJToolBar$1::*)()>(&HeadlessJToolBar$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJToolBar$1_EnclosingMethodInfo_ = {
	"HeadlessJToolBar",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJToolBar$1_InnerClassesInfo_[] = {
	{"HeadlessJToolBar$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJToolBar$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJToolBar$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJToolBar$1_MethodInfo_,
	nullptr,
	&_HeadlessJToolBar$1_EnclosingMethodInfo_,
	_HeadlessJToolBar$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJToolBar"
};

$Object* allocate$HeadlessJToolBar$1($Class* clazz) {
	return $of($alloc(HeadlessJToolBar$1));
}

void HeadlessJToolBar$1::init$() {
	$Component::init$();
}

HeadlessJToolBar$1::HeadlessJToolBar$1() {
}

$Class* HeadlessJToolBar$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJToolBar$1, name, initialize, &_HeadlessJToolBar$1_ClassInfo_, allocate$HeadlessJToolBar$1);
	return class$;
}

$Class* HeadlessJToolBar$1::class$ = nullptr;