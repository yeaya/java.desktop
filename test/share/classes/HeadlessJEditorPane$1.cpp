#include <HeadlessJEditorPane$1.h>

#include <HeadlessJEditorPane.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJEditorPane = ::HeadlessJEditorPane;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJEditorPane$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJEditorPane$1::*)()>(&HeadlessJEditorPane$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJEditorPane$1_EnclosingMethodInfo_ = {
	"HeadlessJEditorPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJEditorPane$1_InnerClassesInfo_[] = {
	{"HeadlessJEditorPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJEditorPane$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJEditorPane$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJEditorPane$1_MethodInfo_,
	nullptr,
	&_HeadlessJEditorPane$1_EnclosingMethodInfo_,
	_HeadlessJEditorPane$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJEditorPane"
};

$Object* allocate$HeadlessJEditorPane$1($Class* clazz) {
	return $of($alloc(HeadlessJEditorPane$1));
}

void HeadlessJEditorPane$1::init$() {
	$Component::init$();
}

HeadlessJEditorPane$1::HeadlessJEditorPane$1() {
}

$Class* HeadlessJEditorPane$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJEditorPane$1, name, initialize, &_HeadlessJEditorPane$1_ClassInfo_, allocate$HeadlessJEditorPane$1);
	return class$;
}

$Class* HeadlessJEditorPane$1::class$ = nullptr;