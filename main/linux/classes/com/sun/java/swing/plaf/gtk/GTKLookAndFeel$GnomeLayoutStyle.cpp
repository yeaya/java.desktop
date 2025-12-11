#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$GnomeLayoutStyle.h>

#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$4.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel.h>
#include <java/awt/Container.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LayoutStyle$ComponentPlacement.h>
#include <javax/swing/SwingConstants.h>
#include <sun/swing/DefaultLayoutStyle.h>
#include <jcpp.h>

#undef EAST
#undef INSTANCE
#undef WEST

using $GTKLookAndFeel$4 = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel$4;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $LayoutStyle$ComponentPlacement = ::javax::swing::LayoutStyle$ComponentPlacement;
using $SwingConstants = ::javax::swing::SwingConstants;
using $DefaultLayoutStyle = ::sun::swing::DefaultLayoutStyle;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKLookAndFeel$GnomeLayoutStyle_FieldInfo_[] = {
	{"INSTANCE", "Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel$GnomeLayoutStyle;", nullptr, $PRIVATE | $STATIC, $staticField(GTKLookAndFeel$GnomeLayoutStyle, INSTANCE)},
	{}
};

$MethodInfo _GTKLookAndFeel$GnomeLayoutStyle_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GTKLookAndFeel$GnomeLayoutStyle::*)()>(&GTKLookAndFeel$GnomeLayoutStyle::init$))},
	{"getContainerGap", "(Ljavax/swing/JComponent;ILjava/awt/Container;)I", nullptr, $PUBLIC},
	{"getPreferredGap", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;Ljavax/swing/LayoutStyle$ComponentPlacement;ILjava/awt/Container;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKLookAndFeel$GnomeLayoutStyle_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$GnomeLayoutStyle", "com.sun.java.swing.plaf.gtk.GTKLookAndFeel", "GnomeLayoutStyle", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GTKLookAndFeel$GnomeLayoutStyle_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$GnomeLayoutStyle",
	"sun.swing.DefaultLayoutStyle",
	nullptr,
	_GTKLookAndFeel$GnomeLayoutStyle_FieldInfo_,
	_GTKLookAndFeel$GnomeLayoutStyle_MethodInfo_,
	nullptr,
	nullptr,
	_GTKLookAndFeel$GnomeLayoutStyle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel"
};

$Object* allocate$GTKLookAndFeel$GnomeLayoutStyle($Class* clazz) {
	return $of($alloc(GTKLookAndFeel$GnomeLayoutStyle));
}

GTKLookAndFeel$GnomeLayoutStyle* GTKLookAndFeel$GnomeLayoutStyle::INSTANCE = nullptr;

void GTKLookAndFeel$GnomeLayoutStyle::init$() {
	$DefaultLayoutStyle::init$();
}

int32_t GTKLookAndFeel$GnomeLayoutStyle::getPreferredGap($JComponent* component1, $JComponent* component2, $LayoutStyle$ComponentPlacement* type, int32_t position, $Container* parent) {
	$DefaultLayoutStyle::getPreferredGap(component1, component2, type, position, parent);
	$init($GTKLookAndFeel$4);
	switch ($nc($GTKLookAndFeel$4::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement)->get($nc((type))->ordinal())) {
	case 1:
		{
			if (position == $SwingConstants::EAST || position == $SwingConstants::WEST) {
				return 12;
			}
		}
	case 2:
		{
			if (isLabelAndNonlabel(component1, component2, position)) {
				return 12;
			}
			return 6;
		}
	case 3:
		{
			return 12;
		}
	}
	return 0;
}

int32_t GTKLookAndFeel$GnomeLayoutStyle::getContainerGap($JComponent* component, int32_t position, $Container* parent) {
	$DefaultLayoutStyle::getContainerGap(component, position, parent);
	return 12;
}

void clinit$GTKLookAndFeel$GnomeLayoutStyle($Class* class$) {
	$assignStatic(GTKLookAndFeel$GnomeLayoutStyle::INSTANCE, $new(GTKLookAndFeel$GnomeLayoutStyle));
}

GTKLookAndFeel$GnomeLayoutStyle::GTKLookAndFeel$GnomeLayoutStyle() {
}

$Class* GTKLookAndFeel$GnomeLayoutStyle::load$($String* name, bool initialize) {
	$loadClass(GTKLookAndFeel$GnomeLayoutStyle, name, initialize, &_GTKLookAndFeel$GnomeLayoutStyle_ClassInfo_, clinit$GTKLookAndFeel$GnomeLayoutStyle, allocate$GTKLookAndFeel$GnomeLayoutStyle);
	return class$;
}

$Class* GTKLookAndFeel$GnomeLayoutStyle::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com