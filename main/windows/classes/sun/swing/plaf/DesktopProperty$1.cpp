#include <sun/swing/plaf/DesktopProperty$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/swing/plaf/DesktopProperty.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $DesktopProperty = ::sun::swing::plaf::DesktopProperty;

namespace sun {
	namespace swing {
		namespace plaf {

$FieldInfo _DesktopProperty$1_FieldInfo_[] = {
	{"this$0", "Lsun/swing/plaf/DesktopProperty;", nullptr, $FINAL | $SYNTHETIC, $field(DesktopProperty$1, this$0)},
	{}
};

$MethodInfo _DesktopProperty$1_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/plaf/DesktopProperty;)V", nullptr, 0, $method(static_cast<void(DesktopProperty$1::*)($DesktopProperty*)>(&DesktopProperty$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DesktopProperty$1_EnclosingMethodInfo_ = {
	"sun.swing.plaf.DesktopProperty",
	"updateUI",
	"()V"
};

$InnerClassInfo _DesktopProperty$1_InnerClassesInfo_[] = {
	{"sun.swing.plaf.DesktopProperty$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DesktopProperty$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.plaf.DesktopProperty$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_DesktopProperty$1_FieldInfo_,
	_DesktopProperty$1_MethodInfo_,
	nullptr,
	&_DesktopProperty$1_EnclosingMethodInfo_,
	_DesktopProperty$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.DesktopProperty"
};

$Object* allocate$DesktopProperty$1($Class* clazz) {
	return $of($alloc(DesktopProperty$1));
}

void DesktopProperty$1::init$($DesktopProperty* this$0) {
	$set(this, this$0, this$0);
}

void DesktopProperty$1::run() {
	this->this$0->updateAllUIs();
	$DesktopProperty::setUpdatePending(false);
}

DesktopProperty$1::DesktopProperty$1() {
}

$Class* DesktopProperty$1::load$($String* name, bool initialize) {
	$loadClass(DesktopProperty$1, name, initialize, &_DesktopProperty$1_ClassInfo_, allocate$DesktopProperty$1);
	return class$;
}

$Class* DesktopProperty$1::class$ = nullptr;

		} // plaf
	} // swing
} // sun