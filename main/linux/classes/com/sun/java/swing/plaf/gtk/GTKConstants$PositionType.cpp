#include <com/sun/java/swing/plaf/gtk/GTKConstants$PositionType.h>

#include <com/sun/java/swing/plaf/gtk/GTKConstants.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BOTTOM
#undef LEFT
#undef RIGHT
#undef TOP

using $GTKConstants$PositionTypeArray = $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$PositionType>;
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

$FieldInfo _GTKConstants$PositionType_FieldInfo_[] = {
	{"LEFT", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$PositionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$PositionType, LEFT)},
	{"RIGHT", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$PositionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$PositionType, RIGHT)},
	{"TOP", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$PositionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$PositionType, TOP)},
	{"BOTTOM", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$PositionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$PositionType, BOTTOM)},
	{"$VALUES", "[Lcom/sun/java/swing/plaf/gtk/GTKConstants$PositionType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKConstants$PositionType, $VALUES)},
	{}
};

$MethodInfo _GTKConstants$PositionType_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$PositionType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$GTKConstants$PositionTypeArray*(*)()>(&GTKConstants$PositionType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(GTKConstants$PositionType::*)($String*,int32_t)>(&GTKConstants$PositionType::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/gtk/GTKConstants$PositionType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GTKConstants$PositionType*(*)($String*)>(&GTKConstants$PositionType::valueOf))},
	{"values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$PositionType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GTKConstants$PositionTypeArray*(*)()>(&GTKConstants$PositionType::values))},
	{}
};

$InnerClassInfo _GTKConstants$PositionType_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKConstants$PositionType", "com.sun.java.swing.plaf.gtk.GTKConstants", "PositionType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GTKConstants$PositionType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.java.swing.plaf.gtk.GTKConstants$PositionType",
	"java.lang.Enum",
	nullptr,
	_GTKConstants$PositionType_FieldInfo_,
	_GTKConstants$PositionType_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/java/swing/plaf/gtk/GTKConstants$PositionType;>;",
	nullptr,
	_GTKConstants$PositionType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKConstants"
};

$Object* allocate$GTKConstants$PositionType($Class* clazz) {
	return $of($alloc(GTKConstants$PositionType));
}

GTKConstants$PositionType* GTKConstants$PositionType::LEFT = nullptr;
GTKConstants$PositionType* GTKConstants$PositionType::RIGHT = nullptr;
GTKConstants$PositionType* GTKConstants$PositionType::TOP = nullptr;
GTKConstants$PositionType* GTKConstants$PositionType::BOTTOM = nullptr;
$GTKConstants$PositionTypeArray* GTKConstants$PositionType::$VALUES = nullptr;

$GTKConstants$PositionTypeArray* GTKConstants$PositionType::$values() {
	$init(GTKConstants$PositionType);
	return $new($GTKConstants$PositionTypeArray, {
		GTKConstants$PositionType::LEFT,
		GTKConstants$PositionType::RIGHT,
		GTKConstants$PositionType::TOP,
		GTKConstants$PositionType::BOTTOM
	});
}

$GTKConstants$PositionTypeArray* GTKConstants$PositionType::values() {
	$init(GTKConstants$PositionType);
	return $cast($GTKConstants$PositionTypeArray, GTKConstants$PositionType::$VALUES->clone());
}

GTKConstants$PositionType* GTKConstants$PositionType::valueOf($String* name) {
	$init(GTKConstants$PositionType);
	return $cast(GTKConstants$PositionType, $Enum::valueOf(GTKConstants$PositionType::class$, name));
}

void GTKConstants$PositionType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$GTKConstants$PositionType($Class* class$) {
	$assignStatic(GTKConstants$PositionType::LEFT, $new(GTKConstants$PositionType, "LEFT"_s, 0));
	$assignStatic(GTKConstants$PositionType::RIGHT, $new(GTKConstants$PositionType, "RIGHT"_s, 1));
	$assignStatic(GTKConstants$PositionType::TOP, $new(GTKConstants$PositionType, "TOP"_s, 2));
	$assignStatic(GTKConstants$PositionType::BOTTOM, $new(GTKConstants$PositionType, "BOTTOM"_s, 3));
	$assignStatic(GTKConstants$PositionType::$VALUES, GTKConstants$PositionType::$values());
}

GTKConstants$PositionType::GTKConstants$PositionType() {
}

$Class* GTKConstants$PositionType::load$($String* name, bool initialize) {
	$loadClass(GTKConstants$PositionType, name, initialize, &_GTKConstants$PositionType_ClassInfo_, clinit$GTKConstants$PositionType, allocate$GTKConstants$PositionType);
	return class$;
}

$Class* GTKConstants$PositionType::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com