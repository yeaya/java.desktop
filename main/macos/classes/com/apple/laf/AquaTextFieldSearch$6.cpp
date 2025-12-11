#include <com/apple/laf/AquaTextFieldSearch$6.h>

#include <com/apple/laf/AquaTextFieldSearch.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTextFieldSearch$6_FieldInfo_[] = {
	{"val$c", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$6, val$c)},
	{"val$b", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$6, val$b)},
	{"val$findPopup", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$6, val$findPopup)},
	{}
};

$MethodInfo _AquaTextFieldSearch$6_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljavax/swing/JButton;Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $method(static_cast<void(AquaTextFieldSearch$6::*)(Object$*,$JButton*,$JTextComponent*)>(&AquaTextFieldSearch$6::init$))},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaTextFieldSearch$6_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaTextFieldSearch",
	"getFindButton",
	"(Ljavax/swing/text/JTextComponent;)Ljavax/swing/JButton;"
};

$InnerClassInfo _AquaTextFieldSearch$6_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTextFieldSearch$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTextFieldSearch$6_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTextFieldSearch$6",
	"java.awt.event.MouseAdapter",
	nullptr,
	_AquaTextFieldSearch$6_FieldInfo_,
	_AquaTextFieldSearch$6_MethodInfo_,
	nullptr,
	&_AquaTextFieldSearch$6_EnclosingMethodInfo_,
	_AquaTextFieldSearch$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTextFieldSearch"
};

$Object* allocate$AquaTextFieldSearch$6($Class* clazz) {
	return $of($alloc(AquaTextFieldSearch$6));
}

void AquaTextFieldSearch$6::init$(Object$* val$findPopup, $JButton* val$b, $JTextComponent* val$c) {
	$set(this, val$findPopup, val$findPopup);
	$set(this, val$b, val$b);
	$set(this, val$c, val$c);
	$MouseAdapter::init$();
}

void AquaTextFieldSearch$6::mousePressed($MouseEvent* e) {
	$nc(($cast($JPopupMenu, this->val$findPopup)))->show(this->val$b, 8, $nc(this->val$b)->getHeight() - 2);
	$nc(this->val$c)->requestFocusInWindow();
	$nc(this->val$c)->repaint();
}

AquaTextFieldSearch$6::AquaTextFieldSearch$6() {
}

$Class* AquaTextFieldSearch$6::load$($String* name, bool initialize) {
	$loadClass(AquaTextFieldSearch$6, name, initialize, &_AquaTextFieldSearch$6_ClassInfo_, allocate$AquaTextFieldSearch$6);
	return class$;
}

$Class* AquaTextFieldSearch$6::class$ = nullptr;

		} // laf
	} // apple
} // com