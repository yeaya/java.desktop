#include <java/awt/CheckboxMenuItem$1.h>

#include <java/awt/CheckboxMenuItem.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $CheckboxMenuItem = ::java::awt::CheckboxMenuItem;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor$CheckboxMenuItemAccessor = ::sun::awt::AWTAccessor$CheckboxMenuItemAccessor;

namespace java {
	namespace awt {

$MethodInfo _CheckboxMenuItem$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CheckboxMenuItem$1::*)()>(&CheckboxMenuItem$1::init$))},
	{"getState", "(Ljava/awt/CheckboxMenuItem;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CheckboxMenuItem$1_EnclosingMethodInfo_ = {
	"java.awt.CheckboxMenuItem",
	nullptr,
	nullptr
};

$InnerClassInfo _CheckboxMenuItem$1_InnerClassesInfo_[] = {
	{"java.awt.CheckboxMenuItem$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$CheckboxMenuItemAccessor", "sun.awt.AWTAccessor", "CheckboxMenuItemAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CheckboxMenuItem$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.CheckboxMenuItem$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$CheckboxMenuItemAccessor",
	nullptr,
	_CheckboxMenuItem$1_MethodInfo_,
	nullptr,
	&_CheckboxMenuItem$1_EnclosingMethodInfo_,
	_CheckboxMenuItem$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.CheckboxMenuItem"
};

$Object* allocate$CheckboxMenuItem$1($Class* clazz) {
	return $of($alloc(CheckboxMenuItem$1));
}

void CheckboxMenuItem$1::init$() {
}

bool CheckboxMenuItem$1::getState($CheckboxMenuItem* cmi) {
	return $nc(cmi)->state;
}

CheckboxMenuItem$1::CheckboxMenuItem$1() {
}

$Class* CheckboxMenuItem$1::load$($String* name, bool initialize) {
	$loadClass(CheckboxMenuItem$1, name, initialize, &_CheckboxMenuItem$1_ClassInfo_, allocate$CheckboxMenuItem$1);
	return class$;
}

$Class* CheckboxMenuItem$1::class$ = nullptr;

	} // awt
} // java