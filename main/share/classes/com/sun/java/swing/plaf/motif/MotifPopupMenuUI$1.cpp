#include <com/sun/java/swing/plaf/motif/MotifPopupMenuUI$1.h>

#include <com/sun/java/swing/plaf/motif/MotifPopupMenuUI.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $MotifPopupMenuUI = ::com::sun::java::swing::plaf::motif::MotifPopupMenuUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifPopupMenuUI$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifPopupMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifPopupMenuUI$1, this$0)},
	{}
};

$MethodInfo _MotifPopupMenuUI$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifPopupMenuUI;)V", nullptr, 0, $method(static_cast<void(MotifPopupMenuUI$1::*)($MotifPopupMenuUI*)>(&MotifPopupMenuUI$1::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifPopupMenuUI$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifPopupMenuUI",
	"createChangeListener",
	"(Ljavax/swing/JPopupMenu;)Ljavax/swing/event/ChangeListener;"
};

$InnerClassInfo _MotifPopupMenuUI$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifPopupMenuUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifPopupMenuUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifPopupMenuUI$1",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_MotifPopupMenuUI$1_FieldInfo_,
	_MotifPopupMenuUI$1_MethodInfo_,
	nullptr,
	&_MotifPopupMenuUI$1_EnclosingMethodInfo_,
	_MotifPopupMenuUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifPopupMenuUI"
};

$Object* allocate$MotifPopupMenuUI$1($Class* clazz) {
	return $of($alloc(MotifPopupMenuUI$1));
}

void MotifPopupMenuUI$1::init$($MotifPopupMenuUI* this$0) {
	$set(this, this$0, this$0);
}

void MotifPopupMenuUI$1::stateChanged($ChangeEvent* e) {
}

MotifPopupMenuUI$1::MotifPopupMenuUI$1() {
}

$Class* MotifPopupMenuUI$1::load$($String* name, bool initialize) {
	$loadClass(MotifPopupMenuUI$1, name, initialize, &_MotifPopupMenuUI$1_ClassInfo_, allocate$MotifPopupMenuUI$1);
	return class$;
}

$Class* MotifPopupMenuUI$1::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com