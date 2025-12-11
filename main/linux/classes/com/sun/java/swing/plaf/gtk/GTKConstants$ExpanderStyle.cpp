#include <com/sun/java/swing/plaf/gtk/GTKConstants$ExpanderStyle.h>

#include <com/sun/java/swing/plaf/gtk/GTKConstants.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef COLLAPSED
#undef EXPANDED
#undef SEMI_COLLAPSED
#undef SEMI_EXPANDED

using $GTKConstants$ExpanderStyleArray = $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$ExpanderStyle>;
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

$FieldInfo _GTKConstants$ExpanderStyle_FieldInfo_[] = {
	{"COLLAPSED", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$ExpanderStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$ExpanderStyle, COLLAPSED)},
	{"SEMI_COLLAPSED", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$ExpanderStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$ExpanderStyle, SEMI_COLLAPSED)},
	{"SEMI_EXPANDED", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$ExpanderStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$ExpanderStyle, SEMI_EXPANDED)},
	{"EXPANDED", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$ExpanderStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$ExpanderStyle, EXPANDED)},
	{"$VALUES", "[Lcom/sun/java/swing/plaf/gtk/GTKConstants$ExpanderStyle;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKConstants$ExpanderStyle, $VALUES)},
	{}
};

$MethodInfo _GTKConstants$ExpanderStyle_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$ExpanderStyle;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$GTKConstants$ExpanderStyleArray*(*)()>(&GTKConstants$ExpanderStyle::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(GTKConstants$ExpanderStyle::*)($String*,int32_t)>(&GTKConstants$ExpanderStyle::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/gtk/GTKConstants$ExpanderStyle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GTKConstants$ExpanderStyle*(*)($String*)>(&GTKConstants$ExpanderStyle::valueOf))},
	{"values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$ExpanderStyle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GTKConstants$ExpanderStyleArray*(*)()>(&GTKConstants$ExpanderStyle::values))},
	{}
};

$InnerClassInfo _GTKConstants$ExpanderStyle_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKConstants$ExpanderStyle", "com.sun.java.swing.plaf.gtk.GTKConstants", "ExpanderStyle", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GTKConstants$ExpanderStyle_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.java.swing.plaf.gtk.GTKConstants$ExpanderStyle",
	"java.lang.Enum",
	nullptr,
	_GTKConstants$ExpanderStyle_FieldInfo_,
	_GTKConstants$ExpanderStyle_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/java/swing/plaf/gtk/GTKConstants$ExpanderStyle;>;",
	nullptr,
	_GTKConstants$ExpanderStyle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKConstants"
};

$Object* allocate$GTKConstants$ExpanderStyle($Class* clazz) {
	return $of($alloc(GTKConstants$ExpanderStyle));
}

GTKConstants$ExpanderStyle* GTKConstants$ExpanderStyle::COLLAPSED = nullptr;
GTKConstants$ExpanderStyle* GTKConstants$ExpanderStyle::SEMI_COLLAPSED = nullptr;
GTKConstants$ExpanderStyle* GTKConstants$ExpanderStyle::SEMI_EXPANDED = nullptr;
GTKConstants$ExpanderStyle* GTKConstants$ExpanderStyle::EXPANDED = nullptr;
$GTKConstants$ExpanderStyleArray* GTKConstants$ExpanderStyle::$VALUES = nullptr;

$GTKConstants$ExpanderStyleArray* GTKConstants$ExpanderStyle::$values() {
	$init(GTKConstants$ExpanderStyle);
	return $new($GTKConstants$ExpanderStyleArray, {
		GTKConstants$ExpanderStyle::COLLAPSED,
		GTKConstants$ExpanderStyle::SEMI_COLLAPSED,
		GTKConstants$ExpanderStyle::SEMI_EXPANDED,
		GTKConstants$ExpanderStyle::EXPANDED
	});
}

$GTKConstants$ExpanderStyleArray* GTKConstants$ExpanderStyle::values() {
	$init(GTKConstants$ExpanderStyle);
	return $cast($GTKConstants$ExpanderStyleArray, GTKConstants$ExpanderStyle::$VALUES->clone());
}

GTKConstants$ExpanderStyle* GTKConstants$ExpanderStyle::valueOf($String* name) {
	$init(GTKConstants$ExpanderStyle);
	return $cast(GTKConstants$ExpanderStyle, $Enum::valueOf(GTKConstants$ExpanderStyle::class$, name));
}

void GTKConstants$ExpanderStyle::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$GTKConstants$ExpanderStyle($Class* class$) {
	$assignStatic(GTKConstants$ExpanderStyle::COLLAPSED, $new(GTKConstants$ExpanderStyle, "COLLAPSED"_s, 0));
	$assignStatic(GTKConstants$ExpanderStyle::SEMI_COLLAPSED, $new(GTKConstants$ExpanderStyle, "SEMI_COLLAPSED"_s, 1));
	$assignStatic(GTKConstants$ExpanderStyle::SEMI_EXPANDED, $new(GTKConstants$ExpanderStyle, "SEMI_EXPANDED"_s, 2));
	$assignStatic(GTKConstants$ExpanderStyle::EXPANDED, $new(GTKConstants$ExpanderStyle, "EXPANDED"_s, 3));
	$assignStatic(GTKConstants$ExpanderStyle::$VALUES, GTKConstants$ExpanderStyle::$values());
}

GTKConstants$ExpanderStyle::GTKConstants$ExpanderStyle() {
}

$Class* GTKConstants$ExpanderStyle::load$($String* name, bool initialize) {
	$loadClass(GTKConstants$ExpanderStyle, name, initialize, &_GTKConstants$ExpanderStyle_ClassInfo_, clinit$GTKConstants$ExpanderStyle, allocate$GTKConstants$ExpanderStyle);
	return class$;
}

$Class* GTKConstants$ExpanderStyle::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com