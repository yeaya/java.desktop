#include <HeadlessJEditorPane$3.h>

#include <HeadlessJEditorPane.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJEditorPane = ::HeadlessJEditorPane;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJEditorPane$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJEditorPane$3::*)()>(&HeadlessJEditorPane$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJEditorPane$3_EnclosingMethodInfo_ = {
	"HeadlessJEditorPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJEditorPane$3_InnerClassesInfo_[] = {
	{"HeadlessJEditorPane$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJEditorPane$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJEditorPane$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJEditorPane$3_MethodInfo_,
	nullptr,
	&_HeadlessJEditorPane$3_EnclosingMethodInfo_,
	_HeadlessJEditorPane$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJEditorPane"
};

$Object* allocate$HeadlessJEditorPane$3($Class* clazz) {
	return $of($alloc(HeadlessJEditorPane$3));
}

void HeadlessJEditorPane$3::init$() {
	$Component::init$();
}

HeadlessJEditorPane$3::HeadlessJEditorPane$3() {
}

$Class* HeadlessJEditorPane$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJEditorPane$3, name, initialize, &_HeadlessJEditorPane$3_ClassInfo_, allocate$HeadlessJEditorPane$3);
	return class$;
}

$Class* HeadlessJEditorPane$3::class$ = nullptr;