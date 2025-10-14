#include <sun/swing/table/DefaultTableCellHeaderRenderer$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SortOrder.h>
#include <sun/swing/table/DefaultTableCellHeaderRenderer.h>
#include <jcpp.h>

#undef ASCENDING
#undef DESCENDING
#undef UNSORTED

using $SortOrderArray = $Array<::javax::swing::SortOrder>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $SortOrder = ::javax::swing::SortOrder;
using $DefaultTableCellHeaderRenderer = ::sun::swing::table::DefaultTableCellHeaderRenderer;

namespace sun {
	namespace swing {
		namespace table {

$FieldInfo _DefaultTableCellHeaderRenderer$1_FieldInfo_[] = {
	{"$SwitchMap$javax$swing$SortOrder", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DefaultTableCellHeaderRenderer$1, $SwitchMap$javax$swing$SortOrder)},
	{}
};

$EnclosingMethodInfo _DefaultTableCellHeaderRenderer$1_EnclosingMethodInfo_ = {
	"sun.swing.table.DefaultTableCellHeaderRenderer",
	nullptr,
	nullptr
};

$InnerClassInfo _DefaultTableCellHeaderRenderer$1_InnerClassesInfo_[] = {
	{"sun.swing.table.DefaultTableCellHeaderRenderer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _DefaultTableCellHeaderRenderer$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.swing.table.DefaultTableCellHeaderRenderer$1",
	"java.lang.Object",
	nullptr,
	_DefaultTableCellHeaderRenderer$1_FieldInfo_,
	nullptr,
	nullptr,
	&_DefaultTableCellHeaderRenderer$1_EnclosingMethodInfo_,
	_DefaultTableCellHeaderRenderer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.table.DefaultTableCellHeaderRenderer"
};

$Object* allocate$DefaultTableCellHeaderRenderer$1($Class* clazz) {
	return $of($alloc(DefaultTableCellHeaderRenderer$1));
}

$ints* DefaultTableCellHeaderRenderer$1::$SwitchMap$javax$swing$SortOrder = nullptr;

void clinit$DefaultTableCellHeaderRenderer$1($Class* class$) {
	$assignStatic(DefaultTableCellHeaderRenderer$1::$SwitchMap$javax$swing$SortOrder, $new($ints, $($SortOrder::values())->length));
	{
		try {
			$nc(DefaultTableCellHeaderRenderer$1::$SwitchMap$javax$swing$SortOrder)->set($SortOrder::ASCENDING->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DefaultTableCellHeaderRenderer$1::$SwitchMap$javax$swing$SortOrder)->set($SortOrder::DESCENDING->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DefaultTableCellHeaderRenderer$1::$SwitchMap$javax$swing$SortOrder)->set($SortOrder::UNSORTED->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

DefaultTableCellHeaderRenderer$1::DefaultTableCellHeaderRenderer$1() {
}

$Class* DefaultTableCellHeaderRenderer$1::load$($String* name, bool initialize) {
	$loadClass(DefaultTableCellHeaderRenderer$1, name, initialize, &_DefaultTableCellHeaderRenderer$1_ClassInfo_, clinit$DefaultTableCellHeaderRenderer$1, allocate$DefaultTableCellHeaderRenderer$1);
	return class$;
}

$Class* DefaultTableCellHeaderRenderer$1::class$ = nullptr;

		} // table
	} // swing
} // sun