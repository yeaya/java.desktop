#include <sun/lwawt/LWChoicePeer$JComboBoxDelegate.h>

#include <java/awt/Choice.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/lwawt/LWChoicePeer.h>
#include <jcpp.h>

using $Choice = ::java::awt::Choice;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $LWChoicePeer = ::sun::lwawt::LWChoicePeer;

namespace sun {
	namespace lwawt {

class LWChoicePeer$JComboBoxDelegate$$Lambda$lambda$firePopupMenuWillBecomeVisible$0 : public $Runnable {
	$class(LWChoicePeer$JComboBoxDelegate$$Lambda$lambda$firePopupMenuWillBecomeVisible$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(LWChoicePeer$JComboBoxDelegate* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$firePopupMenuWillBecomeVisible$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LWChoicePeer$JComboBoxDelegate$$Lambda$lambda$firePopupMenuWillBecomeVisible$0>());
	}
	LWChoicePeer$JComboBoxDelegate* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LWChoicePeer$JComboBoxDelegate$$Lambda$lambda$firePopupMenuWillBecomeVisible$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LWChoicePeer$JComboBoxDelegate$$Lambda$lambda$firePopupMenuWillBecomeVisible$0, inst$)},
	{}
};
$MethodInfo LWChoicePeer$JComboBoxDelegate$$Lambda$lambda$firePopupMenuWillBecomeVisible$0::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/LWChoicePeer$JComboBoxDelegate;)V", nullptr, $PUBLIC, $method(static_cast<void(LWChoicePeer$JComboBoxDelegate$$Lambda$lambda$firePopupMenuWillBecomeVisible$0::*)(LWChoicePeer$JComboBoxDelegate*)>(&LWChoicePeer$JComboBoxDelegate$$Lambda$lambda$firePopupMenuWillBecomeVisible$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LWChoicePeer$JComboBoxDelegate$$Lambda$lambda$firePopupMenuWillBecomeVisible$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.LWChoicePeer$JComboBoxDelegate$$Lambda$lambda$firePopupMenuWillBecomeVisible$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* LWChoicePeer$JComboBoxDelegate$$Lambda$lambda$firePopupMenuWillBecomeVisible$0::load$($String* name, bool initialize) {
	$loadClass(LWChoicePeer$JComboBoxDelegate$$Lambda$lambda$firePopupMenuWillBecomeVisible$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LWChoicePeer$JComboBoxDelegate$$Lambda$lambda$firePopupMenuWillBecomeVisible$0::class$ = nullptr;

$FieldInfo _LWChoicePeer$JComboBoxDelegate_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/LWChoicePeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWChoicePeer$JComboBoxDelegate, this$0)},
	{}
};

$MethodInfo _LWChoicePeer$JComboBoxDelegate_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/LWChoicePeer;)V", nullptr, $PRIVATE, $method(static_cast<void(LWChoicePeer$JComboBoxDelegate::*)($LWChoicePeer*)>(&LWChoicePeer$JComboBoxDelegate::init$))},
	{"firePopupMenuWillBecomeVisible", "()V", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getPopupMenu", "()Ljavax/swing/JPopupMenu;", nullptr, $PRIVATE, $method(static_cast<$JPopupMenu*(LWChoicePeer$JComboBoxDelegate::*)()>(&LWChoicePeer$JComboBoxDelegate::getPopupMenu))},
	{"hasFocus", "()Z", nullptr, $PUBLIC},
	{"lambda$firePopupMenuWillBecomeVisible$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(LWChoicePeer$JComboBoxDelegate::*)()>(&LWChoicePeer$JComboBoxDelegate::lambda$firePopupMenuWillBecomeVisible$0))},
	{}
};

$InnerClassInfo _LWChoicePeer$JComboBoxDelegate_InnerClassesInfo_[] = {
	{"sun.lwawt.LWChoicePeer$JComboBoxDelegate", "sun.lwawt.LWChoicePeer", "JComboBoxDelegate", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _LWChoicePeer$JComboBoxDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWChoicePeer$JComboBoxDelegate",
	"javax.swing.JComboBox",
	nullptr,
	_LWChoicePeer$JComboBoxDelegate_FieldInfo_,
	_LWChoicePeer$JComboBoxDelegate_MethodInfo_,
	"Ljavax/swing/JComboBox<Ljava/lang/String;>;",
	nullptr,
	_LWChoicePeer$JComboBoxDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.LWChoicePeer"
};

$Object* allocate$LWChoicePeer$JComboBoxDelegate($Class* clazz) {
	return $of($alloc(LWChoicePeer$JComboBoxDelegate));
}

void LWChoicePeer$JComboBoxDelegate::init$($LWChoicePeer* this$0) {
	$set(this, this$0, this$0);
	$JComboBox::init$();
}

bool LWChoicePeer$JComboBoxDelegate::hasFocus() {
	return $nc(($cast($Choice, $(this->this$0->getTarget()))))->hasFocus();
}

$Point* LWChoicePeer$JComboBoxDelegate::getLocationOnScreen() {
	return this->this$0->getLocationOnScreen();
}

void LWChoicePeer$JComboBoxDelegate::firePopupMenuWillBecomeVisible() {
	$JComboBox::firePopupMenuWillBecomeVisible();
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(LWChoicePeer$JComboBoxDelegate$$Lambda$lambda$firePopupMenuWillBecomeVisible$0, this)));
}

$JPopupMenu* LWChoicePeer$JComboBoxDelegate::getPopupMenu() {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc($(getAccessibleContext()))->getAccessibleChildrenCount(); ++i) {
		$var($Accessible, child, $nc($(getAccessibleContext()))->getAccessibleChild(i));
		if ($instanceOf($JPopupMenu, child)) {
			return $cast($JPopupMenu, child);
		}
	}
	return nullptr;
}

void LWChoicePeer$JComboBoxDelegate::lambda$firePopupMenuWillBecomeVisible$0() {
	$useLocalCurrentObjectStackCache();
	$var($JPopupMenu, popupMenu, getPopupMenu());
	bool var$0 = popupMenu != nullptr && popupMenu->isShowing();
	if (var$0) {
		var$0 = popupMenu->getInvoker() != this->this$0->getTarget();
	}
	if (var$0) {
		$var($Point, loc, popupMenu->getLocationOnScreen());
		$SwingUtilities::convertPointFromScreen(loc, this);
		popupMenu->setVisible(false);
		popupMenu->show($(this->this$0->getTarget()), $nc(loc)->x, loc->y);
	}
}

LWChoicePeer$JComboBoxDelegate::LWChoicePeer$JComboBoxDelegate() {
}

$Class* LWChoicePeer$JComboBoxDelegate::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LWChoicePeer$JComboBoxDelegate$$Lambda$lambda$firePopupMenuWillBecomeVisible$0::classInfo$.name)) {
			return LWChoicePeer$JComboBoxDelegate$$Lambda$lambda$firePopupMenuWillBecomeVisible$0::load$(name, initialize);
		}
	}
	$loadClass(LWChoicePeer$JComboBoxDelegate, name, initialize, &_LWChoicePeer$JComboBoxDelegate_ClassInfo_, allocate$LWChoicePeer$JComboBoxDelegate);
	return class$;
}

$Class* LWChoicePeer$JComboBoxDelegate::class$ = nullptr;

	} // lwawt
} // sun