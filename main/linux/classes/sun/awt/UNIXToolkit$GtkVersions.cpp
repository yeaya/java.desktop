#include <sun/awt/UNIXToolkit$GtkVersions.h>

#include <java/lang/Enum.h>
#include <sun/awt/UNIXToolkit$GtkVersions$Constants.h>
#include <sun/awt/UNIXToolkit.h>
#include <jcpp.h>

#undef ANY
#undef GTK2
#undef GTK2_MAJOR_NUMBER
#undef GTK3
#undef GTK3_MAJOR_NUMBER

using $UNIXToolkit$GtkVersionsArray = $Array<::sun::awt::UNIXToolkit$GtkVersions>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UNIXToolkit = ::sun::awt::UNIXToolkit;
using $UNIXToolkit$GtkVersions$Constants = ::sun::awt::UNIXToolkit$GtkVersions$Constants;

namespace sun {
	namespace awt {

$FieldInfo _UNIXToolkit$GtkVersions_FieldInfo_[] = {
	{"ANY", "Lsun/awt/UNIXToolkit$GtkVersions;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UNIXToolkit$GtkVersions, ANY)},
	{"GTK2", "Lsun/awt/UNIXToolkit$GtkVersions;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UNIXToolkit$GtkVersions, GTK2)},
	{"GTK3", "Lsun/awt/UNIXToolkit$GtkVersions;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UNIXToolkit$GtkVersions, GTK3)},
	{"$VALUES", "[Lsun/awt/UNIXToolkit$GtkVersions;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(UNIXToolkit$GtkVersions, $VALUES)},
	{"number", "I", nullptr, $FINAL, $field(UNIXToolkit$GtkVersions, number)},
	{}
};

$MethodInfo _UNIXToolkit$GtkVersions_MethodInfo_[] = {
	{"$values", "()[Lsun/awt/UNIXToolkit$GtkVersions;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$UNIXToolkit$GtkVersionsArray*(*)()>(&UNIXToolkit$GtkVersions::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(UNIXToolkit$GtkVersions::*)($String*,int32_t,int32_t)>(&UNIXToolkit$GtkVersions::init$))},
	{"getNumber", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(UNIXToolkit$GtkVersions::*)()>(&UNIXToolkit$GtkVersions::getNumber))},
	{"getVersion", "(I)Lsun/awt/UNIXToolkit$GtkVersions;", nullptr, $PUBLIC | $STATIC, $method(static_cast<UNIXToolkit$GtkVersions*(*)(int32_t)>(&UNIXToolkit$GtkVersions::getVersion))},
	{"valueOf", "(Ljava/lang/String;)Lsun/awt/UNIXToolkit$GtkVersions;", nullptr, $PUBLIC | $STATIC, $method(static_cast<UNIXToolkit$GtkVersions*(*)($String*)>(&UNIXToolkit$GtkVersions::valueOf))},
	{"values", "()[Lsun/awt/UNIXToolkit$GtkVersions;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$UNIXToolkit$GtkVersionsArray*(*)()>(&UNIXToolkit$GtkVersions::values))},
	{}
};

$InnerClassInfo _UNIXToolkit$GtkVersions_InnerClassesInfo_[] = {
	{"sun.awt.UNIXToolkit$GtkVersions", "sun.awt.UNIXToolkit", "GtkVersions", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"sun.awt.UNIXToolkit$GtkVersions$Constants", "sun.awt.UNIXToolkit$GtkVersions", "Constants", $STATIC},
	{}
};

$ClassInfo _UNIXToolkit$GtkVersions_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.awt.UNIXToolkit$GtkVersions",
	"java.lang.Enum",
	nullptr,
	_UNIXToolkit$GtkVersions_FieldInfo_,
	_UNIXToolkit$GtkVersions_MethodInfo_,
	"Ljava/lang/Enum<Lsun/awt/UNIXToolkit$GtkVersions;>;",
	nullptr,
	_UNIXToolkit$GtkVersions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.UNIXToolkit"
};

$Object* allocate$UNIXToolkit$GtkVersions($Class* clazz) {
	return $of($alloc(UNIXToolkit$GtkVersions));
}

UNIXToolkit$GtkVersions* UNIXToolkit$GtkVersions::ANY = nullptr;
UNIXToolkit$GtkVersions* UNIXToolkit$GtkVersions::GTK2 = nullptr;
UNIXToolkit$GtkVersions* UNIXToolkit$GtkVersions::GTK3 = nullptr;
$UNIXToolkit$GtkVersionsArray* UNIXToolkit$GtkVersions::$VALUES = nullptr;

$UNIXToolkit$GtkVersionsArray* UNIXToolkit$GtkVersions::$values() {
	$init(UNIXToolkit$GtkVersions);
	return $new($UNIXToolkit$GtkVersionsArray, {
		UNIXToolkit$GtkVersions::ANY,
		UNIXToolkit$GtkVersions::GTK2,
		UNIXToolkit$GtkVersions::GTK3
	});
}

$UNIXToolkit$GtkVersionsArray* UNIXToolkit$GtkVersions::values() {
	$init(UNIXToolkit$GtkVersions);
	return $cast($UNIXToolkit$GtkVersionsArray, UNIXToolkit$GtkVersions::$VALUES->clone());
}

UNIXToolkit$GtkVersions* UNIXToolkit$GtkVersions::valueOf($String* name) {
	$init(UNIXToolkit$GtkVersions);
	return $cast(UNIXToolkit$GtkVersions, $Enum::valueOf(UNIXToolkit$GtkVersions::class$, name));
}

void UNIXToolkit$GtkVersions::init$($String* $enum$name, int32_t $enum$ordinal, int32_t number) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->number = number;
}

UNIXToolkit$GtkVersions* UNIXToolkit$GtkVersions::getVersion(int32_t number) {
	$init(UNIXToolkit$GtkVersions);
	switch (number) {
	case $UNIXToolkit$GtkVersions$Constants::GTK2_MAJOR_NUMBER:
		{
			return UNIXToolkit$GtkVersions::GTK2;
		}
	case $UNIXToolkit$GtkVersions$Constants::GTK3_MAJOR_NUMBER:
		{
			return UNIXToolkit$GtkVersions::GTK3;
		}
	default:
		{
			return UNIXToolkit$GtkVersions::ANY;
		}
	}
}

int32_t UNIXToolkit$GtkVersions::getNumber() {
	return this->number;
}

void clinit$UNIXToolkit$GtkVersions($Class* class$) {
	$assignStatic(UNIXToolkit$GtkVersions::ANY, $new(UNIXToolkit$GtkVersions, "ANY"_s, 0, 0));
	$assignStatic(UNIXToolkit$GtkVersions::GTK2, $new(UNIXToolkit$GtkVersions, "GTK2"_s, 1, $UNIXToolkit$GtkVersions$Constants::GTK2_MAJOR_NUMBER));
	$assignStatic(UNIXToolkit$GtkVersions::GTK3, $new(UNIXToolkit$GtkVersions, "GTK3"_s, 2, $UNIXToolkit$GtkVersions$Constants::GTK3_MAJOR_NUMBER));
	$assignStatic(UNIXToolkit$GtkVersions::$VALUES, UNIXToolkit$GtkVersions::$values());
}

UNIXToolkit$GtkVersions::UNIXToolkit$GtkVersions() {
}

$Class* UNIXToolkit$GtkVersions::load$($String* name, bool initialize) {
	$loadClass(UNIXToolkit$GtkVersions, name, initialize, &_UNIXToolkit$GtkVersions_ClassInfo_, clinit$UNIXToolkit$GtkVersions, allocate$UNIXToolkit$GtkVersions);
	return class$;
}

$Class* UNIXToolkit$GtkVersions::class$ = nullptr;

	} // awt
} // sun