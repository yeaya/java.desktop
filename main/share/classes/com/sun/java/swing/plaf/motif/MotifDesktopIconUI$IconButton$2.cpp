#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton$2.h>

#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $MotifDesktopIconUI = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI;
using $MotifDesktopIconUI$IconButton = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$IconButton;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPopupMenu = ::javax::swing::JPopupMenu;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifDesktopIconUI$IconButton$2_FieldInfo_[] = {
	{"this$1", "Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton;", nullptr, $FINAL | $SYNTHETIC, $field(MotifDesktopIconUI$IconButton$2, this$1)},
	{"val$this$0", "Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifDesktopIconUI$IconButton$2, val$this$0)},
	{}
};

$MethodInfo _MotifDesktopIconUI$IconButton$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton;Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;)V", "()V", 0, $method(static_cast<void(MotifDesktopIconUI$IconButton$2::*)($MotifDesktopIconUI$IconButton*,$MotifDesktopIconUI*)>(&MotifDesktopIconUI$IconButton$2::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifDesktopIconUI$IconButton$2_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton",
	"<init>",
	"(Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;Ljavax/swing/Icon;)V"
};

$InnerClassInfo _MotifDesktopIconUI$IconButton$2_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton", "com.sun.java.swing.plaf.motif.MotifDesktopIconUI", "IconButton", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifDesktopIconUI$IconButton$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton$2",
	"java.lang.Object",
	"java.awt.event.MouseListener",
	_MotifDesktopIconUI$IconButton$2_FieldInfo_,
	_MotifDesktopIconUI$IconButton$2_MethodInfo_,
	nullptr,
	&_MotifDesktopIconUI$IconButton$2_EnclosingMethodInfo_,
	_MotifDesktopIconUI$IconButton$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifDesktopIconUI"
};

$Object* allocate$MotifDesktopIconUI$IconButton$2($Class* clazz) {
	return $of($alloc(MotifDesktopIconUI$IconButton$2));
}

void MotifDesktopIconUI$IconButton$2::init$($MotifDesktopIconUI$IconButton* this$1, $MotifDesktopIconUI* val$this$0) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
}

void MotifDesktopIconUI$IconButton$2::mouseClicked($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

void MotifDesktopIconUI$IconButton$2::mousePressed($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

void MotifDesktopIconUI$IconButton$2::mouseReleased($MouseEvent* e) {
	if (!$nc($nc(this->this$1->this$0)->systemMenu)->isShowing()) {
		this->this$1->forwardEventToParent(e);
	}
}

void MotifDesktopIconUI$IconButton$2::mouseEntered($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

void MotifDesktopIconUI$IconButton$2::mouseExited($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

MotifDesktopIconUI$IconButton$2::MotifDesktopIconUI$IconButton$2() {
}

$Class* MotifDesktopIconUI$IconButton$2::load$($String* name, bool initialize) {
	$loadClass(MotifDesktopIconUI$IconButton$2, name, initialize, &_MotifDesktopIconUI$IconButton$2_ClassInfo_, allocate$MotifDesktopIconUI$IconButton$2);
	return class$;
}

$Class* MotifDesktopIconUI$IconButton$2::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com