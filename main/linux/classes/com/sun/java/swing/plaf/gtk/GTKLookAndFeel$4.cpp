#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$4.h>

#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/LayoutStyle$ComponentPlacement.h>
#include <javax/swing/LayoutStyle.h>
#include <jcpp.h>

#undef INDENT
#undef RELATED
#undef UNRELATED

using $LayoutStyle$ComponentPlacementArray = $Array<::javax::swing::LayoutStyle$ComponentPlacement>;
using $GTKLookAndFeel = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $LayoutStyle = ::javax::swing::LayoutStyle;
using $LayoutStyle$ComponentPlacement = ::javax::swing::LayoutStyle$ComponentPlacement;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKLookAndFeel$4_FieldInfo_[] = {
	{"$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKLookAndFeel$4, $SwitchMap$javax$swing$LayoutStyle$ComponentPlacement)},
	{}
};

$EnclosingMethodInfo _GTKLookAndFeel$4_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel",
	nullptr,
	nullptr
};

$InnerClassInfo _GTKLookAndFeel$4_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$4", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _GTKLookAndFeel$4_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$4",
	"java.lang.Object",
	nullptr,
	_GTKLookAndFeel$4_FieldInfo_,
	nullptr,
	nullptr,
	&_GTKLookAndFeel$4_EnclosingMethodInfo_,
	_GTKLookAndFeel$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel"
};

$Object* allocate$GTKLookAndFeel$4($Class* clazz) {
	return $of($alloc(GTKLookAndFeel$4));
}

$ints* GTKLookAndFeel$4::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement = nullptr;

void clinit$GTKLookAndFeel$4($Class* class$) {
	$assignStatic(GTKLookAndFeel$4::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement, $new($ints, $($LayoutStyle$ComponentPlacement::values())->length));
	{
		try {
			$nc(GTKLookAndFeel$4::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement)->set($LayoutStyle$ComponentPlacement::INDENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(GTKLookAndFeel$4::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement)->set($LayoutStyle$ComponentPlacement::RELATED->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(GTKLookAndFeel$4::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement)->set($LayoutStyle$ComponentPlacement::UNRELATED->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

GTKLookAndFeel$4::GTKLookAndFeel$4() {
}

$Class* GTKLookAndFeel$4::load$($String* name, bool initialize) {
	$loadClass(GTKLookAndFeel$4, name, initialize, &_GTKLookAndFeel$4_ClassInfo_, clinit$GTKLookAndFeel$4, allocate$GTKLookAndFeel$4);
	return class$;
}

$Class* GTKLookAndFeel$4::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com