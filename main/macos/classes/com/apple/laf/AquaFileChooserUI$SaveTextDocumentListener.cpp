#include <com/apple/laf/AquaFileChooserUI$SaveTextDocumentListener.h>

#include <com/apple/laf/AquaFileChooserUI.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/event/DocumentEvent.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$SaveTextDocumentListener_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$SaveTextDocumentListener, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$SaveTextDocumentListener_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaFileChooserUI$SaveTextDocumentListener::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$SaveTextDocumentListener::init$))},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"textChanged", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _AquaFileChooserUI$SaveTextDocumentListener_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$SaveTextDocumentListener", "com.apple.laf.AquaFileChooserUI", "SaveTextDocumentListener", $PROTECTED},
	{}
};

$ClassInfo _AquaFileChooserUI$SaveTextDocumentListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$SaveTextDocumentListener",
	"java.lang.Object",
	"javax.swing.event.DocumentListener",
	_AquaFileChooserUI$SaveTextDocumentListener_FieldInfo_,
	_AquaFileChooserUI$SaveTextDocumentListener_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$SaveTextDocumentListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$SaveTextDocumentListener($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$SaveTextDocumentListener));
}

void AquaFileChooserUI$SaveTextDocumentListener::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaFileChooserUI$SaveTextDocumentListener::insertUpdate($DocumentEvent* e) {
	textChanged();
}

void AquaFileChooserUI$SaveTextDocumentListener::removeUpdate($DocumentEvent* e) {
	textChanged();
}

void AquaFileChooserUI$SaveTextDocumentListener::changedUpdate($DocumentEvent* e) {
}

void AquaFileChooserUI$SaveTextDocumentListener::textChanged() {
	this->this$0->updateButtonState($(this->this$0->getFileChooser()));
}

AquaFileChooserUI$SaveTextDocumentListener::AquaFileChooserUI$SaveTextDocumentListener() {
}

$Class* AquaFileChooserUI$SaveTextDocumentListener::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$SaveTextDocumentListener, name, initialize, &_AquaFileChooserUI$SaveTextDocumentListener_ClassInfo_, allocate$AquaFileChooserUI$SaveTextDocumentListener);
	return class$;
}

$Class* AquaFileChooserUI$SaveTextDocumentListener::class$ = nullptr;

		} // laf
	} // apple
} // com