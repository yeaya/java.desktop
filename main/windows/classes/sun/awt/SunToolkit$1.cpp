#include <sun/awt/SunToolkit$1.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor$AWTEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $EventObject = ::java::util::EventObject;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$AWTEventAccessor = ::sun::awt::AWTAccessor$AWTEventAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace sun {
	namespace awt {

$FieldInfo _SunToolkit$1_FieldInfo_[] = {
	{"val$e", "Ljava/awt/AWTEvent;", nullptr, $FINAL | $SYNTHETIC, $field(SunToolkit$1, val$e)},
	{}
};

$MethodInfo _SunToolkit$1_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/AWTEvent;)V", "()V", 0, $method(static_cast<void(SunToolkit$1::*)($AWTEvent*)>(&SunToolkit$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunToolkit$1_EnclosingMethodInfo_ = {
	"sun.awt.SunToolkit",
	"postPriorityEvent",
	"(Ljava/awt/AWTEvent;)V"
};

$InnerClassInfo _SunToolkit$1_InnerClassesInfo_[] = {
	{"sun.awt.SunToolkit$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunToolkit$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.SunToolkit$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_SunToolkit$1_FieldInfo_,
	_SunToolkit$1_MethodInfo_,
	nullptr,
	&_SunToolkit$1_EnclosingMethodInfo_,
	_SunToolkit$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.SunToolkit"
};

$Object* allocate$SunToolkit$1($Class* clazz) {
	return $of($alloc(SunToolkit$1));
}

void SunToolkit$1::init$($AWTEvent* val$e) {
	$set(this, val$e, val$e);
}

void SunToolkit$1::run() {
	$nc($($AWTAccessor::getAWTEventAccessor()))->setPosted(this->val$e);
	$nc(($cast($Component, $($nc(this->val$e)->getSource()))))->dispatchEvent(this->val$e);
}

SunToolkit$1::SunToolkit$1() {
}

$Class* SunToolkit$1::load$($String* name, bool initialize) {
	$loadClass(SunToolkit$1, name, initialize, &_SunToolkit$1_ClassInfo_, allocate$SunToolkit$1);
	return class$;
}

$Class* SunToolkit$1::class$ = nullptr;

	} // awt
} // sun