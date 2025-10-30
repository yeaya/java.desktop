#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$6.h>

#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef MAX_SIZE

using $MotifFileChooserUI = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifFileChooserUI$6_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifFileChooserUI$6, this$0)},
	{}
};

$MethodInfo _MotifFileChooserUI$6_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(MotifFileChooserUI$6::*)($MotifFileChooserUI*,$String*)>(&MotifFileChooserUI$6::init$))},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifFileChooserUI$6_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _MotifFileChooserUI$6_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifFileChooserUI$6_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI$6",
	"javax.swing.JButton",
	nullptr,
	_MotifFileChooserUI$6_FieldInfo_,
	_MotifFileChooserUI$6_MethodInfo_,
	nullptr,
	&_MotifFileChooserUI$6_EnclosingMethodInfo_,
	_MotifFileChooserUI$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI"
};

$Object* allocate$MotifFileChooserUI$6($Class* clazz) {
	return $of($alloc(MotifFileChooserUI$6));
}

void MotifFileChooserUI$6::init$($MotifFileChooserUI* this$0, $String* text) {
	$set(this, this$0, this$0);
	$JButton::init$(text);
}

$Dimension* MotifFileChooserUI$6::getMaximumSize() {
	$init($MotifFileChooserUI);
	return $new($Dimension, $nc($MotifFileChooserUI::MAX_SIZE)->width, $nc($(this->getPreferredSize()))->height);
}

MotifFileChooserUI$6::MotifFileChooserUI$6() {
}

$Class* MotifFileChooserUI$6::load$($String* name, bool initialize) {
	$loadClass(MotifFileChooserUI$6, name, initialize, &_MotifFileChooserUI$6_ClassInfo_, allocate$MotifFileChooserUI$6);
	return class$;
}

$Class* MotifFileChooserUI$6::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com