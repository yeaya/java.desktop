#include <UIClientPropertyKeyTest$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIClientPropertyKey = ::javax::swing::UIClientPropertyKey;

$MethodInfo _UIClientPropertyKeyTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(UIClientPropertyKeyTest$1::*)()>(&UIClientPropertyKeyTest$1::init$))},
	{}
};

$EnclosingMethodInfo _UIClientPropertyKeyTest$1_EnclosingMethodInfo_ = {
	"UIClientPropertyKeyTest",
	nullptr,
	nullptr
};

$InnerClassInfo _UIClientPropertyKeyTest$1_InnerClassesInfo_[] = {
	{"UIClientPropertyKeyTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UIClientPropertyKeyTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"UIClientPropertyKeyTest$1",
	"java.lang.Object",
	"javax.swing.UIClientPropertyKey",
	nullptr,
	_UIClientPropertyKeyTest$1_MethodInfo_,
	nullptr,
	&_UIClientPropertyKeyTest$1_EnclosingMethodInfo_,
	_UIClientPropertyKeyTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"UIClientPropertyKeyTest"
};

$Object* allocate$UIClientPropertyKeyTest$1($Class* clazz) {
	return $of($alloc(UIClientPropertyKeyTest$1));
}

void UIClientPropertyKeyTest$1::init$() {
}

UIClientPropertyKeyTest$1::UIClientPropertyKeyTest$1() {
}

$Class* UIClientPropertyKeyTest$1::load$($String* name, bool initialize) {
	$loadClass(UIClientPropertyKeyTest$1, name, initialize, &_UIClientPropertyKeyTest$1_ClassInfo_, allocate$UIClientPropertyKeyTest$1);
	return class$;
}

$Class* UIClientPropertyKeyTest$1::class$ = nullptr;