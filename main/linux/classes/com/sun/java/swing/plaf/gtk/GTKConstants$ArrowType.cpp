#include <com/sun/java/swing/plaf/gtk/GTKConstants$ArrowType.h>

#include <com/sun/java/swing/plaf/gtk/GTKConstants.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef DOWN
#undef LEFT
#undef RIGHT
#undef UP

using $GTKConstants$ArrowTypeArray = $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$ArrowType>;
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

$FieldInfo _GTKConstants$ArrowType_FieldInfo_[] = {
	{"UP", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$ArrowType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$ArrowType, UP)},
	{"DOWN", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$ArrowType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$ArrowType, DOWN)},
	{"LEFT", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$ArrowType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$ArrowType, LEFT)},
	{"RIGHT", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$ArrowType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$ArrowType, RIGHT)},
	{"$VALUES", "[Lcom/sun/java/swing/plaf/gtk/GTKConstants$ArrowType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKConstants$ArrowType, $VALUES)},
	{}
};

$MethodInfo _GTKConstants$ArrowType_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$ArrowType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$GTKConstants$ArrowTypeArray*(*)()>(&GTKConstants$ArrowType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(GTKConstants$ArrowType::*)($String*,int32_t)>(&GTKConstants$ArrowType::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/gtk/GTKConstants$ArrowType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GTKConstants$ArrowType*(*)($String*)>(&GTKConstants$ArrowType::valueOf))},
	{"values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$ArrowType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GTKConstants$ArrowTypeArray*(*)()>(&GTKConstants$ArrowType::values))},
	{}
};

$InnerClassInfo _GTKConstants$ArrowType_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKConstants$ArrowType", "com.sun.java.swing.plaf.gtk.GTKConstants", "ArrowType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GTKConstants$ArrowType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.java.swing.plaf.gtk.GTKConstants$ArrowType",
	"java.lang.Enum",
	nullptr,
	_GTKConstants$ArrowType_FieldInfo_,
	_GTKConstants$ArrowType_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/java/swing/plaf/gtk/GTKConstants$ArrowType;>;",
	nullptr,
	_GTKConstants$ArrowType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKConstants"
};

$Object* allocate$GTKConstants$ArrowType($Class* clazz) {
	return $of($alloc(GTKConstants$ArrowType));
}

GTKConstants$ArrowType* GTKConstants$ArrowType::UP = nullptr;
GTKConstants$ArrowType* GTKConstants$ArrowType::DOWN = nullptr;
GTKConstants$ArrowType* GTKConstants$ArrowType::LEFT = nullptr;
GTKConstants$ArrowType* GTKConstants$ArrowType::RIGHT = nullptr;
$GTKConstants$ArrowTypeArray* GTKConstants$ArrowType::$VALUES = nullptr;

$GTKConstants$ArrowTypeArray* GTKConstants$ArrowType::$values() {
	$init(GTKConstants$ArrowType);
	return $new($GTKConstants$ArrowTypeArray, {
		GTKConstants$ArrowType::UP,
		GTKConstants$ArrowType::DOWN,
		GTKConstants$ArrowType::LEFT,
		GTKConstants$ArrowType::RIGHT
	});
}

$GTKConstants$ArrowTypeArray* GTKConstants$ArrowType::values() {
	$init(GTKConstants$ArrowType);
	return $cast($GTKConstants$ArrowTypeArray, GTKConstants$ArrowType::$VALUES->clone());
}

GTKConstants$ArrowType* GTKConstants$ArrowType::valueOf($String* name) {
	$init(GTKConstants$ArrowType);
	return $cast(GTKConstants$ArrowType, $Enum::valueOf(GTKConstants$ArrowType::class$, name));
}

void GTKConstants$ArrowType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$GTKConstants$ArrowType($Class* class$) {
	$assignStatic(GTKConstants$ArrowType::UP, $new(GTKConstants$ArrowType, "UP"_s, 0));
	$assignStatic(GTKConstants$ArrowType::DOWN, $new(GTKConstants$ArrowType, "DOWN"_s, 1));
	$assignStatic(GTKConstants$ArrowType::LEFT, $new(GTKConstants$ArrowType, "LEFT"_s, 2));
	$assignStatic(GTKConstants$ArrowType::RIGHT, $new(GTKConstants$ArrowType, "RIGHT"_s, 3));
	$assignStatic(GTKConstants$ArrowType::$VALUES, GTKConstants$ArrowType::$values());
}

GTKConstants$ArrowType::GTKConstants$ArrowType() {
}

$Class* GTKConstants$ArrowType::load$($String* name, bool initialize) {
	$loadClass(GTKConstants$ArrowType, name, initialize, &_GTKConstants$ArrowType_ClassInfo_, clinit$GTKConstants$ArrowType, allocate$GTKConstants$ArrowType);
	return class$;
}

$Class* GTKConstants$ArrowType::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com