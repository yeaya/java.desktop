#include <com/apple/laf/AquaTextFieldSearch$11.h>

#include <com/apple/laf/AquaTextFieldSearch.h>
#include <javax/swing/JButton.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $AquaTextFieldSearch = ::com::apple::laf::AquaTextFieldSearch;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTextFieldSearch$11_FieldInfo_[] = {
	{"val$c", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$11, val$c)},
	{"val$b", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$11, val$b)},
	{}
};

$MethodInfo _AquaTextFieldSearch$11_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JButton;Ljavax/swing/text/JTextComponent;)V", "()V", 0, $method(static_cast<void(AquaTextFieldSearch$11::*)($JButton*,$JTextComponent*)>(&AquaTextFieldSearch$11::init$))},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaTextFieldSearch$11_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaTextFieldSearch",
	"getCancelButton",
	"(Ljavax/swing/text/JTextComponent;)Ljavax/swing/JButton;"
};

$InnerClassInfo _AquaTextFieldSearch$11_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTextFieldSearch$11", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTextFieldSearch$11_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTextFieldSearch$11",
	"java.lang.Object",
	"javax.swing.event.DocumentListener",
	_AquaTextFieldSearch$11_FieldInfo_,
	_AquaTextFieldSearch$11_MethodInfo_,
	nullptr,
	&_AquaTextFieldSearch$11_EnclosingMethodInfo_,
	_AquaTextFieldSearch$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTextFieldSearch"
};

$Object* allocate$AquaTextFieldSearch$11($Class* clazz) {
	return $of($alloc(AquaTextFieldSearch$11));
}

void AquaTextFieldSearch$11::init$($JButton* val$b, $JTextComponent* val$c) {
	$set(this, val$b, val$b);
	$set(this, val$c, val$c);
}

void AquaTextFieldSearch$11::changedUpdate($DocumentEvent* e) {
	$AquaTextFieldSearch::updateCancelIcon(this->val$b, this->val$c);
}

void AquaTextFieldSearch$11::insertUpdate($DocumentEvent* e) {
	$AquaTextFieldSearch::updateCancelIcon(this->val$b, this->val$c);
}

void AquaTextFieldSearch$11::removeUpdate($DocumentEvent* e) {
	$AquaTextFieldSearch::updateCancelIcon(this->val$b, this->val$c);
}

AquaTextFieldSearch$11::AquaTextFieldSearch$11() {
}

$Class* AquaTextFieldSearch$11::load$($String* name, bool initialize) {
	$loadClass(AquaTextFieldSearch$11, name, initialize, &_AquaTextFieldSearch$11_ClassInfo_, allocate$AquaTextFieldSearch$11);
	return class$;
}

$Class* AquaTextFieldSearch$11::class$ = nullptr;

		} // laf
	} // apple
} // com