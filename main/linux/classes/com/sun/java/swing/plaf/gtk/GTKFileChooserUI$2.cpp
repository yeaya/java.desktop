#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$2.h>

#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKFileChooserUI$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$2, this$0)},
	{}
};

$MethodInfo _GTKFileChooserUI$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(GTKFileChooserUI$2::*)($GTKFileChooserUI*,$String*)>(&GTKFileChooserUI$2::init$))},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _GTKFileChooserUI$2_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _GTKFileChooserUI$2_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GTKFileChooserUI$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$2",
	"javax.swing.JLabel",
	nullptr,
	_GTKFileChooserUI$2_FieldInfo_,
	_GTKFileChooserUI$2_MethodInfo_,
	nullptr,
	&_GTKFileChooserUI$2_EnclosingMethodInfo_,
	_GTKFileChooserUI$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
};

$Object* allocate$GTKFileChooserUI$2($Class* clazz) {
	return $of($alloc(GTKFileChooserUI$2));
}

void GTKFileChooserUI$2::init$($GTKFileChooserUI* this$0, $String* text) {
	$set(this, this$0, this$0);
	$JLabel::init$(text);
}

$Dimension* GTKFileChooserUI$2::getMaximumSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, d, $JLabel::getMaximumSize());
	$nc(d)->height = $nc($(getPreferredSize()))->height;
	return d;
}

GTKFileChooserUI$2::GTKFileChooserUI$2() {
}

$Class* GTKFileChooserUI$2::load$($String* name, bool initialize) {
	$loadClass(GTKFileChooserUI$2, name, initialize, &_GTKFileChooserUI$2_ClassInfo_, allocate$GTKFileChooserUI$2);
	return class$;
}

$Class* GTKFileChooserUI$2::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com