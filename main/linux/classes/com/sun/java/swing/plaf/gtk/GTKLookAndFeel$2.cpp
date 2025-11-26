#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$2.h>

#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel.h>
#include <com/sun/java/swing/plaf/gtk/GTKPainter$TitledBorder.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $GTKLookAndFeel = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel;
using $GTKPainter$TitledBorder = ::com::sun::java::swing::plaf::gtk::GTKPainter$TitledBorder;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKLookAndFeel$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(GTKLookAndFeel$2, this$0)},
	{}
};

$MethodInfo _GTKLookAndFeel$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel;)V", nullptr, 0, $method(static_cast<void(GTKLookAndFeel$2::*)($GTKLookAndFeel*)>(&GTKLookAndFeel$2::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _GTKLookAndFeel$2_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel",
	"initComponentDefaults",
	"(Ljavax/swing/UIDefaults;)V"
};

$InnerClassInfo _GTKLookAndFeel$2_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$2", nullptr, nullptr, 0},
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GTKLookAndFeel$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$2",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	_GTKLookAndFeel$2_FieldInfo_,
	_GTKLookAndFeel$2_MethodInfo_,
	nullptr,
	&_GTKLookAndFeel$2_EnclosingMethodInfo_,
	_GTKLookAndFeel$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel"
};

$Object* allocate$GTKLookAndFeel$2($Class* clazz) {
	return $of($alloc(GTKLookAndFeel$2));
}

void GTKLookAndFeel$2::init$($GTKLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* GTKLookAndFeel$2::createValue($UIDefaults* table) {
	return $of($new($GTKPainter$TitledBorder));
}

GTKLookAndFeel$2::GTKLookAndFeel$2() {
}

$Class* GTKLookAndFeel$2::load$($String* name, bool initialize) {
	$loadClass(GTKLookAndFeel$2, name, initialize, &_GTKLookAndFeel$2_ClassInfo_, allocate$GTKLookAndFeel$2);
	return class$;
}

$Class* GTKLookAndFeel$2::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com