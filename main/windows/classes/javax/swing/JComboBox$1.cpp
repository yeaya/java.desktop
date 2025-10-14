#include <javax/swing/JComboBox$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/event/AncestorEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComboBox = ::javax::swing::JComboBox;
using $AncestorEvent = ::javax::swing::event::AncestorEvent;
using $AncestorListener = ::javax::swing::event::AncestorListener;

namespace javax {
	namespace swing {

$FieldInfo _JComboBox$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JComboBox;", nullptr, $FINAL | $SYNTHETIC, $field(JComboBox$1, this$0)},
	{}
};

$MethodInfo _JComboBox$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JComboBox;)V", nullptr, 0, $method(static_cast<void(JComboBox$1::*)($JComboBox*)>(&JComboBox$1::init$))},
	{"ancestorAdded", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC},
	{"ancestorMoved", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC},
	{"ancestorRemoved", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JComboBox$1_EnclosingMethodInfo_ = {
	"javax.swing.JComboBox",
	"installAncestorListener",
	"()V"
};

$InnerClassInfo _JComboBox$1_InnerClassesInfo_[] = {
	{"javax.swing.JComboBox$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JComboBox$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JComboBox$1",
	"java.lang.Object",
	"javax.swing.event.AncestorListener",
	_JComboBox$1_FieldInfo_,
	_JComboBox$1_MethodInfo_,
	nullptr,
	&_JComboBox$1_EnclosingMethodInfo_,
	_JComboBox$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JComboBox"
};

$Object* allocate$JComboBox$1($Class* clazz) {
	return $of($alloc(JComboBox$1));
}

void JComboBox$1::init$($JComboBox* this$0) {
	$set(this, this$0, this$0);
}

void JComboBox$1::ancestorAdded($AncestorEvent* event) {
	this->this$0->hidePopup();
}

void JComboBox$1::ancestorRemoved($AncestorEvent* event) {
	this->this$0->hidePopup();
}

void JComboBox$1::ancestorMoved($AncestorEvent* event) {
	if (!$equals($nc(event)->getSource(), this->this$0)) {
		this->this$0->hidePopup();
	}
}

JComboBox$1::JComboBox$1() {
}

$Class* JComboBox$1::load$($String* name, bool initialize) {
	$loadClass(JComboBox$1, name, initialize, &_JComboBox$1_ClassInfo_, allocate$JComboBox$1);
	return class$;
}

$Class* JComboBox$1::class$ = nullptr;

	} // swing
} // javax