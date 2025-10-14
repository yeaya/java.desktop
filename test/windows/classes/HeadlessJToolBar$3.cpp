#include <HeadlessJToolBar$3.h>

#include <HeadlessJToolBar.h>
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

using $HeadlessJToolBar = ::HeadlessJToolBar;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJToolBar$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJToolBar$3::*)()>(&HeadlessJToolBar$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJToolBar$3_EnclosingMethodInfo_ = {
	"HeadlessJToolBar",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJToolBar$3_InnerClassesInfo_[] = {
	{"HeadlessJToolBar$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJToolBar$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJToolBar$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJToolBar$3_MethodInfo_,
	nullptr,
	&_HeadlessJToolBar$3_EnclosingMethodInfo_,
	_HeadlessJToolBar$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJToolBar"
};

$Object* allocate$HeadlessJToolBar$3($Class* clazz) {
	return $of($alloc(HeadlessJToolBar$3));
}

void HeadlessJToolBar$3::init$() {
	$Component::init$();
}

HeadlessJToolBar$3::HeadlessJToolBar$3() {
}

$Class* HeadlessJToolBar$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJToolBar$3, name, initialize, &_HeadlessJToolBar$3_ClassInfo_, allocate$HeadlessJToolBar$3);
	return class$;
}

$Class* HeadlessJToolBar$3::class$ = nullptr;