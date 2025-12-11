#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$WeakPCL$1.h>

#include <com/sun/java/swing/plaf/gtk/GTKEngine.h>
#include <com/sun/java/swing/plaf/gtk/GTKIconFactory.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$WeakPCL.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

#undef INSTANCE

using $WindowArray = $Array<::java::awt::Window>;
using $GTKEngine = ::com::sun::java::swing::plaf::gtk::GTKEngine;
using $GTKIconFactory = ::com::sun::java::swing::plaf::gtk::GTKIconFactory;
using $GTKLookAndFeel = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel;
using $GTKLookAndFeel$WeakPCL = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel$WeakPCL;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKLookAndFeel$WeakPCL$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel$WeakPCL;", nullptr, $FINAL | $SYNTHETIC, $field(GTKLookAndFeel$WeakPCL$1, this$0)},
	{"val$lnf", "Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(GTKLookAndFeel$WeakPCL$1, val$lnf)},
	{"val$pce", "Ljava/beans/PropertyChangeEvent;", nullptr, $FINAL | $SYNTHETIC, $field(GTKLookAndFeel$WeakPCL$1, val$pce)},
	{}
};

$MethodInfo _GTKLookAndFeel$WeakPCL$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel$WeakPCL;Ljava/beans/PropertyChangeEvent;Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel;)V", "()V", 0, $method(static_cast<void(GTKLookAndFeel$WeakPCL$1::*)($GTKLookAndFeel$WeakPCL*,$PropertyChangeEvent*,$GTKLookAndFeel*)>(&GTKLookAndFeel$WeakPCL$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _GTKLookAndFeel$WeakPCL$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$WeakPCL",
	"propertyChange",
	"(Ljava/beans/PropertyChangeEvent;)V"
};

$InnerClassInfo _GTKLookAndFeel$WeakPCL$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$WeakPCL", "com.sun.java.swing.plaf.gtk.GTKLookAndFeel", "WeakPCL", $STATIC},
	{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$WeakPCL$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GTKLookAndFeel$WeakPCL$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$WeakPCL$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_GTKLookAndFeel$WeakPCL$1_FieldInfo_,
	_GTKLookAndFeel$WeakPCL$1_MethodInfo_,
	nullptr,
	&_GTKLookAndFeel$WeakPCL$1_EnclosingMethodInfo_,
	_GTKLookAndFeel$WeakPCL$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel"
};

$Object* allocate$GTKLookAndFeel$WeakPCL$1($Class* clazz) {
	return $of($alloc(GTKLookAndFeel$WeakPCL$1));
}

void GTKLookAndFeel$WeakPCL$1::init$($GTKLookAndFeel$WeakPCL* this$0, $PropertyChangeEvent* val$pce, $GTKLookAndFeel* val$lnf) {
	$set(this, this$0, this$0);
	$set(this, val$pce, val$pce);
	$set(this, val$lnf, val$lnf);
}

void GTKLookAndFeel$WeakPCL$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(this->val$pce)->getPropertyName());
	if ("gnome.Net/ThemeName"_s->equals(name)) {
		$init($GTKEngine);
		$nc($GTKEngine::INSTANCE)->themeChanged();
		$GTKIconFactory::resetIcons();
	}
	$nc(this->val$lnf)->loadStyles();
	$var($WindowArray, appWindows, $Window::getWindows());
	for (int32_t i = 0; i < $nc(appWindows)->length; ++i) {
		$SynthLookAndFeel::updateStyles(appWindows->get(i));
	}
}

GTKLookAndFeel$WeakPCL$1::GTKLookAndFeel$WeakPCL$1() {
}

$Class* GTKLookAndFeel$WeakPCL$1::load$($String* name, bool initialize) {
	$loadClass(GTKLookAndFeel$WeakPCL$1, name, initialize, &_GTKLookAndFeel$WeakPCL$1_ClassInfo_, allocate$GTKLookAndFeel$WeakPCL$1);
	return class$;
}

$Class* GTKLookAndFeel$WeakPCL$1::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com