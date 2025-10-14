#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler.h>

#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicComboPopup$InvocationKeyHandler.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $MotifComboBoxUI$MotifComboPopup = ::com::sun::java::swing::plaf::motif::MotifComboBoxUI$MotifComboPopup;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;
using $BasicComboPopup$InvocationKeyHandler = ::javax::swing::plaf::basic::BasicComboPopup$InvocationKeyHandler;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler_FieldInfo_[] = {
	{"this$1", "Lcom/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler, this$1)},
	{}
};

$MethodInfo _MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup;)V", nullptr, $PROTECTED, $method(static_cast<void(MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler::*)($MotifComboBoxUI$MotifComboPopup*)>(&MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler::init$))},
	{}
};

$InnerClassInfo _MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup", "com.sun.java.swing.plaf.motif.MotifComboBoxUI", "MotifComboPopup", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler", "com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup", "InvocationKeyHandler", $PROTECTED},
	{"javax.swing.plaf.basic.BasicComboPopup$InvocationKeyHandler", "javax.swing.plaf.basic.BasicComboPopup", "InvocationKeyHandler", $PUBLIC},
	{}
};

$ClassInfo _MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler",
	"javax.swing.plaf.basic.BasicComboPopup$InvocationKeyHandler",
	nullptr,
	_MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler_FieldInfo_,
	_MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler_MethodInfo_,
	nullptr,
	nullptr,
	_MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifComboBoxUI"
};

$Object* allocate$MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler($Class* clazz) {
	return $of($alloc(MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler));
}

void MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler::init$($MotifComboBoxUI$MotifComboPopup* this$1) {
	$set(this, this$1, this$1);
	$BasicComboPopup$InvocationKeyHandler::init$((static_cast<$MotifComboBoxUI$MotifComboPopup*>(this$1)));
}

MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler::MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler() {
}

$Class* MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler::load$($String* name, bool initialize) {
	$loadClass(MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler, name, initialize, &_MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler_ClassInfo_, allocate$MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler);
	return class$;
}

$Class* MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com