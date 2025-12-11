#include <com/sun/java/swing/plaf/gtk/GTKConstants$ShadowType.h>

#include <com/sun/java/swing/plaf/gtk/GTKConstants.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ETCHED_IN
#undef ETCHED_OUT
#undef IN
#undef NONE
#undef OUT

using $GTKConstants$ShadowTypeArray = $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType>;
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

$FieldInfo _GTKConstants$ShadowType_FieldInfo_[] = {
	{"NONE", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$ShadowType, NONE)},
	{"IN", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$ShadowType, IN)},
	{"OUT", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$ShadowType, OUT)},
	{"ETCHED_IN", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$ShadowType, ETCHED_IN)},
	{"ETCHED_OUT", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$ShadowType, ETCHED_OUT)},
	{"$VALUES", "[Lcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKConstants$ShadowType, $VALUES)},
	{}
};

$MethodInfo _GTKConstants$ShadowType_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$GTKConstants$ShadowTypeArray*(*)()>(&GTKConstants$ShadowType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(GTKConstants$ShadowType::*)($String*,int32_t)>(&GTKConstants$ShadowType::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GTKConstants$ShadowType*(*)($String*)>(&GTKConstants$ShadowType::valueOf))},
	{"values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GTKConstants$ShadowTypeArray*(*)()>(&GTKConstants$ShadowType::values))},
	{}
};

$InnerClassInfo _GTKConstants$ShadowType_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKConstants$ShadowType", "com.sun.java.swing.plaf.gtk.GTKConstants", "ShadowType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GTKConstants$ShadowType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.java.swing.plaf.gtk.GTKConstants$ShadowType",
	"java.lang.Enum",
	nullptr,
	_GTKConstants$ShadowType_FieldInfo_,
	_GTKConstants$ShadowType_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;>;",
	nullptr,
	_GTKConstants$ShadowType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKConstants"
};

$Object* allocate$GTKConstants$ShadowType($Class* clazz) {
	return $of($alloc(GTKConstants$ShadowType));
}

GTKConstants$ShadowType* GTKConstants$ShadowType::NONE = nullptr;
GTKConstants$ShadowType* GTKConstants$ShadowType::IN = nullptr;
GTKConstants$ShadowType* GTKConstants$ShadowType::OUT = nullptr;
GTKConstants$ShadowType* GTKConstants$ShadowType::ETCHED_IN = nullptr;
GTKConstants$ShadowType* GTKConstants$ShadowType::ETCHED_OUT = nullptr;
$GTKConstants$ShadowTypeArray* GTKConstants$ShadowType::$VALUES = nullptr;

$GTKConstants$ShadowTypeArray* GTKConstants$ShadowType::$values() {
	$init(GTKConstants$ShadowType);
	return $new($GTKConstants$ShadowTypeArray, {
		GTKConstants$ShadowType::NONE,
		GTKConstants$ShadowType::IN,
		GTKConstants$ShadowType::OUT,
		GTKConstants$ShadowType::ETCHED_IN,
		GTKConstants$ShadowType::ETCHED_OUT
	});
}

$GTKConstants$ShadowTypeArray* GTKConstants$ShadowType::values() {
	$init(GTKConstants$ShadowType);
	return $cast($GTKConstants$ShadowTypeArray, GTKConstants$ShadowType::$VALUES->clone());
}

GTKConstants$ShadowType* GTKConstants$ShadowType::valueOf($String* name) {
	$init(GTKConstants$ShadowType);
	return $cast(GTKConstants$ShadowType, $Enum::valueOf(GTKConstants$ShadowType::class$, name));
}

void GTKConstants$ShadowType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$GTKConstants$ShadowType($Class* class$) {
	$assignStatic(GTKConstants$ShadowType::NONE, $new(GTKConstants$ShadowType, "NONE"_s, 0));
	$assignStatic(GTKConstants$ShadowType::IN, $new(GTKConstants$ShadowType, "IN"_s, 1));
	$assignStatic(GTKConstants$ShadowType::OUT, $new(GTKConstants$ShadowType, "OUT"_s, 2));
	$assignStatic(GTKConstants$ShadowType::ETCHED_IN, $new(GTKConstants$ShadowType, "ETCHED_IN"_s, 3));
	$assignStatic(GTKConstants$ShadowType::ETCHED_OUT, $new(GTKConstants$ShadowType, "ETCHED_OUT"_s, 4));
	$assignStatic(GTKConstants$ShadowType::$VALUES, GTKConstants$ShadowType::$values());
}

GTKConstants$ShadowType::GTKConstants$ShadowType() {
}

$Class* GTKConstants$ShadowType::load$($String* name, bool initialize) {
	$loadClass(GTKConstants$ShadowType, name, initialize, &_GTKConstants$ShadowType_ClassInfo_, clinit$GTKConstants$ShadowType, allocate$GTKConstants$ShadowType);
	return class$;
}

$Class* GTKConstants$ShadowType::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com