#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton$1.h>

#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI.h>
#include <java/awt/event/MouseEvent.h>
#include <jcpp.h>

using $MotifDesktopIconUI = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI;
using $MotifDesktopIconUI$IconButton = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$IconButton;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
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

$FieldInfo _MotifDesktopIconUI$IconButton$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton;", nullptr, $FINAL | $SYNTHETIC, $field(MotifDesktopIconUI$IconButton$1, this$1)},
	{"val$this$0", "Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifDesktopIconUI$IconButton$1, val$this$0)},
	{}
};

$MethodInfo _MotifDesktopIconUI$IconButton$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton;Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;)V", "()V", 0, $method(static_cast<void(MotifDesktopIconUI$IconButton$1::*)($MotifDesktopIconUI$IconButton*,$MotifDesktopIconUI*)>(&MotifDesktopIconUI$IconButton$1::init$))},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifDesktopIconUI$IconButton$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton",
	"<init>",
	"(Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;Ljavax/swing/Icon;)V"
};

$InnerClassInfo _MotifDesktopIconUI$IconButton$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton", "com.sun.java.swing.plaf.motif.MotifDesktopIconUI", "IconButton", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifDesktopIconUI$IconButton$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton$1",
	"java.lang.Object",
	"java.awt.event.MouseMotionListener",
	_MotifDesktopIconUI$IconButton$1_FieldInfo_,
	_MotifDesktopIconUI$IconButton$1_MethodInfo_,
	nullptr,
	&_MotifDesktopIconUI$IconButton$1_EnclosingMethodInfo_,
	_MotifDesktopIconUI$IconButton$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifDesktopIconUI"
};

$Object* allocate$MotifDesktopIconUI$IconButton$1($Class* clazz) {
	return $of($alloc(MotifDesktopIconUI$IconButton$1));
}

void MotifDesktopIconUI$IconButton$1::init$($MotifDesktopIconUI$IconButton* this$1, $MotifDesktopIconUI* val$this$0) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
}

void MotifDesktopIconUI$IconButton$1::mouseDragged($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

void MotifDesktopIconUI$IconButton$1::mouseMoved($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

MotifDesktopIconUI$IconButton$1::MotifDesktopIconUI$IconButton$1() {
}

$Class* MotifDesktopIconUI$IconButton$1::load$($String* name, bool initialize) {
	$loadClass(MotifDesktopIconUI$IconButton$1, name, initialize, &_MotifDesktopIconUI$IconButton$1_ClassInfo_, allocate$MotifDesktopIconUI$IconButton$1);
	return class$;
}

$Class* MotifDesktopIconUI$IconButton$1::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com