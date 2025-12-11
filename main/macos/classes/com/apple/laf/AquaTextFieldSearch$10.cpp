#include <com/apple/laf/AquaTextFieldSearch$10.h>

#include <com/apple/laf/AquaTextFieldSearch.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTextFieldSearch$10_FieldInfo_[] = {
	{"val$c", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$10, val$c)},
	{}
};

$MethodInfo _AquaTextFieldSearch$10_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $method(static_cast<void(AquaTextFieldSearch$10::*)($String*,$JTextComponent*)>(&AquaTextFieldSearch$10::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaTextFieldSearch$10_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaTextFieldSearch",
	"getCancelButton",
	"(Ljavax/swing/text/JTextComponent;)Ljavax/swing/JButton;"
};

$InnerClassInfo _AquaTextFieldSearch$10_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTextFieldSearch$10", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTextFieldSearch$10_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTextFieldSearch$10",
	"javax.swing.AbstractAction",
	nullptr,
	_AquaTextFieldSearch$10_FieldInfo_,
	_AquaTextFieldSearch$10_MethodInfo_,
	nullptr,
	&_AquaTextFieldSearch$10_EnclosingMethodInfo_,
	_AquaTextFieldSearch$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTextFieldSearch"
};

$Object* allocate$AquaTextFieldSearch$10($Class* clazz) {
	return $of($alloc(AquaTextFieldSearch$10));
}

void AquaTextFieldSearch$10::init$($String* name, $JTextComponent* val$c) {
	$set(this, val$c, val$c);
	$AbstractAction::init$(name);
}

void AquaTextFieldSearch$10::actionPerformed($ActionEvent* e) {
	$nc(this->val$c)->setText(""_s);
}

AquaTextFieldSearch$10::AquaTextFieldSearch$10() {
}

$Class* AquaTextFieldSearch$10::load$($String* name, bool initialize) {
	$loadClass(AquaTextFieldSearch$10, name, initialize, &_AquaTextFieldSearch$10_ClassInfo_, allocate$AquaTextFieldSearch$10);
	return class$;
}

$Class* AquaTextFieldSearch$10::class$ = nullptr;

		} // laf
	} // apple
} // com