#include <com/apple/laf/AquaTextFieldSearch$7.h>

#include <com/apple/laf/AquaTextFieldSearch.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $AquaTextFieldSearch = ::com::apple::laf::AquaTextFieldSearch;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTextFieldSearch$7_FieldInfo_[] = {
	{"val$c", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$7, val$c)},
	{"val$label", "Ljavax/swing/JLabel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$7, val$label)},
	{}
};

$MethodInfo _AquaTextFieldSearch$7_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JLabel;Ljavax/swing/text/JTextComponent;)V", "()V", 0, $method(static_cast<void(AquaTextFieldSearch$7::*)($JLabel*,$JTextComponent*)>(&AquaTextFieldSearch$7::init$))},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaTextFieldSearch$7_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaTextFieldSearch",
	"getPromptLabel",
	"(Ljavax/swing/text/JTextComponent;)Ljava/awt/Component;"
};

$InnerClassInfo _AquaTextFieldSearch$7_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTextFieldSearch$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTextFieldSearch$7_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTextFieldSearch$7",
	"java.lang.Object",
	"javax.swing.event.DocumentListener",
	_AquaTextFieldSearch$7_FieldInfo_,
	_AquaTextFieldSearch$7_MethodInfo_,
	nullptr,
	&_AquaTextFieldSearch$7_EnclosingMethodInfo_,
	_AquaTextFieldSearch$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTextFieldSearch"
};

$Object* allocate$AquaTextFieldSearch$7($Class* clazz) {
	return $of($alloc(AquaTextFieldSearch$7));
}

void AquaTextFieldSearch$7::init$($JLabel* val$label, $JTextComponent* val$c) {
	$set(this, val$label, val$label);
	$set(this, val$c, val$c);
}

void AquaTextFieldSearch$7::changedUpdate($DocumentEvent* e) {
	$AquaTextFieldSearch::updatePromptLabel(this->val$label, this->val$c);
}

void AquaTextFieldSearch$7::insertUpdate($DocumentEvent* e) {
	$AquaTextFieldSearch::updatePromptLabel(this->val$label, this->val$c);
}

void AquaTextFieldSearch$7::removeUpdate($DocumentEvent* e) {
	$AquaTextFieldSearch::updatePromptLabel(this->val$label, this->val$c);
}

AquaTextFieldSearch$7::AquaTextFieldSearch$7() {
}

$Class* AquaTextFieldSearch$7::load$($String* name, bool initialize) {
	$loadClass(AquaTextFieldSearch$7, name, initialize, &_AquaTextFieldSearch$7_ClassInfo_, allocate$AquaTextFieldSearch$7);
	return class$;
}

$Class* AquaTextFieldSearch$7::class$ = nullptr;

		} // laf
	} // apple
} // com