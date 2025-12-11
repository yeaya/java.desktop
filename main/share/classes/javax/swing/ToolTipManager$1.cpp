#include <javax/swing/ToolTipManager$1.h>

#include <java/awt/Component.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/util/EventObject.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/ToolTipManager.h>
#include <jcpp.h>

using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ToolTipManager = ::javax::swing::ToolTipManager;

namespace javax {
	namespace swing {

$FieldInfo _ToolTipManager$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/ToolTipManager;", nullptr, $FINAL | $SYNTHETIC, $field(ToolTipManager$1, this$0)},
	{}
};

$MethodInfo _ToolTipManager$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/ToolTipManager;)V", nullptr, 0, $method(static_cast<void(ToolTipManager$1::*)($ToolTipManager*)>(&ToolTipManager$1::init$))},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ToolTipManager$1_EnclosingMethodInfo_ = {
	"javax.swing.ToolTipManager",
	"createFocusChangeListener",
	"()Ljava/awt/event/FocusListener;"
};

$InnerClassInfo _ToolTipManager$1_InnerClassesInfo_[] = {
	{"javax.swing.ToolTipManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ToolTipManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.ToolTipManager$1",
	"java.awt.event.FocusAdapter",
	nullptr,
	_ToolTipManager$1_FieldInfo_,
	_ToolTipManager$1_MethodInfo_,
	nullptr,
	&_ToolTipManager$1_EnclosingMethodInfo_,
	_ToolTipManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ToolTipManager"
};

$Object* allocate$ToolTipManager$1($Class* clazz) {
	return $of($alloc(ToolTipManager$1));
}

void ToolTipManager$1::init$($ToolTipManager* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
}

void ToolTipManager$1::focusLost($FocusEvent* evt) {
	this->this$0->hideTipWindow();
	$set(this->this$0, insideComponent, nullptr);
	$var($JComponent, c, $cast($JComponent, $nc(evt)->getSource()));
	$nc(c)->removeFocusListener(this->this$0->focusChangeListener);
}

ToolTipManager$1::ToolTipManager$1() {
}

$Class* ToolTipManager$1::load$($String* name, bool initialize) {
	$loadClass(ToolTipManager$1, name, initialize, &_ToolTipManager$1_ClassInfo_, allocate$ToolTipManager$1);
	return class$;
}

$Class* ToolTipManager$1::class$ = nullptr;

	} // swing
} // javax