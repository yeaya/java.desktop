#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$7.h>

#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI.h>
#include <java/awt/Dimension.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _MotifFileChooserUI$7_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifFileChooserUI$7, this$0)},
	{}
};

$MethodInfo _MotifFileChooserUI$7_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(MotifFileChooserUI$7::*)($MotifFileChooserUI*,$String*)>(&MotifFileChooserUI$7::init$))},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifFileChooserUI$7_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _MotifFileChooserUI$7_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifFileChooserUI$7_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI$7",
	"javax.swing.JButton",
	nullptr,
	_MotifFileChooserUI$7_FieldInfo_,
	_MotifFileChooserUI$7_MethodInfo_,
	nullptr,
	&_MotifFileChooserUI$7_EnclosingMethodInfo_,
	_MotifFileChooserUI$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI"
};

$Object* allocate$MotifFileChooserUI$7($Class* clazz) {
	return $of($alloc(MotifFileChooserUI$7));
}

void MotifFileChooserUI$7::init$($MotifFileChooserUI* this$0, $String* text) {
	$set(this, this$0, this$0);
	$JButton::init$(text);
}

$Dimension* MotifFileChooserUI$7::getMaximumSize() {
	$init($MotifFileChooserUI);
	return $new($Dimension, $nc($MotifFileChooserUI::MAX_SIZE)->width, $nc($(this->getPreferredSize()))->height);
}

MotifFileChooserUI$7::MotifFileChooserUI$7() {
}

$Class* MotifFileChooserUI$7::load$($String* name, bool initialize) {
	$loadClass(MotifFileChooserUI$7, name, initialize, &_MotifFileChooserUI$7_ClassInfo_, allocate$MotifFileChooserUI$7);
	return class$;
}

$Class* MotifFileChooserUI$7::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com