#include <HeadlessJMenuBar$3.h>

#include <HeadlessJMenuBar.h>
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

using $HeadlessJMenuBar = ::HeadlessJMenuBar;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJMenuBar$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJMenuBar$3::*)()>(&HeadlessJMenuBar$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJMenuBar$3_EnclosingMethodInfo_ = {
	"HeadlessJMenuBar",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJMenuBar$3_InnerClassesInfo_[] = {
	{"HeadlessJMenuBar$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJMenuBar$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJMenuBar$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJMenuBar$3_MethodInfo_,
	nullptr,
	&_HeadlessJMenuBar$3_EnclosingMethodInfo_,
	_HeadlessJMenuBar$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJMenuBar"
};

$Object* allocate$HeadlessJMenuBar$3($Class* clazz) {
	return $of($alloc(HeadlessJMenuBar$3));
}

void HeadlessJMenuBar$3::init$() {
	$Component::init$();
}

HeadlessJMenuBar$3::HeadlessJMenuBar$3() {
}

$Class* HeadlessJMenuBar$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJMenuBar$3, name, initialize, &_HeadlessJMenuBar$3_ClassInfo_, allocate$HeadlessJMenuBar$3);
	return class$;
}

$Class* HeadlessJMenuBar$3::class$ = nullptr;