#include <com/apple/laf/AquaTextFieldSearch$4.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaIcon$DynamicallySizingJRSUIIcon.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaTextFieldSearch.h>
#include <javax/swing/JButton.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaIcon$DynamicallySizingJRSUIIcon = ::com::apple::laf::AquaIcon$DynamicallySizingJRSUIIcon;
using $AquaTextFieldSearch = ::com::apple::laf::AquaTextFieldSearch;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTextFieldSearch$4_FieldInfo_[] = {
	{"val$b", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$4, val$b)},
	{"val$icon", "Lcom/apple/laf/AquaIcon$DynamicallySizingJRSUIIcon;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$4, val$icon)},
	{}
};

$MethodInfo _AquaTextFieldSearch$4_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaIcon$DynamicallySizingJRSUIIcon;Ljavax/swing/JButton;)V", "()V", 0, $method(static_cast<void(AquaTextFieldSearch$4::*)($AquaIcon$DynamicallySizingJRSUIIcon*,$JButton*)>(&AquaTextFieldSearch$4::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaTextFieldSearch$4_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaTextFieldSearch",
	"createButton",
	"(Ljavax/swing/text/JTextComponent;Lcom/apple/laf/AquaIcon$DynamicallySizingJRSUIIcon;)Ljavax/swing/JButton;"
};

$InnerClassInfo _AquaTextFieldSearch$4_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTextFieldSearch$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaIcon$DynamicallySizingJRSUIIcon", "com.apple.laf.AquaIcon", "DynamicallySizingJRSUIIcon", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaTextFieldSearch$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTextFieldSearch$4",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_AquaTextFieldSearch$4_FieldInfo_,
	_AquaTextFieldSearch$4_MethodInfo_,
	nullptr,
	&_AquaTextFieldSearch$4_EnclosingMethodInfo_,
	_AquaTextFieldSearch$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTextFieldSearch"
};

$Object* allocate$AquaTextFieldSearch$4($Class* clazz) {
	return $of($alloc(AquaTextFieldSearch$4));
}

void AquaTextFieldSearch$4::init$($AquaIcon$DynamicallySizingJRSUIIcon* val$icon, $JButton* val$b) {
	$set(this, val$icon, val$icon);
	$set(this, val$b, val$b);
}

void AquaTextFieldSearch$4::stateChanged($ChangeEvent* e) {
	$nc($nc($nc(this->val$icon)->painter)->state)->set($($AquaTextFieldSearch::getState(this->val$b)));
}

AquaTextFieldSearch$4::AquaTextFieldSearch$4() {
}

$Class* AquaTextFieldSearch$4::load$($String* name, bool initialize) {
	$loadClass(AquaTextFieldSearch$4, name, initialize, &_AquaTextFieldSearch$4_ClassInfo_, allocate$AquaTextFieldSearch$4);
	return class$;
}

$Class* AquaTextFieldSearch$4::class$ = nullptr;

		} // laf
	} // apple
} // com