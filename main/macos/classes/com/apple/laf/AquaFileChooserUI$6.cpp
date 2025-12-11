#include <com/apple/laf/AquaFileChooserUI$6.h>

#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSeparator.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSeparator = ::javax::swing::JSeparator;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$6_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$6, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$6_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, 0, $method(static_cast<void(AquaFileChooserUI$6::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$6::init$))},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaFileChooserUI$6_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _AquaFileChooserUI$6_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaFileChooserUI$6_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$6",
	"javax.swing.JSeparator",
	nullptr,
	_AquaFileChooserUI$6_FieldInfo_,
	_AquaFileChooserUI$6_MethodInfo_,
	nullptr,
	&_AquaFileChooserUI$6_EnclosingMethodInfo_,
	_AquaFileChooserUI$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$6($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$6));
}

void AquaFileChooserUI$6::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$JSeparator::init$();
}

$Dimension* AquaFileChooserUI$6::getPreferredSize() {
	return $new($Dimension, $nc(($cast($JComponent, $(getParent()))))->getWidth(), 3);
}

AquaFileChooserUI$6::AquaFileChooserUI$6() {
}

$Class* AquaFileChooserUI$6::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$6, name, initialize, &_AquaFileChooserUI$6_ClassInfo_, allocate$AquaFileChooserUI$6);
	return class$;
}

$Class* AquaFileChooserUI$6::class$ = nullptr;

		} // laf
	} // apple
} // com