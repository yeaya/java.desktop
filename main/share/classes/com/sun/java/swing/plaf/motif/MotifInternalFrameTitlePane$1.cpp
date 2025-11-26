#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$1.h>

#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$FrameButton.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$SystemButton.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $MotifInternalFrameTitlePane = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane;
using $MotifInternalFrameTitlePane$FrameButton = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton;
using $MotifInternalFrameTitlePane$SystemButton = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$SystemButton;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifInternalFrameTitlePane$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MotifInternalFrameTitlePane$1, this$0)},
	{}
};

$MethodInfo _MotifInternalFrameTitlePane$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;)V", nullptr, 0, $method(static_cast<void(MotifInternalFrameTitlePane$1::*)($MotifInternalFrameTitlePane*)>(&MotifInternalFrameTitlePane$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifInternalFrameTitlePane$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane",
	"assembleSystemMenu",
	"()V"
};

$InnerClassInfo _MotifInternalFrameTitlePane$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifInternalFrameTitlePane$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_MotifInternalFrameTitlePane$1_FieldInfo_,
	_MotifInternalFrameTitlePane$1_MethodInfo_,
	nullptr,
	&_MotifInternalFrameTitlePane$1_EnclosingMethodInfo_,
	_MotifInternalFrameTitlePane$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane"
};

$Object* allocate$MotifInternalFrameTitlePane$1($Class* clazz) {
	return $of($alloc(MotifInternalFrameTitlePane$1));
}

void MotifInternalFrameTitlePane$1::init$($MotifInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
}

void MotifInternalFrameTitlePane$1::actionPerformed($ActionEvent* e) {
	$nc(this->this$0->systemMenu)->show(this->this$0->systemButton, 0, 19);
}

MotifInternalFrameTitlePane$1::MotifInternalFrameTitlePane$1() {
}

$Class* MotifInternalFrameTitlePane$1::load$($String* name, bool initialize) {
	$loadClass(MotifInternalFrameTitlePane$1, name, initialize, &_MotifInternalFrameTitlePane$1_ClassInfo_, allocate$MotifInternalFrameTitlePane$1);
	return class$;
}

$Class* MotifInternalFrameTitlePane$1::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com