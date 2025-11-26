#include <com/sun/java/swing/plaf/gtk/GTKConstants$IconSize.h>

#include <com/sun/java/swing/plaf/gtk/GTKConstants.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BUTTON
#undef DIALOG
#undef DND
#undef INVALID
#undef LARGE_TOOLBAR
#undef MENU
#undef SMALL_TOOLBAR

using $GTKConstants$IconSizeArray = $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$IconSize>;
using $GTKConstants = ::com::sun::java::swing::plaf::gtk::GTKConstants;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKConstants$IconSize_FieldInfo_[] = {
	{"INVALID", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$IconSize;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$IconSize, INVALID)},
	{"MENU", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$IconSize;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$IconSize, MENU)},
	{"SMALL_TOOLBAR", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$IconSize;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$IconSize, SMALL_TOOLBAR)},
	{"LARGE_TOOLBAR", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$IconSize;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$IconSize, LARGE_TOOLBAR)},
	{"BUTTON", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$IconSize;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$IconSize, BUTTON)},
	{"DND", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$IconSize;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$IconSize, DND)},
	{"DIALOG", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$IconSize;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$IconSize, DIALOG)},
	{"$VALUES", "[Lcom/sun/java/swing/plaf/gtk/GTKConstants$IconSize;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKConstants$IconSize, $VALUES)},
	{}
};

$MethodInfo _GTKConstants$IconSize_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$IconSize;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$GTKConstants$IconSizeArray*(*)()>(&GTKConstants$IconSize::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(GTKConstants$IconSize::*)($String*,int32_t)>(&GTKConstants$IconSize::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/gtk/GTKConstants$IconSize;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GTKConstants$IconSize*(*)($String*)>(&GTKConstants$IconSize::valueOf))},
	{"values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$IconSize;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GTKConstants$IconSizeArray*(*)()>(&GTKConstants$IconSize::values))},
	{}
};

$InnerClassInfo _GTKConstants$IconSize_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKConstants$IconSize", "com.sun.java.swing.plaf.gtk.GTKConstants", "IconSize", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GTKConstants$IconSize_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.java.swing.plaf.gtk.GTKConstants$IconSize",
	"java.lang.Enum",
	nullptr,
	_GTKConstants$IconSize_FieldInfo_,
	_GTKConstants$IconSize_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/java/swing/plaf/gtk/GTKConstants$IconSize;>;",
	nullptr,
	_GTKConstants$IconSize_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKConstants"
};

$Object* allocate$GTKConstants$IconSize($Class* clazz) {
	return $of($alloc(GTKConstants$IconSize));
}

GTKConstants$IconSize* GTKConstants$IconSize::INVALID = nullptr;
GTKConstants$IconSize* GTKConstants$IconSize::MENU = nullptr;
GTKConstants$IconSize* GTKConstants$IconSize::SMALL_TOOLBAR = nullptr;
GTKConstants$IconSize* GTKConstants$IconSize::LARGE_TOOLBAR = nullptr;
GTKConstants$IconSize* GTKConstants$IconSize::BUTTON = nullptr;
GTKConstants$IconSize* GTKConstants$IconSize::DND = nullptr;
GTKConstants$IconSize* GTKConstants$IconSize::DIALOG = nullptr;
$GTKConstants$IconSizeArray* GTKConstants$IconSize::$VALUES = nullptr;

$GTKConstants$IconSizeArray* GTKConstants$IconSize::$values() {
	$init(GTKConstants$IconSize);
	return $new($GTKConstants$IconSizeArray, {
		GTKConstants$IconSize::INVALID,
		GTKConstants$IconSize::MENU,
		GTKConstants$IconSize::SMALL_TOOLBAR,
		GTKConstants$IconSize::LARGE_TOOLBAR,
		GTKConstants$IconSize::BUTTON,
		GTKConstants$IconSize::DND,
		GTKConstants$IconSize::DIALOG
	});
}

$GTKConstants$IconSizeArray* GTKConstants$IconSize::values() {
	$init(GTKConstants$IconSize);
	return $cast($GTKConstants$IconSizeArray, GTKConstants$IconSize::$VALUES->clone());
}

GTKConstants$IconSize* GTKConstants$IconSize::valueOf($String* name) {
	$init(GTKConstants$IconSize);
	return $cast(GTKConstants$IconSize, $Enum::valueOf(GTKConstants$IconSize::class$, name));
}

void GTKConstants$IconSize::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$GTKConstants$IconSize($Class* class$) {
	$assignStatic(GTKConstants$IconSize::INVALID, $new(GTKConstants$IconSize, "INVALID"_s, 0));
	$assignStatic(GTKConstants$IconSize::MENU, $new(GTKConstants$IconSize, "MENU"_s, 1));
	$assignStatic(GTKConstants$IconSize::SMALL_TOOLBAR, $new(GTKConstants$IconSize, "SMALL_TOOLBAR"_s, 2));
	$assignStatic(GTKConstants$IconSize::LARGE_TOOLBAR, $new(GTKConstants$IconSize, "LARGE_TOOLBAR"_s, 3));
	$assignStatic(GTKConstants$IconSize::BUTTON, $new(GTKConstants$IconSize, "BUTTON"_s, 4));
	$assignStatic(GTKConstants$IconSize::DND, $new(GTKConstants$IconSize, "DND"_s, 5));
	$assignStatic(GTKConstants$IconSize::DIALOG, $new(GTKConstants$IconSize, "DIALOG"_s, 6));
	$assignStatic(GTKConstants$IconSize::$VALUES, GTKConstants$IconSize::$values());
}

GTKConstants$IconSize::GTKConstants$IconSize() {
}

$Class* GTKConstants$IconSize::load$($String* name, bool initialize) {
	$loadClass(GTKConstants$IconSize, name, initialize, &_GTKConstants$IconSize_ClassInfo_, clinit$GTKConstants$IconSize, allocate$GTKConstants$IconSize);
	return class$;
}

$Class* GTKConstants$IconSize::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com