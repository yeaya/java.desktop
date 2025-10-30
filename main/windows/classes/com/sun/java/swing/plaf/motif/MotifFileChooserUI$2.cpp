#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$2.h>

#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI.h>
#include <java/awt/Insets.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $MotifFileChooserUI = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPanel = ::javax::swing::JPanel;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifFileChooserUI$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifFileChooserUI$2, this$0)},
	{}
};

$MethodInfo _MotifFileChooserUI$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;)V", nullptr, 0, $method(static_cast<void(MotifFileChooserUI$2::*)($MotifFileChooserUI*)>(&MotifFileChooserUI$2::init$))},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifFileChooserUI$2_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _MotifFileChooserUI$2_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifFileChooserUI$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI$2",
	"javax.swing.JPanel",
	nullptr,
	_MotifFileChooserUI$2_FieldInfo_,
	_MotifFileChooserUI$2_MethodInfo_,
	nullptr,
	&_MotifFileChooserUI$2_EnclosingMethodInfo_,
	_MotifFileChooserUI$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI"
};

$Object* allocate$MotifFileChooserUI$2($Class* clazz) {
	return $of($alloc(MotifFileChooserUI$2));
}

void MotifFileChooserUI$2::init$($MotifFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$JPanel::init$();
}

$Insets* MotifFileChooserUI$2::getInsets() {
	$init($MotifFileChooserUI);
	return $MotifFileChooserUI::insets;
}

MotifFileChooserUI$2::MotifFileChooserUI$2() {
}

$Class* MotifFileChooserUI$2::load$($String* name, bool initialize) {
	$loadClass(MotifFileChooserUI$2, name, initialize, &_MotifFileChooserUI$2_ClassInfo_, allocate$MotifFileChooserUI$2);
	return class$;
}

$Class* MotifFileChooserUI$2::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com