#include <HeadlessJEditorPane$2.h>

#include <HeadlessJEditorPane.h>
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

using $HeadlessJEditorPane = ::HeadlessJEditorPane;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJEditorPane$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJEditorPane$2::*)()>(&HeadlessJEditorPane$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJEditorPane$2_EnclosingMethodInfo_ = {
	"HeadlessJEditorPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJEditorPane$2_InnerClassesInfo_[] = {
	{"HeadlessJEditorPane$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJEditorPane$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJEditorPane$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJEditorPane$2_MethodInfo_,
	nullptr,
	&_HeadlessJEditorPane$2_EnclosingMethodInfo_,
	_HeadlessJEditorPane$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJEditorPane"
};

$Object* allocate$HeadlessJEditorPane$2($Class* clazz) {
	return $of($alloc(HeadlessJEditorPane$2));
}

void HeadlessJEditorPane$2::init$() {
	$Component::init$();
}

HeadlessJEditorPane$2::HeadlessJEditorPane$2() {
}

$Class* HeadlessJEditorPane$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJEditorPane$2, name, initialize, &_HeadlessJEditorPane$2_ClassInfo_, allocate$HeadlessJEditorPane$2);
	return class$;
}

$Class* HeadlessJEditorPane$2::class$ = nullptr;