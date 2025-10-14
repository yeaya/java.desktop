#include <HeadlessJFileChooser$3.h>

#include <HeadlessJFileChooser.h>
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

using $HeadlessJFileChooser = ::HeadlessJFileChooser;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJFileChooser$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJFileChooser$3::*)()>(&HeadlessJFileChooser$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJFileChooser$3_EnclosingMethodInfo_ = {
	"HeadlessJFileChooser",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJFileChooser$3_InnerClassesInfo_[] = {
	{"HeadlessJFileChooser$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJFileChooser$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJFileChooser$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJFileChooser$3_MethodInfo_,
	nullptr,
	&_HeadlessJFileChooser$3_EnclosingMethodInfo_,
	_HeadlessJFileChooser$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJFileChooser"
};

$Object* allocate$HeadlessJFileChooser$3($Class* clazz) {
	return $of($alloc(HeadlessJFileChooser$3));
}

void HeadlessJFileChooser$3::init$() {
	$Component::init$();
}

HeadlessJFileChooser$3::HeadlessJFileChooser$3() {
}

$Class* HeadlessJFileChooser$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJFileChooser$3, name, initialize, &_HeadlessJFileChooser$3_ClassInfo_, allocate$HeadlessJFileChooser$3);
	return class$;
}

$Class* HeadlessJFileChooser$3::class$ = nullptr;