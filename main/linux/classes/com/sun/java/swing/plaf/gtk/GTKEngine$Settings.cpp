#include <com/sun/java/swing/plaf/gtk/GTKEngine$Settings.h>

#include <com/sun/java/swing/plaf/gtk/GTKEngine.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef GTK_CURSOR_BLINK
#undef GTK_CURSOR_BLINK_TIME
#undef GTK_FONT_NAME
#undef GTK_ICON_SIZES

using $GTKEngine$SettingsArray = $Array<::com::sun::java::swing::plaf::gtk::GTKEngine$Settings>;
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

$FieldInfo _GTKEngine$Settings_FieldInfo_[] = {
	{"GTK_FONT_NAME", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$Settings;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$Settings, GTK_FONT_NAME)},
	{"GTK_ICON_SIZES", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$Settings;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$Settings, GTK_ICON_SIZES)},
	{"GTK_CURSOR_BLINK", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$Settings;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$Settings, GTK_CURSOR_BLINK)},
	{"GTK_CURSOR_BLINK_TIME", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$Settings;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$Settings, GTK_CURSOR_BLINK_TIME)},
	{"$VALUES", "[Lcom/sun/java/swing/plaf/gtk/GTKEngine$Settings;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKEngine$Settings, $VALUES)},
	{}
};

$MethodInfo _GTKEngine$Settings_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/java/swing/plaf/gtk/GTKEngine$Settings;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$GTKEngine$SettingsArray*(*)()>(&GTKEngine$Settings::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(GTKEngine$Settings::*)($String*,int32_t)>(&GTKEngine$Settings::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/gtk/GTKEngine$Settings;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GTKEngine$Settings*(*)($String*)>(&GTKEngine$Settings::valueOf))},
	{"values", "()[Lcom/sun/java/swing/plaf/gtk/GTKEngine$Settings;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GTKEngine$SettingsArray*(*)()>(&GTKEngine$Settings::values))},
	{}
};

$InnerClassInfo _GTKEngine$Settings_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKEngine$Settings", "com.sun.java.swing.plaf.gtk.GTKEngine", "Settings", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GTKEngine$Settings_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.java.swing.plaf.gtk.GTKEngine$Settings",
	"java.lang.Enum",
	nullptr,
	_GTKEngine$Settings_FieldInfo_,
	_GTKEngine$Settings_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/java/swing/plaf/gtk/GTKEngine$Settings;>;",
	nullptr,
	_GTKEngine$Settings_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKEngine"
};

$Object* allocate$GTKEngine$Settings($Class* clazz) {
	return $of($alloc(GTKEngine$Settings));
}

GTKEngine$Settings* GTKEngine$Settings::GTK_FONT_NAME = nullptr;
GTKEngine$Settings* GTKEngine$Settings::GTK_ICON_SIZES = nullptr;
GTKEngine$Settings* GTKEngine$Settings::GTK_CURSOR_BLINK = nullptr;
GTKEngine$Settings* GTKEngine$Settings::GTK_CURSOR_BLINK_TIME = nullptr;
$GTKEngine$SettingsArray* GTKEngine$Settings::$VALUES = nullptr;

$GTKEngine$SettingsArray* GTKEngine$Settings::$values() {
	$init(GTKEngine$Settings);
	return $new($GTKEngine$SettingsArray, {
		GTKEngine$Settings::GTK_FONT_NAME,
		GTKEngine$Settings::GTK_ICON_SIZES,
		GTKEngine$Settings::GTK_CURSOR_BLINK,
		GTKEngine$Settings::GTK_CURSOR_BLINK_TIME
	});
}

$GTKEngine$SettingsArray* GTKEngine$Settings::values() {
	$init(GTKEngine$Settings);
	return $cast($GTKEngine$SettingsArray, GTKEngine$Settings::$VALUES->clone());
}

GTKEngine$Settings* GTKEngine$Settings::valueOf($String* name) {
	$init(GTKEngine$Settings);
	return $cast(GTKEngine$Settings, $Enum::valueOf(GTKEngine$Settings::class$, name));
}

void GTKEngine$Settings::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$GTKEngine$Settings($Class* class$) {
	$assignStatic(GTKEngine$Settings::GTK_FONT_NAME, $new(GTKEngine$Settings, "GTK_FONT_NAME"_s, 0));
	$assignStatic(GTKEngine$Settings::GTK_ICON_SIZES, $new(GTKEngine$Settings, "GTK_ICON_SIZES"_s, 1));
	$assignStatic(GTKEngine$Settings::GTK_CURSOR_BLINK, $new(GTKEngine$Settings, "GTK_CURSOR_BLINK"_s, 2));
	$assignStatic(GTKEngine$Settings::GTK_CURSOR_BLINK_TIME, $new(GTKEngine$Settings, "GTK_CURSOR_BLINK_TIME"_s, 3));
	$assignStatic(GTKEngine$Settings::$VALUES, GTKEngine$Settings::$values());
}

GTKEngine$Settings::GTKEngine$Settings() {
}

$Class* GTKEngine$Settings::load$($String* name, bool initialize) {
	$loadClass(GTKEngine$Settings, name, initialize, &_GTKEngine$Settings_ClassInfo_, clinit$GTKEngine$Settings, allocate$GTKEngine$Settings);
	return class$;
}

$Class* GTKEngine$Settings::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com