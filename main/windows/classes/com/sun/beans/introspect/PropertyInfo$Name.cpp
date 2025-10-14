#include <com/sun/beans/introspect/PropertyInfo$Name.h>

#include <com/sun/beans/introspect/PropertyInfo.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PropertyInfo$NameArray = $Array<::com::sun::beans::introspect::PropertyInfo$Name>;
using $PropertyInfo = ::com::sun::beans::introspect::PropertyInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {

$FieldInfo _PropertyInfo$Name_FieldInfo_[] = {
	{"bound", "Lcom/sun/beans/introspect/PropertyInfo$Name;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PropertyInfo$Name, bound)},
	{"expert", "Lcom/sun/beans/introspect/PropertyInfo$Name;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PropertyInfo$Name, expert)},
	{"hidden", "Lcom/sun/beans/introspect/PropertyInfo$Name;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PropertyInfo$Name, hidden)},
	{"preferred", "Lcom/sun/beans/introspect/PropertyInfo$Name;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PropertyInfo$Name, preferred)},
	{"required", "Lcom/sun/beans/introspect/PropertyInfo$Name;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PropertyInfo$Name, required)},
	{"visualUpdate", "Lcom/sun/beans/introspect/PropertyInfo$Name;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PropertyInfo$Name, visualUpdate)},
	{"description", "Lcom/sun/beans/introspect/PropertyInfo$Name;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PropertyInfo$Name, description)},
	{"enumerationValues", "Lcom/sun/beans/introspect/PropertyInfo$Name;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PropertyInfo$Name, enumerationValues)},
	{"$VALUES", "[Lcom/sun/beans/introspect/PropertyInfo$Name;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(PropertyInfo$Name, $VALUES)},
	{}
};

$MethodInfo _PropertyInfo$Name_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/beans/introspect/PropertyInfo$Name;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$PropertyInfo$NameArray*(*)()>(&PropertyInfo$Name::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(PropertyInfo$Name::*)($String*,int32_t)>(&PropertyInfo$Name::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/beans/introspect/PropertyInfo$Name;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PropertyInfo$Name*(*)($String*)>(&PropertyInfo$Name::valueOf))},
	{"values", "()[Lcom/sun/beans/introspect/PropertyInfo$Name;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PropertyInfo$NameArray*(*)()>(&PropertyInfo$Name::values))},
	{}
};

$InnerClassInfo _PropertyInfo$Name_InnerClassesInfo_[] = {
	{"com.sun.beans.introspect.PropertyInfo$Name", "com.sun.beans.introspect.PropertyInfo", "Name", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _PropertyInfo$Name_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.beans.introspect.PropertyInfo$Name",
	"java.lang.Enum",
	nullptr,
	_PropertyInfo$Name_FieldInfo_,
	_PropertyInfo$Name_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/beans/introspect/PropertyInfo$Name;>;",
	nullptr,
	_PropertyInfo$Name_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.beans.introspect.PropertyInfo"
};

$Object* allocate$PropertyInfo$Name($Class* clazz) {
	return $of($alloc(PropertyInfo$Name));
}

PropertyInfo$Name* PropertyInfo$Name::bound = nullptr;
PropertyInfo$Name* PropertyInfo$Name::expert = nullptr;
PropertyInfo$Name* PropertyInfo$Name::hidden = nullptr;
PropertyInfo$Name* PropertyInfo$Name::preferred = nullptr;
PropertyInfo$Name* PropertyInfo$Name::required = nullptr;
PropertyInfo$Name* PropertyInfo$Name::visualUpdate = nullptr;
PropertyInfo$Name* PropertyInfo$Name::description = nullptr;
PropertyInfo$Name* PropertyInfo$Name::enumerationValues = nullptr;
$PropertyInfo$NameArray* PropertyInfo$Name::$VALUES = nullptr;

$PropertyInfo$NameArray* PropertyInfo$Name::$values() {
	$init(PropertyInfo$Name);
	return $new($PropertyInfo$NameArray, {
		PropertyInfo$Name::bound,
		PropertyInfo$Name::expert,
		PropertyInfo$Name::hidden,
		PropertyInfo$Name::preferred,
		PropertyInfo$Name::required,
		PropertyInfo$Name::visualUpdate,
		PropertyInfo$Name::description,
		PropertyInfo$Name::enumerationValues
	});
}

$PropertyInfo$NameArray* PropertyInfo$Name::values() {
	$init(PropertyInfo$Name);
	return $cast($PropertyInfo$NameArray, PropertyInfo$Name::$VALUES->clone());
}

PropertyInfo$Name* PropertyInfo$Name::valueOf($String* name) {
	$init(PropertyInfo$Name);
	return $cast(PropertyInfo$Name, $Enum::valueOf(PropertyInfo$Name::class$, name));
}

void PropertyInfo$Name::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$PropertyInfo$Name($Class* class$) {
	$assignStatic(PropertyInfo$Name::bound, $new(PropertyInfo$Name, "bound"_s, 0));
	$assignStatic(PropertyInfo$Name::expert, $new(PropertyInfo$Name, "expert"_s, 1));
	$assignStatic(PropertyInfo$Name::hidden, $new(PropertyInfo$Name, "hidden"_s, 2));
	$assignStatic(PropertyInfo$Name::preferred, $new(PropertyInfo$Name, "preferred"_s, 3));
	$assignStatic(PropertyInfo$Name::required, $new(PropertyInfo$Name, "required"_s, 4));
	$assignStatic(PropertyInfo$Name::visualUpdate, $new(PropertyInfo$Name, "visualUpdate"_s, 5));
	$assignStatic(PropertyInfo$Name::description, $new(PropertyInfo$Name, "description"_s, 6));
	$assignStatic(PropertyInfo$Name::enumerationValues, $new(PropertyInfo$Name, "enumerationValues"_s, 7));
	$assignStatic(PropertyInfo$Name::$VALUES, PropertyInfo$Name::$values());
}

PropertyInfo$Name::PropertyInfo$Name() {
}

$Class* PropertyInfo$Name::load$($String* name, bool initialize) {
	$loadClass(PropertyInfo$Name, name, initialize, &_PropertyInfo$Name_ClassInfo_, clinit$PropertyInfo$Name, allocate$PropertyInfo$Name);
	return class$;
}

$Class* PropertyInfo$Name::class$ = nullptr;

			} // introspect
		} // beans
	} // sun
} // com