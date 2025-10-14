#include <java/awt/PopupMenu$1.h>

#include <java/awt/PopupMenu.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PopupMenu = ::java::awt::PopupMenu;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor$PopupMenuAccessor = ::sun::awt::AWTAccessor$PopupMenuAccessor;

namespace java {
	namespace awt {

$MethodInfo _PopupMenu$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PopupMenu$1::*)()>(&PopupMenu$1::init$))},
	{"isTrayIconPopup", "(Ljava/awt/PopupMenu;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PopupMenu$1_EnclosingMethodInfo_ = {
	"java.awt.PopupMenu",
	nullptr,
	nullptr
};

$InnerClassInfo _PopupMenu$1_InnerClassesInfo_[] = {
	{"java.awt.PopupMenu$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$PopupMenuAccessor", "sun.awt.AWTAccessor", "PopupMenuAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PopupMenu$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.PopupMenu$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$PopupMenuAccessor",
	nullptr,
	_PopupMenu$1_MethodInfo_,
	nullptr,
	&_PopupMenu$1_EnclosingMethodInfo_,
	_PopupMenu$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.PopupMenu"
};

$Object* allocate$PopupMenu$1($Class* clazz) {
	return $of($alloc(PopupMenu$1));
}

void PopupMenu$1::init$() {
}

bool PopupMenu$1::isTrayIconPopup($PopupMenu* popupMenu) {
	return $nc(popupMenu)->isTrayIconPopup;
}

PopupMenu$1::PopupMenu$1() {
}

$Class* PopupMenu$1::load$($String* name, bool initialize) {
	$loadClass(PopupMenu$1, name, initialize, &_PopupMenu$1_ClassInfo_, allocate$PopupMenu$1);
	return class$;
}

$Class* PopupMenu$1::class$ = nullptr;

	} // awt
} // java