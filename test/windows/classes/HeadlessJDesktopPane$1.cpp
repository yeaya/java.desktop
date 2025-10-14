#include <HeadlessJDesktopPane$1.h>

#include <HeadlessJDesktopPane.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $HeadlessJDesktopPane = ::HeadlessJDesktopPane;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

$MethodInfo _HeadlessJDesktopPane$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJDesktopPane$1::*)()>(&HeadlessJDesktopPane$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJDesktopPane$1_EnclosingMethodInfo_ = {
	"HeadlessJDesktopPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJDesktopPane$1_InnerClassesInfo_[] = {
	{"HeadlessJDesktopPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJDesktopPane$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJDesktopPane$1",
	"javax.swing.JComponent",
	nullptr,
	nullptr,
	_HeadlessJDesktopPane$1_MethodInfo_,
	nullptr,
	&_HeadlessJDesktopPane$1_EnclosingMethodInfo_,
	_HeadlessJDesktopPane$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJDesktopPane"
};

$Object* allocate$HeadlessJDesktopPane$1($Class* clazz) {
	return $of($alloc(HeadlessJDesktopPane$1));
}

void HeadlessJDesktopPane$1::init$() {
	$JComponent::init$();
}

HeadlessJDesktopPane$1::HeadlessJDesktopPane$1() {
}

$Class* HeadlessJDesktopPane$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJDesktopPane$1, name, initialize, &_HeadlessJDesktopPane$1_ClassInfo_, allocate$HeadlessJDesktopPane$1);
	return class$;
}

$Class* HeadlessJDesktopPane$1::class$ = nullptr;