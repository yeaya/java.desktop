#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup.h>

#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup$1.h>
#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI.h>
#include <java/awt/event/KeyListener.h>
#include <java/awt/event/MouseMotionAdapter.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $MotifComboBoxUI = ::com::sun::java::swing::plaf::motif::MotifComboBoxUI;
using $MotifComboBoxUI$MotifComboPopup$1 = ::com::sun::java::swing::plaf::motif::MotifComboBoxUI$MotifComboPopup$1;
using $KeyListener = ::java::awt::event::KeyListener;
using $MouseMotionAdapter = ::java::awt::event::MouseMotionAdapter;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifComboBoxUI$MotifComboPopup_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifComboBoxUI$MotifComboPopup, this$0)},
	{}
};

$MethodInfo _MotifComboBoxUI$MotifComboPopup_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifComboBoxUI;Ljavax/swing/JComboBox;)V", "(Ljavax/swing/JComboBox<Ljava/lang/Object;>;)V", $PUBLIC, $method(static_cast<void(MotifComboBoxUI$MotifComboPopup::*)($MotifComboBoxUI*,$JComboBox*)>(&MotifComboBoxUI$MotifComboPopup::init$))},
	{"createKeyListener", "()Ljava/awt/event/KeyListener;", nullptr, $PUBLIC},
	{"createListMouseMotionListener", "()Ljava/awt/event/MouseMotionListener;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifComboBoxUI$MotifComboPopup_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup", "com.sun.java.swing.plaf.motif.MotifComboBoxUI", "MotifComboPopup", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler", "com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup", "InvocationKeyHandler", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifComboBoxUI$MotifComboPopup_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup",
	"javax.swing.plaf.basic.BasicComboPopup",
	nullptr,
	_MotifComboBoxUI$MotifComboPopup_FieldInfo_,
	_MotifComboBoxUI$MotifComboPopup_MethodInfo_,
	nullptr,
	nullptr,
	_MotifComboBoxUI$MotifComboPopup_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifComboBoxUI"
};

$Object* allocate$MotifComboBoxUI$MotifComboPopup($Class* clazz) {
	return $of($alloc(MotifComboBoxUI$MotifComboPopup));
}

void MotifComboBoxUI$MotifComboPopup::init$($MotifComboBoxUI* this$0, $JComboBox* comboBox) {
	$set(this, this$0, this$0);
	$BasicComboPopup::init$(comboBox);
}

$MouseMotionListener* MotifComboBoxUI$MotifComboPopup::createListMouseMotionListener() {
	return $new($MotifComboBoxUI$MotifComboPopup$1, this);
}

$KeyListener* MotifComboBoxUI$MotifComboPopup::createKeyListener() {
	return $BasicComboPopup::createKeyListener();
}

MotifComboBoxUI$MotifComboPopup::MotifComboBoxUI$MotifComboPopup() {
}

$Class* MotifComboBoxUI$MotifComboPopup::load$($String* name, bool initialize) {
	$loadClass(MotifComboBoxUI$MotifComboPopup, name, initialize, &_MotifComboBoxUI$MotifComboPopup_ClassInfo_, allocate$MotifComboBoxUI$MotifComboPopup);
	return class$;
}

$Class* MotifComboBoxUI$MotifComboPopup::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com