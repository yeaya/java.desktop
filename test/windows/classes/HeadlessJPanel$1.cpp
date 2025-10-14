#include <HeadlessJPanel$1.h>

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

$MethodInfo _HeadlessJPanel$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJPanel$1::*)()>(&HeadlessJPanel$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJPanel$1_EnclosingMethodInfo_ = {
	"HeadlessJPanel",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJPanel$1_InnerClassesInfo_[] = {
	{"HeadlessJPanel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJPanel$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJPanel$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJPanel$1_MethodInfo_,
	nullptr,
	&_HeadlessJPanel$1_EnclosingMethodInfo_,
	_HeadlessJPanel$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJPanel"
};

$Object* allocate$HeadlessJPanel$1($Class* clazz) {
	return $of($alloc(HeadlessJPanel$1));
}

void HeadlessJPanel$1::init$() {
	$Component::init$();
}

HeadlessJPanel$1::HeadlessJPanel$1() {
}

$Class* HeadlessJPanel$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJPanel$1, name, initialize, &_HeadlessJPanel$1_ClassInfo_, allocate$HeadlessJPanel$1);
	return class$;
}

$Class* HeadlessJPanel$1::class$ = nullptr;