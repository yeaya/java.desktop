#include <com/sun/java/swing/plaf/gtk/GTKConstants$TextDirection.h>

#include <com/sun/java/swing/plaf/gtk/GTKConstants.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef LTR
#undef NONE
#undef RTL

using $GTKConstants$TextDirectionArray = $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$TextDirection>;
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

$FieldInfo _GTKConstants$TextDirection_FieldInfo_[] = {
	{"NONE", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$TextDirection;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$TextDirection, NONE)},
	{"LTR", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$TextDirection;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$TextDirection, LTR)},
	{"RTL", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$TextDirection;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$TextDirection, RTL)},
	{"$VALUES", "[Lcom/sun/java/swing/plaf/gtk/GTKConstants$TextDirection;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKConstants$TextDirection, $VALUES)},
	{}
};

$MethodInfo _GTKConstants$TextDirection_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$TextDirection;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$GTKConstants$TextDirectionArray*(*)()>(&GTKConstants$TextDirection::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(GTKConstants$TextDirection::*)($String*,int32_t)>(&GTKConstants$TextDirection::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/gtk/GTKConstants$TextDirection;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GTKConstants$TextDirection*(*)($String*)>(&GTKConstants$TextDirection::valueOf))},
	{"values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$TextDirection;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GTKConstants$TextDirectionArray*(*)()>(&GTKConstants$TextDirection::values))},
	{}
};

$InnerClassInfo _GTKConstants$TextDirection_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKConstants$TextDirection", "com.sun.java.swing.plaf.gtk.GTKConstants", "TextDirection", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GTKConstants$TextDirection_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.java.swing.plaf.gtk.GTKConstants$TextDirection",
	"java.lang.Enum",
	nullptr,
	_GTKConstants$TextDirection_FieldInfo_,
	_GTKConstants$TextDirection_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/java/swing/plaf/gtk/GTKConstants$TextDirection;>;",
	nullptr,
	_GTKConstants$TextDirection_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKConstants"
};

$Object* allocate$GTKConstants$TextDirection($Class* clazz) {
	return $of($alloc(GTKConstants$TextDirection));
}

GTKConstants$TextDirection* GTKConstants$TextDirection::NONE = nullptr;
GTKConstants$TextDirection* GTKConstants$TextDirection::LTR = nullptr;
GTKConstants$TextDirection* GTKConstants$TextDirection::RTL = nullptr;
$GTKConstants$TextDirectionArray* GTKConstants$TextDirection::$VALUES = nullptr;

$GTKConstants$TextDirectionArray* GTKConstants$TextDirection::$values() {
	$init(GTKConstants$TextDirection);
	return $new($GTKConstants$TextDirectionArray, {
		GTKConstants$TextDirection::NONE,
		GTKConstants$TextDirection::LTR,
		GTKConstants$TextDirection::RTL
	});
}

$GTKConstants$TextDirectionArray* GTKConstants$TextDirection::values() {
	$init(GTKConstants$TextDirection);
	return $cast($GTKConstants$TextDirectionArray, GTKConstants$TextDirection::$VALUES->clone());
}

GTKConstants$TextDirection* GTKConstants$TextDirection::valueOf($String* name) {
	$init(GTKConstants$TextDirection);
	return $cast(GTKConstants$TextDirection, $Enum::valueOf(GTKConstants$TextDirection::class$, name));
}

void GTKConstants$TextDirection::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$GTKConstants$TextDirection($Class* class$) {
	$assignStatic(GTKConstants$TextDirection::NONE, $new(GTKConstants$TextDirection, "NONE"_s, 0));
	$assignStatic(GTKConstants$TextDirection::LTR, $new(GTKConstants$TextDirection, "LTR"_s, 1));
	$assignStatic(GTKConstants$TextDirection::RTL, $new(GTKConstants$TextDirection, "RTL"_s, 2));
	$assignStatic(GTKConstants$TextDirection::$VALUES, GTKConstants$TextDirection::$values());
}

GTKConstants$TextDirection::GTKConstants$TextDirection() {
}

$Class* GTKConstants$TextDirection::load$($String* name, bool initialize) {
	$loadClass(GTKConstants$TextDirection, name, initialize, &_GTKConstants$TextDirection_ClassInfo_, clinit$GTKConstants$TextDirection, allocate$GTKConstants$TextDirection);
	return class$;
}

$Class* GTKConstants$TextDirection::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com