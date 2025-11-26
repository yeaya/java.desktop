#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$Title$1.h>

#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$Title.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane.h>
#include <java/awt/event/MouseEvent.h>
#include <jcpp.h>

using $MotifInternalFrameTitlePane = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane;
using $MotifInternalFrameTitlePane$Title = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$Title;
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

$FieldInfo _MotifInternalFrameTitlePane$Title$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$Title;", nullptr, $FINAL | $SYNTHETIC, $field(MotifInternalFrameTitlePane$Title$1, this$1)},
	{"val$this$0", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MotifInternalFrameTitlePane$Title$1, val$this$0)},
	{}
};

$MethodInfo _MotifInternalFrameTitlePane$Title$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$Title;Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;)V", "()V", 0, $method(static_cast<void(MotifInternalFrameTitlePane$Title$1::*)($MotifInternalFrameTitlePane$Title*,$MotifInternalFrameTitlePane*)>(&MotifInternalFrameTitlePane$Title$1::init$))},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifInternalFrameTitlePane$Title$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$Title",
	"<init>",
	"(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;Ljava/lang/String;)V"
};

$InnerClassInfo _MotifInternalFrameTitlePane$Title$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$Title", "com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane", "Title", $PRIVATE},
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$Title$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifInternalFrameTitlePane$Title$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$Title$1",
	"java.lang.Object",
	"java.awt.event.MouseMotionListener",
	_MotifInternalFrameTitlePane$Title$1_FieldInfo_,
	_MotifInternalFrameTitlePane$Title$1_MethodInfo_,
	nullptr,
	&_MotifInternalFrameTitlePane$Title$1_EnclosingMethodInfo_,
	_MotifInternalFrameTitlePane$Title$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane"
};

$Object* allocate$MotifInternalFrameTitlePane$Title$1($Class* clazz) {
	return $of($alloc(MotifInternalFrameTitlePane$Title$1));
}

void MotifInternalFrameTitlePane$Title$1::init$($MotifInternalFrameTitlePane$Title* this$1, $MotifInternalFrameTitlePane* val$this$0) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
}

void MotifInternalFrameTitlePane$Title$1::mouseDragged($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

void MotifInternalFrameTitlePane$Title$1::mouseMoved($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

MotifInternalFrameTitlePane$Title$1::MotifInternalFrameTitlePane$Title$1() {
}

$Class* MotifInternalFrameTitlePane$Title$1::load$($String* name, bool initialize) {
	$loadClass(MotifInternalFrameTitlePane$Title$1, name, initialize, &_MotifInternalFrameTitlePane$Title$1_ClassInfo_, allocate$MotifInternalFrameTitlePane$Title$1);
	return class$;
}

$Class* MotifInternalFrameTitlePane$Title$1::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com