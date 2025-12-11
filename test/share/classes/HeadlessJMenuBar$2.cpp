#include <HeadlessJMenuBar$2.h>

#include <HeadlessJMenuBar.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJMenuBar$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJMenuBar$2::*)()>(&HeadlessJMenuBar$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJMenuBar$2_EnclosingMethodInfo_ = {
	"HeadlessJMenuBar",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJMenuBar$2_InnerClassesInfo_[] = {
	{"HeadlessJMenuBar$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJMenuBar$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJMenuBar$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJMenuBar$2_MethodInfo_,
	nullptr,
	&_HeadlessJMenuBar$2_EnclosingMethodInfo_,
	_HeadlessJMenuBar$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJMenuBar"
};

$Object* allocate$HeadlessJMenuBar$2($Class* clazz) {
	return $of($alloc(HeadlessJMenuBar$2));
}

void HeadlessJMenuBar$2::init$() {
	$Component::init$();
}

HeadlessJMenuBar$2::HeadlessJMenuBar$2() {
}

$Class* HeadlessJMenuBar$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJMenuBar$2, name, initialize, &_HeadlessJMenuBar$2_ClassInfo_, allocate$HeadlessJMenuBar$2);
	return class$;
}

$Class* HeadlessJMenuBar$2::class$ = nullptr;