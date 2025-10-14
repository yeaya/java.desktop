#include <sun/awt/CausedFocusEvent$1.h>

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

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$MethodInfo _CausedFocusEvent$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CausedFocusEvent$1::*)()>(&CausedFocusEvent$1::init$))},
	{}
};

$EnclosingMethodInfo _CausedFocusEvent$1_EnclosingMethodInfo_ = {
	"sun.awt.CausedFocusEvent",
	nullptr,
	nullptr
};

$InnerClassInfo _CausedFocusEvent$1_InnerClassesInfo_[] = {
	{"sun.awt.CausedFocusEvent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CausedFocusEvent$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.CausedFocusEvent$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_CausedFocusEvent$1_MethodInfo_,
	nullptr,
	&_CausedFocusEvent$1_EnclosingMethodInfo_,
	_CausedFocusEvent$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.CausedFocusEvent"
};

$Object* allocate$CausedFocusEvent$1($Class* clazz) {
	return $of($alloc(CausedFocusEvent$1));
}

void CausedFocusEvent$1::init$() {
	$Component::init$();
}

CausedFocusEvent$1::CausedFocusEvent$1() {
}

$Class* CausedFocusEvent$1::load$($String* name, bool initialize) {
	$loadClass(CausedFocusEvent$1, name, initialize, &_CausedFocusEvent$1_ClassInfo_, allocate$CausedFocusEvent$1);
	return class$;
}

$Class* CausedFocusEvent$1::class$ = nullptr;

	} // awt
} // sun