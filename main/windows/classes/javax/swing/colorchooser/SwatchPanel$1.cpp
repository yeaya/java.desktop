#include <javax/swing/colorchooser/SwatchPanel$1.h>

#include <java/awt/Component.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/colorchooser/SwatchPanel.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwatchPanel = ::javax::swing::colorchooser::SwatchPanel;

namespace javax {
	namespace swing {
		namespace colorchooser {

$FieldInfo _SwatchPanel$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/colorchooser/SwatchPanel;", nullptr, $FINAL | $SYNTHETIC, $field(SwatchPanel$1, this$0)},
	{}
};

$MethodInfo _SwatchPanel$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/colorchooser/SwatchPanel;)V", nullptr, 0, $method(static_cast<void(SwatchPanel$1::*)($SwatchPanel*)>(&SwatchPanel$1::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SwatchPanel$1_EnclosingMethodInfo_ = {
	"javax.swing.colorchooser.SwatchPanel",
	"<init>",
	"()V"
};

$InnerClassInfo _SwatchPanel$1_InnerClassesInfo_[] = {
	{"javax.swing.colorchooser.SwatchPanel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwatchPanel$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.colorchooser.SwatchPanel$1",
	"java.awt.event.FocusAdapter",
	nullptr,
	_SwatchPanel$1_FieldInfo_,
	_SwatchPanel$1_MethodInfo_,
	nullptr,
	&_SwatchPanel$1_EnclosingMethodInfo_,
	_SwatchPanel$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.colorchooser.SwatchPanel"
};

$Object* allocate$SwatchPanel$1($Class* clazz) {
	return $of($alloc(SwatchPanel$1));
}

void SwatchPanel$1::init$($SwatchPanel* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
}

void SwatchPanel$1::focusGained($FocusEvent* e) {
	this->this$0->repaint();
}

void SwatchPanel$1::focusLost($FocusEvent* e) {
	this->this$0->repaint();
}

SwatchPanel$1::SwatchPanel$1() {
}

$Class* SwatchPanel$1::load$($String* name, bool initialize) {
	$loadClass(SwatchPanel$1, name, initialize, &_SwatchPanel$1_ClassInfo_, allocate$SwatchPanel$1);
	return class$;
}

$Class* SwatchPanel$1::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax