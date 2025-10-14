#include <HeadlessJMenuBar$1.h>

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

$MethodInfo _HeadlessJMenuBar$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJMenuBar$1::*)()>(&HeadlessJMenuBar$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJMenuBar$1_EnclosingMethodInfo_ = {
	"HeadlessJMenuBar",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJMenuBar$1_InnerClassesInfo_[] = {
	{"HeadlessJMenuBar$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJMenuBar$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJMenuBar$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJMenuBar$1_MethodInfo_,
	nullptr,
	&_HeadlessJMenuBar$1_EnclosingMethodInfo_,
	_HeadlessJMenuBar$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJMenuBar"
};

$Object* allocate$HeadlessJMenuBar$1($Class* clazz) {
	return $of($alloc(HeadlessJMenuBar$1));
}

void HeadlessJMenuBar$1::init$() {
	$Component::init$();
}

HeadlessJMenuBar$1::HeadlessJMenuBar$1() {
}

$Class* HeadlessJMenuBar$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJMenuBar$1, name, initialize, &_HeadlessJMenuBar$1_ClassInfo_, allocate$HeadlessJMenuBar$1);
	return class$;
}

$Class* HeadlessJMenuBar$1::class$ = nullptr;