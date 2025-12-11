#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconLabel$2.h>

#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconLabel.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI.h>
#include <java/awt/event/MouseEvent.h>
#include <jcpp.h>

using $MotifDesktopIconUI = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI;
using $MotifDesktopIconUI$IconLabel = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$IconLabel;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifDesktopIconUI$IconLabel$2_FieldInfo_[] = {
	{"this$1", "Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconLabel;", nullptr, $FINAL | $SYNTHETIC, $field(MotifDesktopIconUI$IconLabel$2, this$1)},
	{"val$this$0", "Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifDesktopIconUI$IconLabel$2, val$this$0)},
	{}
};

$MethodInfo _MotifDesktopIconUI$IconLabel$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconLabel;Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;)V", "()V", 0, $method(static_cast<void(MotifDesktopIconUI$IconLabel$2::*)($MotifDesktopIconUI$IconLabel*,$MotifDesktopIconUI*)>(&MotifDesktopIconUI$IconLabel$2::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifDesktopIconUI$IconLabel$2_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconLabel",
	"<init>",
	"(Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;Ljavax/swing/JInternalFrame;)V"
};

$InnerClassInfo _MotifDesktopIconUI$IconLabel$2_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconLabel", "com.sun.java.swing.plaf.motif.MotifDesktopIconUI", "IconLabel", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconLabel$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifDesktopIconUI$IconLabel$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconLabel$2",
	"java.lang.Object",
	"java.awt.event.MouseListener",
	_MotifDesktopIconUI$IconLabel$2_FieldInfo_,
	_MotifDesktopIconUI$IconLabel$2_MethodInfo_,
	nullptr,
	&_MotifDesktopIconUI$IconLabel$2_EnclosingMethodInfo_,
	_MotifDesktopIconUI$IconLabel$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifDesktopIconUI"
};

$Object* allocate$MotifDesktopIconUI$IconLabel$2($Class* clazz) {
	return $of($alloc(MotifDesktopIconUI$IconLabel$2));
}

void MotifDesktopIconUI$IconLabel$2::init$($MotifDesktopIconUI$IconLabel* this$1, $MotifDesktopIconUI* val$this$0) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
}

void MotifDesktopIconUI$IconLabel$2::mouseClicked($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

void MotifDesktopIconUI$IconLabel$2::mousePressed($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

void MotifDesktopIconUI$IconLabel$2::mouseReleased($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

void MotifDesktopIconUI$IconLabel$2::mouseEntered($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

void MotifDesktopIconUI$IconLabel$2::mouseExited($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

MotifDesktopIconUI$IconLabel$2::MotifDesktopIconUI$IconLabel$2() {
}

$Class* MotifDesktopIconUI$IconLabel$2::load$($String* name, bool initialize) {
	$loadClass(MotifDesktopIconUI$IconLabel$2, name, initialize, &_MotifDesktopIconUI$IconLabel$2_ClassInfo_, allocate$MotifDesktopIconUI$IconLabel$2);
	return class$;
}

$Class* MotifDesktopIconUI$IconLabel$2::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com