#include <HeadlessJPanel$2.h>

#include <HeadlessJPanel.h>
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

using $HeadlessJPanel = ::HeadlessJPanel;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJPanel$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJPanel$2::*)()>(&HeadlessJPanel$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJPanel$2_EnclosingMethodInfo_ = {
	"HeadlessJPanel",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJPanel$2_InnerClassesInfo_[] = {
	{"HeadlessJPanel$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJPanel$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJPanel$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJPanel$2_MethodInfo_,
	nullptr,
	&_HeadlessJPanel$2_EnclosingMethodInfo_,
	_HeadlessJPanel$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJPanel"
};

$Object* allocate$HeadlessJPanel$2($Class* clazz) {
	return $of($alloc(HeadlessJPanel$2));
}

void HeadlessJPanel$2::init$() {
	$Component::init$();
}

HeadlessJPanel$2::HeadlessJPanel$2() {
}

$Class* HeadlessJPanel$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJPanel$2, name, initialize, &_HeadlessJPanel$2_ClassInfo_, allocate$HeadlessJPanel$2);
	return class$;
}

$Class* HeadlessJPanel$2::class$ = nullptr;