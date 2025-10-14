#include <bug6987844$2.h>

#include <bug6987844.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $bug6987844 = ::bug6987844;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JMenu = ::javax::swing::JMenu;
using $JPopupMenu = ::javax::swing::JPopupMenu;

$MethodInfo _bug6987844$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6987844$2::*)()>(&bug6987844$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6987844$2_EnclosingMethodInfo_ = {
	"bug6987844",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6987844$2_InnerClassesInfo_[] = {
	{"bug6987844$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6987844$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6987844$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6987844$2_MethodInfo_,
	nullptr,
	&_bug6987844$2_EnclosingMethodInfo_,
	_bug6987844$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6987844"
};

$Object* allocate$bug6987844$2($Class* clazz) {
	return $of($alloc(bug6987844$2));
}

void bug6987844$2::init$() {
}

void bug6987844$2::run() {
	$init($bug6987844);
	$var($Dimension, popupSize1, $nc($($nc($bug6987844::menu1)->getPopupMenu()))->getSize());
	$var($Dimension, popupSize2, $nc($($nc($bug6987844::menu2)->getPopupMenu()))->getSize());
	if ($nc(popupSize1)->equals(popupSize2)) {
		$throwNew($RuntimeException, "First popup unexpedetly changed its size"_s);
	}
}

bug6987844$2::bug6987844$2() {
}

$Class* bug6987844$2::load$($String* name, bool initialize) {
	$loadClass(bug6987844$2, name, initialize, &_bug6987844$2_ClassInfo_, allocate$bug6987844$2);
	return class$;
}

$Class* bug6987844$2::class$ = nullptr;