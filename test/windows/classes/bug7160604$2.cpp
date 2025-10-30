#include <bug7160604$2.h>

#include <bug7160604.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $bug7160604 = ::bug7160604;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JPopupMenu = ::javax::swing::JPopupMenu;

$FieldInfo _bug7160604$2_FieldInfo_[] = {
	{"this$0", "Lbug7160604;", nullptr, $FINAL | $SYNTHETIC, $field(bug7160604$2, this$0)},
	{"val$label", "Ljavax/swing/JLabel;", nullptr, $FINAL | $SYNTHETIC, $field(bug7160604$2, val$label)},
	{"val$jPopupMenu", "Ljavax/swing/JPopupMenu;", nullptr, $FINAL | $SYNTHETIC, $field(bug7160604$2, val$jPopupMenu)},
	{}
};

$MethodInfo _bug7160604$2_MethodInfo_[] = {
	{"<init>", "(Lbug7160604;Ljavax/swing/JPopupMenu;Ljavax/swing/JLabel;)V", nullptr, 0, $method(static_cast<void(bug7160604$2::*)($bug7160604*,$JPopupMenu*,$JLabel*)>(&bug7160604$2::init$))},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7160604$2_EnclosingMethodInfo_ = {
	"bug7160604",
	"init",
	"()V"
};

$InnerClassInfo _bug7160604$2_InnerClassesInfo_[] = {
	{"bug7160604$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7160604$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug7160604$2",
	"java.awt.event.MouseAdapter",
	nullptr,
	_bug7160604$2_FieldInfo_,
	_bug7160604$2_MethodInfo_,
	nullptr,
	&_bug7160604$2_EnclosingMethodInfo_,
	_bug7160604$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7160604"
};

$Object* allocate$bug7160604$2($Class* clazz) {
	return $of($alloc(bug7160604$2));
}

void bug7160604$2::init$($bug7160604* this$0, $JPopupMenu* val$jPopupMenu, $JLabel* val$label) {
	$set(this, this$0, this$0);
	$set(this, val$jPopupMenu, val$jPopupMenu);
	$set(this, val$label, val$label);
	$MouseAdapter::init$();
}

void bug7160604$2::mouseReleased($MouseEvent* e) {
	$nc(this->val$jPopupMenu)->show(this->val$label, 0, 0);
}

bug7160604$2::bug7160604$2() {
}

$Class* bug7160604$2::load$($String* name, bool initialize) {
	$loadClass(bug7160604$2, name, initialize, &_bug7160604$2_ClassInfo_, allocate$bug7160604$2);
	return class$;
}

$Class* bug7160604$2::class$ = nullptr;