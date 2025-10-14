#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$3.h>

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
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

using $MotifFileChooserUI = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifFileChooserUI$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifFileChooserUI$3, this$0)},
	{}
};

$MethodInfo _MotifFileChooserUI$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(MotifFileChooserUI$3::*)($MotifFileChooserUI*,$String*,int32_t)>(&MotifFileChooserUI$3::init$))},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifFileChooserUI$3_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _MotifFileChooserUI$3_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifFileChooserUI$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI$3",
	"javax.swing.JTextField",
	nullptr,
	_MotifFileChooserUI$3_FieldInfo_,
	_MotifFileChooserUI$3_MethodInfo_,
	nullptr,
	&_MotifFileChooserUI$3_EnclosingMethodInfo_,
	_MotifFileChooserUI$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI"
};

$Object* allocate$MotifFileChooserUI$3($Class* clazz) {
	return $of($alloc(MotifFileChooserUI$3));
}

void MotifFileChooserUI$3::init$($MotifFileChooserUI* this$0, $String* text, int32_t columns) {
	$set(this, this$0, this$0);
	$JTextField::init$(text, columns);
}

$Dimension* MotifFileChooserUI$3::getMaximumSize() {
	$var($Dimension, d, $JTextField::getMaximumSize());
	$nc(d)->height = $nc($(getPreferredSize()))->height;
	return d;
}

MotifFileChooserUI$3::MotifFileChooserUI$3() {
}

$Class* MotifFileChooserUI$3::load$($String* name, bool initialize) {
	$loadClass(MotifFileChooserUI$3, name, initialize, &_MotifFileChooserUI$3_ClassInfo_, allocate$MotifFileChooserUI$3);
	return class$;
}

$Class* MotifFileChooserUI$3::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com