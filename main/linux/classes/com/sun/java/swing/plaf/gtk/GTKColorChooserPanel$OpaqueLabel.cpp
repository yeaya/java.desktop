#include <com/sun/java/swing/plaf/gtk/GTKColorChooserPanel$OpaqueLabel.h>

#include <com/sun/java/swing/plaf/gtk/GTKColorChooserPanel.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $GTKColorChooserPanel = ::com::sun::java::swing::plaf::gtk::GTKColorChooserPanel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKColorChooserPanel$OpaqueLabel_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKColorChooserPanel;", nullptr, $FINAL | $SYNTHETIC, $field(GTKColorChooserPanel$OpaqueLabel, this$0)},
	{}
};

$MethodInfo _GTKColorChooserPanel$OpaqueLabel_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKColorChooserPanel;)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel$OpaqueLabel::*)($GTKColorChooserPanel*)>(&GTKColorChooserPanel$OpaqueLabel::init$))},
	{"isOpaque", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKColorChooserPanel$OpaqueLabel_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKColorChooserPanel$OpaqueLabel", "com.sun.java.swing.plaf.gtk.GTKColorChooserPanel", "OpaqueLabel", $PRIVATE},
	{}
};

$ClassInfo _GTKColorChooserPanel$OpaqueLabel_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKColorChooserPanel$OpaqueLabel",
	"javax.swing.JLabel",
	nullptr,
	_GTKColorChooserPanel$OpaqueLabel_FieldInfo_,
	_GTKColorChooserPanel$OpaqueLabel_MethodInfo_,
	nullptr,
	nullptr,
	_GTKColorChooserPanel$OpaqueLabel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKColorChooserPanel"
};

$Object* allocate$GTKColorChooserPanel$OpaqueLabel($Class* clazz) {
	return $of($alloc(GTKColorChooserPanel$OpaqueLabel));
}

void GTKColorChooserPanel$OpaqueLabel::init$($GTKColorChooserPanel* this$0) {
	$set(this, this$0, this$0);
	$JLabel::init$();
}

bool GTKColorChooserPanel$OpaqueLabel::isOpaque() {
	return true;
}

GTKColorChooserPanel$OpaqueLabel::GTKColorChooserPanel$OpaqueLabel() {
}

$Class* GTKColorChooserPanel$OpaqueLabel::load$($String* name, bool initialize) {
	$loadClass(GTKColorChooserPanel$OpaqueLabel, name, initialize, &_GTKColorChooserPanel$OpaqueLabel_ClassInfo_, allocate$GTKColorChooserPanel$OpaqueLabel);
	return class$;
}

$Class* GTKColorChooserPanel$OpaqueLabel::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com