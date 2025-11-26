#include <HeadlessJToolBar$2.h>

#include <HeadlessJToolBar.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJToolBar = ::HeadlessJToolBar;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJToolBar$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJToolBar$2::*)()>(&HeadlessJToolBar$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJToolBar$2_EnclosingMethodInfo_ = {
	"HeadlessJToolBar",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJToolBar$2_InnerClassesInfo_[] = {
	{"HeadlessJToolBar$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJToolBar$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJToolBar$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJToolBar$2_MethodInfo_,
	nullptr,
	&_HeadlessJToolBar$2_EnclosingMethodInfo_,
	_HeadlessJToolBar$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJToolBar"
};

$Object* allocate$HeadlessJToolBar$2($Class* clazz) {
	return $of($alloc(HeadlessJToolBar$2));
}

void HeadlessJToolBar$2::init$() {
	$Component::init$();
}

HeadlessJToolBar$2::HeadlessJToolBar$2() {
}

$Class* HeadlessJToolBar$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJToolBar$2, name, initialize, &_HeadlessJToolBar$2_ClassInfo_, allocate$HeadlessJToolBar$2);
	return class$;
}

$Class* HeadlessJToolBar$2::class$ = nullptr;