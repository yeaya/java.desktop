#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$3.h>

#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
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
					namespace gtk {

$FieldInfo _GTKFileChooserUI$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$3, this$0)},
	{}
};

$MethodInfo _GTKFileChooserUI$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, 0, $method(static_cast<void(GTKFileChooserUI$3::*)($GTKFileChooserUI*)>(&GTKFileChooserUI$3::init$))},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _GTKFileChooserUI$3_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _GTKFileChooserUI$3_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GTKFileChooserUI$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$3",
	"javax.swing.JTextField",
	nullptr,
	_GTKFileChooserUI$3_FieldInfo_,
	_GTKFileChooserUI$3_MethodInfo_,
	nullptr,
	&_GTKFileChooserUI$3_EnclosingMethodInfo_,
	_GTKFileChooserUI$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
};

$Object* allocate$GTKFileChooserUI$3($Class* clazz) {
	return $of($alloc(GTKFileChooserUI$3));
}

void GTKFileChooserUI$3::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$JTextField::init$();
}

$Dimension* GTKFileChooserUI$3::getMaximumSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, d, $JTextField::getMaximumSize());
	$nc(d)->height = $nc($(getPreferredSize()))->height;
	return d;
}

GTKFileChooserUI$3::GTKFileChooserUI$3() {
}

$Class* GTKFileChooserUI$3::load$($String* name, bool initialize) {
	$loadClass(GTKFileChooserUI$3, name, initialize, &_GTKFileChooserUI$3_ClassInfo_, allocate$GTKFileChooserUI$3);
	return class$;
}

$Class* GTKFileChooserUI$3::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com