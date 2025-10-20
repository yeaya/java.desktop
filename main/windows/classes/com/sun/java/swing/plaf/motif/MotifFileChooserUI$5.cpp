#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$5.h>

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

$FieldInfo _MotifFileChooserUI$5_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifFileChooserUI$5, this$0)},
	{}
};

$MethodInfo _MotifFileChooserUI$5_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;I)V", nullptr, 0, $method(static_cast<void(MotifFileChooserUI$5::*)($MotifFileChooserUI*,int32_t)>(&MotifFileChooserUI$5::init$))},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifFileChooserUI$5_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _MotifFileChooserUI$5_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifFileChooserUI$5_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI$5",
	"javax.swing.JTextField",
	nullptr,
	_MotifFileChooserUI$5_FieldInfo_,
	_MotifFileChooserUI$5_MethodInfo_,
	nullptr,
	&_MotifFileChooserUI$5_EnclosingMethodInfo_,
	_MotifFileChooserUI$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI"
};

$Object* allocate$MotifFileChooserUI$5($Class* clazz) {
	return $of($alloc(MotifFileChooserUI$5));
}

void MotifFileChooserUI$5::init$($MotifFileChooserUI* this$0, int32_t columns) {
	$set(this, this$0, this$0);
	$JTextField::init$(columns);
}

$Dimension* MotifFileChooserUI$5::getMaximumSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, d, $JTextField::getMaximumSize());
	$nc(d)->height = $nc($(getPreferredSize()))->height;
	return d;
}

MotifFileChooserUI$5::MotifFileChooserUI$5() {
}

$Class* MotifFileChooserUI$5::load$($String* name, bool initialize) {
	$loadClass(MotifFileChooserUI$5, name, initialize, &_MotifFileChooserUI$5_ClassInfo_, allocate$MotifFileChooserUI$5);
	return class$;
}

$Class* MotifFileChooserUI$5::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com