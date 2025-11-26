#include <sun/awt/UNIXToolkit$GtkVersions$Constants.h>

#include <sun/awt/UNIXToolkit$GtkVersions.h>
#include <jcpp.h>

#undef GTK2_MAJOR_NUMBER
#undef GTK3_MAJOR_NUMBER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UNIXToolkit$GtkVersions = ::sun::awt::UNIXToolkit$GtkVersions;

namespace sun {
	namespace awt {

$FieldInfo _UNIXToolkit$GtkVersions$Constants_FieldInfo_[] = {
	{"GTK2_MAJOR_NUMBER", "I", nullptr, $STATIC | $FINAL, $constField(UNIXToolkit$GtkVersions$Constants, GTK2_MAJOR_NUMBER)},
	{"GTK3_MAJOR_NUMBER", "I", nullptr, $STATIC | $FINAL, $constField(UNIXToolkit$GtkVersions$Constants, GTK3_MAJOR_NUMBER)},
	{}
};

$MethodInfo _UNIXToolkit$GtkVersions$Constants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(UNIXToolkit$GtkVersions$Constants::*)()>(&UNIXToolkit$GtkVersions$Constants::init$))},
	{}
};

$InnerClassInfo _UNIXToolkit$GtkVersions$Constants_InnerClassesInfo_[] = {
	{"sun.awt.UNIXToolkit$GtkVersions", "sun.awt.UNIXToolkit", "GtkVersions", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"sun.awt.UNIXToolkit$GtkVersions$Constants", "sun.awt.UNIXToolkit$GtkVersions", "Constants", $STATIC},
	{}
};

$ClassInfo _UNIXToolkit$GtkVersions$Constants_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.UNIXToolkit$GtkVersions$Constants",
	"java.lang.Object",
	nullptr,
	_UNIXToolkit$GtkVersions$Constants_FieldInfo_,
	_UNIXToolkit$GtkVersions$Constants_MethodInfo_,
	nullptr,
	nullptr,
	_UNIXToolkit$GtkVersions$Constants_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.UNIXToolkit"
};

$Object* allocate$UNIXToolkit$GtkVersions$Constants($Class* clazz) {
	return $of($alloc(UNIXToolkit$GtkVersions$Constants));
}

void UNIXToolkit$GtkVersions$Constants::init$() {
}

UNIXToolkit$GtkVersions$Constants::UNIXToolkit$GtkVersions$Constants() {
}

$Class* UNIXToolkit$GtkVersions$Constants::load$($String* name, bool initialize) {
	$loadClass(UNIXToolkit$GtkVersions$Constants, name, initialize, &_UNIXToolkit$GtkVersions$Constants_ClassInfo_, allocate$UNIXToolkit$GtkVersions$Constants);
	return class$;
}

$Class* UNIXToolkit$GtkVersions$Constants::class$ = nullptr;

	} // awt
} // sun