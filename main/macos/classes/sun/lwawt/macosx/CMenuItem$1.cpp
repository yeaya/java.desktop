#include <sun/lwawt/macosx/CMenuItem$1.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuItem.h>
#include <java/awt/event/ActionEvent.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/lwawt/macosx/CMenuItem.h>
#include <jcpp.h>

#undef ACTION_PERFORMED

using $AWTEvent = ::java::awt::AWTEvent;
using $MenuItem = ::java::awt::MenuItem;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $CMenuItem = ::sun::lwawt::macosx::CMenuItem;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CMenuItem$1_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CMenuItem;", nullptr, $FINAL | $SYNTHETIC, $field(CMenuItem$1, this$0)},
	{"val$modifiers", "I", nullptr, $FINAL | $SYNTHETIC, $field(CMenuItem$1, val$modifiers)},
	{"val$when", "J", nullptr, $FINAL | $SYNTHETIC, $field(CMenuItem$1, val$when)},
	{}
};

$MethodInfo _CMenuItem$1_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CMenuItem;JI)V", "()V", 0, $method(static_cast<void(CMenuItem$1::*)($CMenuItem*,int64_t,int32_t)>(&CMenuItem$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CMenuItem$1_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CMenuItem",
	"handleAction",
	"(JI)V"
};

$InnerClassInfo _CMenuItem$1_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CMenuItem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CMenuItem$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CMenuItem$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_CMenuItem$1_FieldInfo_,
	_CMenuItem$1_MethodInfo_,
	nullptr,
	&_CMenuItem$1_EnclosingMethodInfo_,
	_CMenuItem$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CMenuItem"
};

$Object* allocate$CMenuItem$1($Class* clazz) {
	return $of($alloc(CMenuItem$1));
}

void CMenuItem$1::init$($CMenuItem* this$0, int64_t val$when, int32_t val$modifiers) {
	$set(this, this$0, this$0);
	this->val$when = val$when;
	this->val$modifiers = val$modifiers;
}

void CMenuItem$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($String, cmd, $nc(($cast($MenuItem, $(this->this$0->getTarget()))))->getActionCommand());
	$var($ActionEvent, event, $new($ActionEvent, $(this->this$0->getTarget()), $ActionEvent::ACTION_PERFORMED, cmd, this->val$when, this->val$modifiers));
	$SunToolkit::postEvent($($SunToolkit::targetToAppContext($(this->this$0->getTarget()))), event);
}

CMenuItem$1::CMenuItem$1() {
}

$Class* CMenuItem$1::load$($String* name, bool initialize) {
	$loadClass(CMenuItem$1, name, initialize, &_CMenuItem$1_ClassInfo_, allocate$CMenuItem$1);
	return class$;
}

$Class* CMenuItem$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun