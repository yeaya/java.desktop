#include <com/apple/laf/AquaMenuItemUI$1.h>

#include <com/apple/laf/AquaMenuItemUI.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

using $AquaMenuItemUI = ::com::apple::laf::AquaMenuItemUI;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenuItem = ::javax::swing::JMenuItem;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaMenuItemUI$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaMenuItemUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaMenuItemUI$1, this$0)},
	{"val$size", "Ljava/awt/Dimension;", nullptr, $FINAL | $SYNTHETIC, $field(AquaMenuItemUI$1, val$size)},
	{}
};

$MethodInfo _AquaMenuItemUI$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaMenuItemUI;Ljava/awt/Dimension;)V", "()V", 0, $method(static_cast<void(AquaMenuItemUI$1::*)($AquaMenuItemUI*,$Dimension*)>(&AquaMenuItemUI$1::init$))},
	{"paintSelected", "(Z)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaMenuItemUI$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaMenuItemUI",
	"doClick",
	"(Ljavax/swing/MenuSelectionManager;)V"
};

$InnerClassInfo _AquaMenuItemUI$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaMenuItemUI$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$Selectable", "com.apple.laf.AquaUtils", "Selectable", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaMenuItemUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaMenuItemUI$1",
	"java.lang.Object",
	"com.apple.laf.AquaUtils$Selectable",
	_AquaMenuItemUI$1_FieldInfo_,
	_AquaMenuItemUI$1_MethodInfo_,
	nullptr,
	&_AquaMenuItemUI$1_EnclosingMethodInfo_,
	_AquaMenuItemUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaMenuItemUI"
};

$Object* allocate$AquaMenuItemUI$1($Class* clazz) {
	return $of($alloc(AquaMenuItemUI$1));
}

void AquaMenuItemUI$1::init$($AquaMenuItemUI* this$0, $Dimension* val$size) {
	$set(this, this$0, this$0);
	$set(this, val$size, val$size);
}

void AquaMenuItemUI$1::paintSelected(bool selected) {
	$useLocalCurrentObjectStackCache();
	$nc($($AquaMenuItemUI::access$000(this->this$0)))->setArmed(selected);
	$nc($($AquaMenuItemUI::access$100(this->this$0)))->paintImmediately(0, 0, $nc(this->val$size)->width, $nc(this->val$size)->height);
}

AquaMenuItemUI$1::AquaMenuItemUI$1() {
}

$Class* AquaMenuItemUI$1::load$($String* name, bool initialize) {
	$loadClass(AquaMenuItemUI$1, name, initialize, &_AquaMenuItemUI$1_ClassInfo_, allocate$AquaMenuItemUI$1);
	return class$;
}

$Class* AquaMenuItemUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com