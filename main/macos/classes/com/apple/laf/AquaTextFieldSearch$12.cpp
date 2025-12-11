#include <com/apple/laf/AquaTextFieldSearch$12.h>

#include <com/apple/laf/AquaTextFieldSearch.h>
#include <javax/swing/JButton.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $AquaTextFieldSearch = ::com::apple::laf::AquaTextFieldSearch;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTextFieldSearch$12_FieldInfo_[] = {
	{"val$text", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$12, val$text)},
	{"val$button", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$12, val$button)},
	{}
};

$MethodInfo _AquaTextFieldSearch$12_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JButton;Ljavax/swing/text/JTextComponent;)V", "()V", 0, $method(static_cast<void(AquaTextFieldSearch$12::*)($JButton*,$JTextComponent*)>(&AquaTextFieldSearch$12::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaTextFieldSearch$12_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaTextFieldSearch",
	"updateCancelIcon",
	"(Ljavax/swing/JButton;Ljavax/swing/text/JTextComponent;)V"
};

$InnerClassInfo _AquaTextFieldSearch$12_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTextFieldSearch$12", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTextFieldSearch$12_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTextFieldSearch$12",
	"java.lang.Object",
	"java.lang.Runnable",
	_AquaTextFieldSearch$12_FieldInfo_,
	_AquaTextFieldSearch$12_MethodInfo_,
	nullptr,
	&_AquaTextFieldSearch$12_EnclosingMethodInfo_,
	_AquaTextFieldSearch$12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTextFieldSearch"
};

$Object* allocate$AquaTextFieldSearch$12($Class* clazz) {
	return $of($alloc(AquaTextFieldSearch$12));
}

void AquaTextFieldSearch$12::init$($JButton* val$button, $JTextComponent* val$text) {
	$set(this, val$button, val$button);
	$set(this, val$text, val$text);
}

void AquaTextFieldSearch$12::run() {
	$AquaTextFieldSearch::updateCancelIconOnEDT(this->val$button, this->val$text);
}

AquaTextFieldSearch$12::AquaTextFieldSearch$12() {
}

$Class* AquaTextFieldSearch$12::load$($String* name, bool initialize) {
	$loadClass(AquaTextFieldSearch$12, name, initialize, &_AquaTextFieldSearch$12_ClassInfo_, allocate$AquaTextFieldSearch$12);
	return class$;
}

$Class* AquaTextFieldSearch$12::class$ = nullptr;

		} // laf
	} // apple
} // com