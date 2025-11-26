#include <com/sun/java/swing/plaf/gtk/GTKConstants$Orientation.h>

#include <com/sun/java/swing/plaf/gtk/GTKConstants.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef VERTICAL

using $GTKConstants$OrientationArray = $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$Orientation>;
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

$FieldInfo _GTKConstants$Orientation_FieldInfo_[] = {
	{"HORIZONTAL", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$Orientation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$Orientation, HORIZONTAL)},
	{"VERTICAL", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$Orientation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$Orientation, VERTICAL)},
	{"$VALUES", "[Lcom/sun/java/swing/plaf/gtk/GTKConstants$Orientation;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKConstants$Orientation, $VALUES)},
	{}
};

$MethodInfo _GTKConstants$Orientation_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$Orientation;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$GTKConstants$OrientationArray*(*)()>(&GTKConstants$Orientation::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(GTKConstants$Orientation::*)($String*,int32_t)>(&GTKConstants$Orientation::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/gtk/GTKConstants$Orientation;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GTKConstants$Orientation*(*)($String*)>(&GTKConstants$Orientation::valueOf))},
	{"values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$Orientation;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GTKConstants$OrientationArray*(*)()>(&GTKConstants$Orientation::values))},
	{}
};

$InnerClassInfo _GTKConstants$Orientation_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKConstants$Orientation", "com.sun.java.swing.plaf.gtk.GTKConstants", "Orientation", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GTKConstants$Orientation_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.java.swing.plaf.gtk.GTKConstants$Orientation",
	"java.lang.Enum",
	nullptr,
	_GTKConstants$Orientation_FieldInfo_,
	_GTKConstants$Orientation_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/java/swing/plaf/gtk/GTKConstants$Orientation;>;",
	nullptr,
	_GTKConstants$Orientation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKConstants"
};

$Object* allocate$GTKConstants$Orientation($Class* clazz) {
	return $of($alloc(GTKConstants$Orientation));
}

GTKConstants$Orientation* GTKConstants$Orientation::HORIZONTAL = nullptr;
GTKConstants$Orientation* GTKConstants$Orientation::VERTICAL = nullptr;
$GTKConstants$OrientationArray* GTKConstants$Orientation::$VALUES = nullptr;

$GTKConstants$OrientationArray* GTKConstants$Orientation::$values() {
	$init(GTKConstants$Orientation);
	return $new($GTKConstants$OrientationArray, {
		GTKConstants$Orientation::HORIZONTAL,
		GTKConstants$Orientation::VERTICAL
	});
}

$GTKConstants$OrientationArray* GTKConstants$Orientation::values() {
	$init(GTKConstants$Orientation);
	return $cast($GTKConstants$OrientationArray, GTKConstants$Orientation::$VALUES->clone());
}

GTKConstants$Orientation* GTKConstants$Orientation::valueOf($String* name) {
	$init(GTKConstants$Orientation);
	return $cast(GTKConstants$Orientation, $Enum::valueOf(GTKConstants$Orientation::class$, name));
}

void GTKConstants$Orientation::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$GTKConstants$Orientation($Class* class$) {
	$assignStatic(GTKConstants$Orientation::HORIZONTAL, $new(GTKConstants$Orientation, "HORIZONTAL"_s, 0));
	$assignStatic(GTKConstants$Orientation::VERTICAL, $new(GTKConstants$Orientation, "VERTICAL"_s, 1));
	$assignStatic(GTKConstants$Orientation::$VALUES, GTKConstants$Orientation::$values());
}

GTKConstants$Orientation::GTKConstants$Orientation() {
}

$Class* GTKConstants$Orientation::load$($String* name, bool initialize) {
	$loadClass(GTKConstants$Orientation, name, initialize, &_GTKConstants$Orientation_ClassInfo_, clinit$GTKConstants$Orientation, allocate$GTKConstants$Orientation);
	return class$;
}

$Class* GTKConstants$Orientation::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com