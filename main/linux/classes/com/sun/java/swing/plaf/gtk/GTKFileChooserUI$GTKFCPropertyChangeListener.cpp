#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$GTKFCPropertyChangeListener.h>

#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/beans/PropertyChangeEvent.h>
#include <jcpp.h>

#undef TRUE

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKFileChooserUI$GTKFCPropertyChangeListener_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$GTKFCPropertyChangeListener, this$0)},
	{}
};

$MethodInfo _GTKFileChooserUI$GTKFCPropertyChangeListener_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PRIVATE, $method(static_cast<void(GTKFileChooserUI$GTKFCPropertyChangeListener::*)($GTKFileChooserUI*)>(&GTKFileChooserUI$GTKFCPropertyChangeListener::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKFileChooserUI$GTKFCPropertyChangeListener_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKFCPropertyChangeListener", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "GTKFCPropertyChangeListener", $PRIVATE},
	{}
};

$ClassInfo _GTKFileChooserUI$GTKFCPropertyChangeListener_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKFCPropertyChangeListener",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_GTKFileChooserUI$GTKFCPropertyChangeListener_FieldInfo_,
	_GTKFileChooserUI$GTKFCPropertyChangeListener_MethodInfo_,
	nullptr,
	nullptr,
	_GTKFileChooserUI$GTKFCPropertyChangeListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
};

$Object* allocate$GTKFileChooserUI$GTKFCPropertyChangeListener($Class* clazz) {
	return $of($alloc(GTKFileChooserUI$GTKFCPropertyChangeListener));
}

void GTKFileChooserUI$GTKFCPropertyChangeListener::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void GTKFileChooserUI$GTKFCPropertyChangeListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, prop, $nc(e)->getPropertyName());
	if ($nc(prop)->equals("GTKFileChooser.showDirectoryIcons"_s)) {
		$init($Boolean);
		this->this$0->showDirectoryIcons = $nc($Boolean::TRUE)->equals($(e->getNewValue()));
	} else if (prop->equals("GTKFileChooser.showFileIcons"_s)) {
		$init($Boolean);
		this->this$0->showFileIcons = $nc($Boolean::TRUE)->equals($(e->getNewValue()));
	}
}

GTKFileChooserUI$GTKFCPropertyChangeListener::GTKFileChooserUI$GTKFCPropertyChangeListener() {
}

$Class* GTKFileChooserUI$GTKFCPropertyChangeListener::load$($String* name, bool initialize) {
	$loadClass(GTKFileChooserUI$GTKFCPropertyChangeListener, name, initialize, &_GTKFileChooserUI$GTKFCPropertyChangeListener_ClassInfo_, allocate$GTKFileChooserUI$GTKFCPropertyChangeListener);
	return class$;
}

$Class* GTKFileChooserUI$GTKFCPropertyChangeListener::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com