#include <javax/swing/plaf/basic/BasicPopupMenuUI$BasicPopupMenuListener.h>

#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicPopupMenuUI = ::javax::swing::plaf::basic::BasicPopupMenuUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicPopupMenuUI$BasicPopupMenuListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicPopupMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicPopupMenuUI$BasicPopupMenuListener, this$0)},
	{}
};

$MethodInfo _BasicPopupMenuUI$BasicPopupMenuListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicPopupMenuUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicPopupMenuUI$BasicPopupMenuListener::*)($BasicPopupMenuUI*)>(&BasicPopupMenuUI$BasicPopupMenuListener::init$))},
	{"popupMenuCanceled", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"popupMenuWillBecomeInvisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"popupMenuWillBecomeVisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicPopupMenuUI$BasicPopupMenuListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicPopupMenuUI$BasicPopupMenuListener", "javax.swing.plaf.basic.BasicPopupMenuUI", "BasicPopupMenuListener", $PRIVATE},
	{}
};

$ClassInfo _BasicPopupMenuUI$BasicPopupMenuListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicPopupMenuUI$BasicPopupMenuListener",
	"java.lang.Object",
	"javax.swing.event.PopupMenuListener",
	_BasicPopupMenuUI$BasicPopupMenuListener_FieldInfo_,
	_BasicPopupMenuUI$BasicPopupMenuListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicPopupMenuUI$BasicPopupMenuListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicPopupMenuUI"
};

$Object* allocate$BasicPopupMenuUI$BasicPopupMenuListener($Class* clazz) {
	return $of($alloc(BasicPopupMenuUI$BasicPopupMenuListener));
}

void BasicPopupMenuUI$BasicPopupMenuListener::init$($BasicPopupMenuUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicPopupMenuUI$BasicPopupMenuListener::popupMenuCanceled($PopupMenuEvent* e) {
}

void BasicPopupMenuUI$BasicPopupMenuListener::popupMenuWillBecomeInvisible($PopupMenuEvent* e) {
}

void BasicPopupMenuUI$BasicPopupMenuListener::popupMenuWillBecomeVisible($PopupMenuEvent* e) {
	$BasicLookAndFeel::playSound($cast($JPopupMenu, $($nc(e)->getSource())), "PopupMenu.popupSound"_s);
}

BasicPopupMenuUI$BasicPopupMenuListener::BasicPopupMenuUI$BasicPopupMenuListener() {
}

$Class* BasicPopupMenuUI$BasicPopupMenuListener::load$($String* name, bool initialize) {
	$loadClass(BasicPopupMenuUI$BasicPopupMenuListener, name, initialize, &_BasicPopupMenuUI$BasicPopupMenuListener_ClassInfo_, allocate$BasicPopupMenuUI$BasicPopupMenuListener);
	return class$;
}

$Class* BasicPopupMenuUI$BasicPopupMenuListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax