#include <com/apple/laf/AquaTextFieldSearch$8.h>

#include <com/apple/laf/AquaTextFieldSearch.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $AquaTextFieldSearch = ::com::apple::laf::AquaTextFieldSearch;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTextFieldSearch$8_FieldInfo_[] = {
	{"val$c", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$8, val$c)},
	{"val$label", "Ljavax/swing/JLabel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$8, val$label)},
	{}
};

$MethodInfo _AquaTextFieldSearch$8_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JLabel;Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $method(static_cast<void(AquaTextFieldSearch$8::*)($JLabel*,$JTextComponent*)>(&AquaTextFieldSearch$8::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaTextFieldSearch$8_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaTextFieldSearch",
	"getPromptLabel",
	"(Ljavax/swing/text/JTextComponent;)Ljava/awt/Component;"
};

$InnerClassInfo _AquaTextFieldSearch$8_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTextFieldSearch$8", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTextFieldSearch$8_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTextFieldSearch$8",
	"java.awt.event.FocusAdapter",
	nullptr,
	_AquaTextFieldSearch$8_FieldInfo_,
	_AquaTextFieldSearch$8_MethodInfo_,
	nullptr,
	&_AquaTextFieldSearch$8_EnclosingMethodInfo_,
	_AquaTextFieldSearch$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTextFieldSearch"
};

$Object* allocate$AquaTextFieldSearch$8($Class* clazz) {
	return $of($alloc(AquaTextFieldSearch$8));
}

void AquaTextFieldSearch$8::init$($JLabel* val$label, $JTextComponent* val$c) {
	$set(this, val$label, val$label);
	$set(this, val$c, val$c);
	$FocusAdapter::init$();
}

void AquaTextFieldSearch$8::focusGained($FocusEvent* e) {
	$AquaTextFieldSearch::updatePromptLabel(this->val$label, this->val$c);
}

void AquaTextFieldSearch$8::focusLost($FocusEvent* e) {
	$AquaTextFieldSearch::updatePromptLabel(this->val$label, this->val$c);
}

AquaTextFieldSearch$8::AquaTextFieldSearch$8() {
}

$Class* AquaTextFieldSearch$8::load$($String* name, bool initialize) {
	$loadClass(AquaTextFieldSearch$8, name, initialize, &_AquaTextFieldSearch$8_ClassInfo_, allocate$AquaTextFieldSearch$8);
	return class$;
}

$Class* AquaTextFieldSearch$8::class$ = nullptr;

		} // laf
	} // apple
} // com