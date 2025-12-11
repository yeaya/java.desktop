#include <com/apple/laf/AquaFileChooserUI$1.h>

#include <com/apple/laf/AquaFileChooserUI.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/event/AncestorEvent.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AncestorEvent = ::javax::swing::event::AncestorEvent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$1, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, 0, $method(static_cast<void(AquaFileChooserUI$1::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$1::init$))},
	{"ancestorAdded", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC},
	{"ancestorMoved", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC},
	{"ancestorRemoved", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaFileChooserUI$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaFileChooserUI",
	"installListeners",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _AquaFileChooserUI$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaFileChooserUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$1",
	"java.lang.Object",
	"javax.swing.event.AncestorListener",
	_AquaFileChooserUI$1_FieldInfo_,
	_AquaFileChooserUI$1_MethodInfo_,
	nullptr,
	&_AquaFileChooserUI$1_EnclosingMethodInfo_,
	_AquaFileChooserUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$1($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$1));
}

void AquaFileChooserUI$1::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaFileChooserUI$1::ancestorAdded($AncestorEvent* e) {
	$useLocalCurrentObjectStackCache();
	this->this$0->setFocusForMode($(this->this$0->getFileChooser()));
	this->this$0->setDefaultButtonForMode($(this->this$0->getFileChooser()));
}

void AquaFileChooserUI$1::ancestorRemoved($AncestorEvent* e) {
}

void AquaFileChooserUI$1::ancestorMoved($AncestorEvent* e) {
}

AquaFileChooserUI$1::AquaFileChooserUI$1() {
}

$Class* AquaFileChooserUI$1::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$1, name, initialize, &_AquaFileChooserUI$1_ClassInfo_, allocate$AquaFileChooserUI$1);
	return class$;
}

$Class* AquaFileChooserUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com