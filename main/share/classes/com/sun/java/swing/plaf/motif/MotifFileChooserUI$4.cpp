#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$4.h>

#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $MotifFileChooserUI = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifFileChooserUI$4_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifFileChooserUI$4, this$0)},
	{}
};

$MethodInfo _MotifFileChooserUI$4_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;)V", nullptr, 0, $method(static_cast<void(MotifFileChooserUI$4::*)($MotifFileChooserUI*)>(&MotifFileChooserUI$4::init$))},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifFileChooserUI$4_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _MotifFileChooserUI$4_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifFileChooserUI$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI$4",
	"javax.swing.JComboBox",
	nullptr,
	_MotifFileChooserUI$4_FieldInfo_,
	_MotifFileChooserUI$4_MethodInfo_,
	"Ljavax/swing/JComboBox<Ljavax/swing/filechooser/FileFilter;>;",
	&_MotifFileChooserUI$4_EnclosingMethodInfo_,
	_MotifFileChooserUI$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI"
};

$Object* allocate$MotifFileChooserUI$4($Class* clazz) {
	return $of($alloc(MotifFileChooserUI$4));
}

void MotifFileChooserUI$4::init$($MotifFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$JComboBox::init$();
}

$Dimension* MotifFileChooserUI$4::getMaximumSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, d, $JComboBox::getMaximumSize());
	$nc(d)->height = $nc($(getPreferredSize()))->height;
	return d;
}

MotifFileChooserUI$4::MotifFileChooserUI$4() {
}

$Class* MotifFileChooserUI$4::load$($String* name, bool initialize) {
	$loadClass(MotifFileChooserUI$4, name, initialize, &_MotifFileChooserUI$4_ClassInfo_, allocate$MotifFileChooserUI$4);
	return class$;
}

$Class* MotifFileChooserUI$4::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com