#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$1.h>

#include <com/sun/java/swing/plaf/gtk/GTKColorChooserPanel.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <jcpp.h>

using $AbstractColorChooserPanelArray = $Array<::javax::swing::colorchooser::AbstractColorChooserPanel>;
using $GTKColorChooserPanel = ::com::sun::java::swing::plaf::gtk::GTKColorChooserPanel;
using $GTKLookAndFeel = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$ActiveValue = ::javax::swing::UIDefaults$ActiveValue;
using $AbstractColorChooserPanel = ::javax::swing::colorchooser::AbstractColorChooserPanel;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKLookAndFeel$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(GTKLookAndFeel$1, this$0)},
	{}
};

$MethodInfo _GTKLookAndFeel$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel;)V", nullptr, 0, $method(static_cast<void(GTKLookAndFeel$1::*)($GTKLookAndFeel*)>(&GTKLookAndFeel$1::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _GTKLookAndFeel$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel",
	"initComponentDefaults",
	"(Ljavax/swing/UIDefaults;)V"
};

$InnerClassInfo _GTKLookAndFeel$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$1", nullptr, nullptr, 0},
	{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GTKLookAndFeel$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$1",
	"java.lang.Object",
	"javax.swing.UIDefaults$ActiveValue",
	_GTKLookAndFeel$1_FieldInfo_,
	_GTKLookAndFeel$1_MethodInfo_,
	nullptr,
	&_GTKLookAndFeel$1_EnclosingMethodInfo_,
	_GTKLookAndFeel$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel"
};

$Object* allocate$GTKLookAndFeel$1($Class* clazz) {
	return $of($alloc(GTKLookAndFeel$1));
}

void GTKLookAndFeel$1::init$($GTKLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* GTKLookAndFeel$1::createValue($UIDefaults* table) {
	return $of($new($AbstractColorChooserPanelArray, {static_cast<$AbstractColorChooserPanel*>($$new($GTKColorChooserPanel))}));
}

GTKLookAndFeel$1::GTKLookAndFeel$1() {
}

$Class* GTKLookAndFeel$1::load$($String* name, bool initialize) {
	$loadClass(GTKLookAndFeel$1, name, initialize, &_GTKLookAndFeel$1_ClassInfo_, allocate$GTKLookAndFeel$1);
	return class$;
}

$Class* GTKLookAndFeel$1::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com