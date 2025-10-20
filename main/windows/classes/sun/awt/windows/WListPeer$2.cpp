#include <sun/awt/windows/WListPeer$2.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/ItemSelectable.h>
#include <java/awt/List.h>
#include <java/awt/event/ItemEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/windows/WListPeer.h>
#include <jcpp.h>

#undef DESELECTED
#undef ITEM_STATE_CHANGED
#undef SELECTED

using $AWTEvent = ::java::awt::AWTEvent;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $List = ::java::awt::List;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WListPeer = ::sun::awt::windows::WListPeer;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WListPeer$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WListPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WListPeer$2, this$0)},
	{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(WListPeer$2, val$index)},
	{"val$l", "Ljava/awt/List;", nullptr, $FINAL | $SYNTHETIC, $field(WListPeer$2, val$l)},
	{}
};

$MethodInfo _WListPeer$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WListPeer;Ljava/awt/List;I)V", "()V", 0, $method(static_cast<void(WListPeer$2::*)($WListPeer*,$List*,int32_t)>(&WListPeer$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WListPeer$2_EnclosingMethodInfo_ = {
	"sun.awt.windows.WListPeer",
	"handleListChanged",
	"(I)V"
};

$InnerClassInfo _WListPeer$2_InnerClassesInfo_[] = {
	{"sun.awt.windows.WListPeer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WListPeer$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WListPeer$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_WListPeer$2_FieldInfo_,
	_WListPeer$2_MethodInfo_,
	nullptr,
	&_WListPeer$2_EnclosingMethodInfo_,
	_WListPeer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WListPeer"
};

$Object* allocate$WListPeer$2($Class* clazz) {
	return $of($alloc(WListPeer$2));
}

void WListPeer$2::init$($WListPeer* this$0, $List* val$l, int32_t val$index) {
	$set(this, this$0, this$0);
	$set(this, val$l, val$l);
	this->val$index = val$index;
}

void WListPeer$2::run() {
	$useLocalCurrentObjectStackCache();
	$var($ItemSelectable, var$0, static_cast<$ItemSelectable*>(this->val$l));
	$var($Object, var$1, $of($Integer::valueOf(this->val$index)));
	this->this$0->postEvent($$new($ItemEvent, var$0, $ItemEvent::ITEM_STATE_CHANGED, var$1, this->this$0->isSelected(this->val$index) ? $ItemEvent::SELECTED : $ItemEvent::DESELECTED));
}

WListPeer$2::WListPeer$2() {
}

$Class* WListPeer$2::load$($String* name, bool initialize) {
	$loadClass(WListPeer$2, name, initialize, &_WListPeer$2_ClassInfo_, allocate$WListPeer$2);
	return class$;
}

$Class* WListPeer$2::class$ = nullptr;

		} // windows
	} // awt
} // sun