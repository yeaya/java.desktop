#include <com/sun/java/swing/plaf/gtk/GTKConstants$StateType.h>

#include <com/sun/java/swing/plaf/gtk/GTKConstants.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ACTIVE
#undef INSENSITIVE
#undef NORMAL
#undef PRELIGHT
#undef SELECTED

using $GTKConstants$StateTypeArray = $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$StateType>;
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

$FieldInfo _GTKConstants$StateType_FieldInfo_[] = {
	{"NORMAL", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$StateType, NORMAL)},
	{"ACTIVE", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$StateType, ACTIVE)},
	{"PRELIGHT", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$StateType, PRELIGHT)},
	{"SELECTED", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$StateType, SELECTED)},
	{"INSENSITIVE", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$StateType, INSENSITIVE)},
	{"$VALUES", "[Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKConstants$StateType, $VALUES)},
	{}
};

$MethodInfo _GTKConstants$StateType_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$GTKConstants$StateTypeArray*(*)()>(&GTKConstants$StateType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(GTKConstants$StateType::*)($String*,int32_t)>(&GTKConstants$StateType::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GTKConstants$StateType*(*)($String*)>(&GTKConstants$StateType::valueOf))},
	{"values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GTKConstants$StateTypeArray*(*)()>(&GTKConstants$StateType::values))},
	{}
};

$InnerClassInfo _GTKConstants$StateType_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKConstants$StateType", "com.sun.java.swing.plaf.gtk.GTKConstants", "StateType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GTKConstants$StateType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.java.swing.plaf.gtk.GTKConstants$StateType",
	"java.lang.Enum",
	nullptr,
	_GTKConstants$StateType_FieldInfo_,
	_GTKConstants$StateType_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;>;",
	nullptr,
	_GTKConstants$StateType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKConstants"
};

$Object* allocate$GTKConstants$StateType($Class* clazz) {
	return $of($alloc(GTKConstants$StateType));
}

GTKConstants$StateType* GTKConstants$StateType::NORMAL = nullptr;
GTKConstants$StateType* GTKConstants$StateType::ACTIVE = nullptr;
GTKConstants$StateType* GTKConstants$StateType::PRELIGHT = nullptr;
GTKConstants$StateType* GTKConstants$StateType::SELECTED = nullptr;
GTKConstants$StateType* GTKConstants$StateType::INSENSITIVE = nullptr;
$GTKConstants$StateTypeArray* GTKConstants$StateType::$VALUES = nullptr;

$GTKConstants$StateTypeArray* GTKConstants$StateType::$values() {
	$init(GTKConstants$StateType);
	return $new($GTKConstants$StateTypeArray, {
		GTKConstants$StateType::NORMAL,
		GTKConstants$StateType::ACTIVE,
		GTKConstants$StateType::PRELIGHT,
		GTKConstants$StateType::SELECTED,
		GTKConstants$StateType::INSENSITIVE
	});
}

$GTKConstants$StateTypeArray* GTKConstants$StateType::values() {
	$init(GTKConstants$StateType);
	return $cast($GTKConstants$StateTypeArray, GTKConstants$StateType::$VALUES->clone());
}

GTKConstants$StateType* GTKConstants$StateType::valueOf($String* name) {
	$init(GTKConstants$StateType);
	return $cast(GTKConstants$StateType, $Enum::valueOf(GTKConstants$StateType::class$, name));
}

void GTKConstants$StateType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$GTKConstants$StateType($Class* class$) {
	$assignStatic(GTKConstants$StateType::NORMAL, $new(GTKConstants$StateType, "NORMAL"_s, 0));
	$assignStatic(GTKConstants$StateType::ACTIVE, $new(GTKConstants$StateType, "ACTIVE"_s, 1));
	$assignStatic(GTKConstants$StateType::PRELIGHT, $new(GTKConstants$StateType, "PRELIGHT"_s, 2));
	$assignStatic(GTKConstants$StateType::SELECTED, $new(GTKConstants$StateType, "SELECTED"_s, 3));
	$assignStatic(GTKConstants$StateType::INSENSITIVE, $new(GTKConstants$StateType, "INSENSITIVE"_s, 4));
	$assignStatic(GTKConstants$StateType::$VALUES, GTKConstants$StateType::$values());
}

GTKConstants$StateType::GTKConstants$StateType() {
}

$Class* GTKConstants$StateType::load$($String* name, bool initialize) {
	$loadClass(GTKConstants$StateType, name, initialize, &_GTKConstants$StateType_ClassInfo_, clinit$GTKConstants$StateType, allocate$GTKConstants$StateType);
	return class$;
}

$Class* GTKConstants$StateType::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com