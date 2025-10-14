#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup$1.h>

#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup.h>
#include <java/awt/event/MouseMotionAdapter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $MotifComboBoxUI$MotifComboPopup = ::com::sun::java::swing::plaf::motif::MotifComboBoxUI$MotifComboPopup;
using $MouseMotionAdapter = ::java::awt::event::MouseMotionAdapter;
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

$FieldInfo _MotifComboBoxUI$MotifComboPopup$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(MotifComboBoxUI$MotifComboPopup$1, this$1)},
	{}
};

$MethodInfo _MotifComboBoxUI$MotifComboPopup$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup;)V", nullptr, 0, $method(static_cast<void(MotifComboBoxUI$MotifComboPopup$1::*)($MotifComboBoxUI$MotifComboPopup*)>(&MotifComboBoxUI$MotifComboPopup$1::init$))},
	{}
};

$EnclosingMethodInfo _MotifComboBoxUI$MotifComboPopup$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup",
	"createListMouseMotionListener",
	"()Ljava/awt/event/MouseMotionListener;"
};

$InnerClassInfo _MotifComboBoxUI$MotifComboPopup$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup", "com.sun.java.swing.plaf.motif.MotifComboBoxUI", "MotifComboPopup", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifComboBoxUI$MotifComboPopup$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup$1",
	"java.awt.event.MouseMotionAdapter",
	nullptr,
	_MotifComboBoxUI$MotifComboPopup$1_FieldInfo_,
	_MotifComboBoxUI$MotifComboPopup$1_MethodInfo_,
	nullptr,
	&_MotifComboBoxUI$MotifComboPopup$1_EnclosingMethodInfo_,
	_MotifComboBoxUI$MotifComboPopup$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifComboBoxUI"
};

$Object* allocate$MotifComboBoxUI$MotifComboPopup$1($Class* clazz) {
	return $of($alloc(MotifComboBoxUI$MotifComboPopup$1));
}

void MotifComboBoxUI$MotifComboPopup$1::init$($MotifComboBoxUI$MotifComboPopup* this$1) {
	$set(this, this$1, this$1);
	$MouseMotionAdapter::init$();
}

MotifComboBoxUI$MotifComboPopup$1::MotifComboBoxUI$MotifComboPopup$1() {
}

$Class* MotifComboBoxUI$MotifComboPopup$1::load$($String* name, bool initialize) {
	$loadClass(MotifComboBoxUI$MotifComboPopup$1, name, initialize, &_MotifComboBoxUI$MotifComboPopup$1_ClassInfo_, allocate$MotifComboBoxUI$MotifComboPopup$1);
	return class$;
}

$Class* MotifComboBoxUI$MotifComboPopup$1::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com