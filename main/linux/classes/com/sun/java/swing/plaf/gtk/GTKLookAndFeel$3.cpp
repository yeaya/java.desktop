#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$3.h>

#include <com/sun/java/swing/plaf/gtk/GTKIconFactory.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/synth/SynthIcon.h>
#include <jcpp.h>

using $GTKIconFactory = ::com::sun::java::swing::plaf::gtk::GTKIconFactory;
using $GTKLookAndFeel = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKLookAndFeel$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(GTKLookAndFeel$3, this$0)},
	{}
};

$MethodInfo _GTKLookAndFeel$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel;)V", nullptr, 0, $method(static_cast<void(GTKLookAndFeel$3::*)($GTKLookAndFeel*)>(&GTKLookAndFeel$3::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _GTKLookAndFeel$3_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel",
	"initComponentDefaults",
	"(Ljavax/swing/UIDefaults;)V"
};

$InnerClassInfo _GTKLookAndFeel$3_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$3", nullptr, nullptr, 0},
	{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GTKLookAndFeel$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$3",
	"java.lang.Object",
	"javax.swing.UIDefaults$ActiveValue",
	_GTKLookAndFeel$3_FieldInfo_,
	_GTKLookAndFeel$3_MethodInfo_,
	nullptr,
	&_GTKLookAndFeel$3_EnclosingMethodInfo_,
	_GTKLookAndFeel$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel"
};

$Object* allocate$GTKLookAndFeel$3($Class* clazz) {
	return $of($alloc(GTKLookAndFeel$3));
}

void GTKLookAndFeel$3::init$($GTKLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* GTKLookAndFeel$3::createValue($UIDefaults* table) {
	return $of($GTKIconFactory::getToolBarHandleIcon());
}

GTKLookAndFeel$3::GTKLookAndFeel$3() {
}

$Class* GTKLookAndFeel$3::load$($String* name, bool initialize) {
	$loadClass(GTKLookAndFeel$3, name, initialize, &_GTKLookAndFeel$3_ClassInfo_, allocate$GTKLookAndFeel$3);
	return class$;
}

$Class* GTKLookAndFeel$3::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com