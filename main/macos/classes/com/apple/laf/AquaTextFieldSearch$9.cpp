#include <com/apple/laf/AquaTextFieldSearch$9.h>

#include <com/apple/laf/AquaTextFieldSearch.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $AquaTextFieldSearch = ::com::apple::laf::AquaTextFieldSearch;
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

$FieldInfo _AquaTextFieldSearch$9_FieldInfo_[] = {
	{"val$text", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$9, val$text)},
	{"val$label", "Ljavax/swing/JLabel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$9, val$label)},
	{}
};

$MethodInfo _AquaTextFieldSearch$9_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JLabel;Ljavax/swing/text/JTextComponent;)V", "()V", 0, $method(static_cast<void(AquaTextFieldSearch$9::*)($JLabel*,$JTextComponent*)>(&AquaTextFieldSearch$9::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaTextFieldSearch$9_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaTextFieldSearch",
	"updatePromptLabel",
	"(Ljavax/swing/JLabel;Ljavax/swing/text/JTextComponent;)V"
};

$InnerClassInfo _AquaTextFieldSearch$9_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTextFieldSearch$9", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTextFieldSearch$9_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTextFieldSearch$9",
	"java.lang.Object",
	"java.lang.Runnable",
	_AquaTextFieldSearch$9_FieldInfo_,
	_AquaTextFieldSearch$9_MethodInfo_,
	nullptr,
	&_AquaTextFieldSearch$9_EnclosingMethodInfo_,
	_AquaTextFieldSearch$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTextFieldSearch"
};

$Object* allocate$AquaTextFieldSearch$9($Class* clazz) {
	return $of($alloc(AquaTextFieldSearch$9));
}

void AquaTextFieldSearch$9::init$($JLabel* val$label, $JTextComponent* val$text) {
	$set(this, val$label, val$label);
	$set(this, val$text, val$text);
}

void AquaTextFieldSearch$9::run() {
	$AquaTextFieldSearch::updatePromptLabelOnEDT(this->val$label, this->val$text);
}

AquaTextFieldSearch$9::AquaTextFieldSearch$9() {
}

$Class* AquaTextFieldSearch$9::load$($String* name, bool initialize) {
	$loadClass(AquaTextFieldSearch$9, name, initialize, &_AquaTextFieldSearch$9_ClassInfo_, allocate$AquaTextFieldSearch$9);
	return class$;
}

$Class* AquaTextFieldSearch$9::class$ = nullptr;

		} // laf
	} // apple
} // com