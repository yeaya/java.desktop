#include <sun/awt/datatransfer/DataTransferer$1.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/FlavorMap.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $FlavorMap = ::java::awt::datatransfer::FlavorMap;
using $FlavorTable = ::java::awt::datatransfer::FlavorTable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;

namespace sun {
	namespace awt {
		namespace datatransfer {

$FieldInfo _DataTransferer$1_FieldInfo_[] = {
	{"val$map", "Ljava/awt/datatransfer/FlavorMap;", nullptr, $FINAL | $SYNTHETIC, $field(DataTransferer$1, val$map)},
	{}
};

$MethodInfo _DataTransferer$1_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/datatransfer/FlavorMap;)V", "()V", 0, $method(static_cast<void(DataTransferer$1::*)($FlavorMap*)>(&DataTransferer$1::init$))},
	{"getFlavorsForNative", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC},
	{"getFlavorsForNatives", "([Ljava/lang/String;)Ljava/util/Map;", "([Ljava/lang/String;)Ljava/util/Map<Ljava/lang/String;Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC},
	{"getNativesForFlavor", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/List;", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"getNativesForFlavors", "([Ljava/awt/datatransfer/DataFlavor;)Ljava/util/Map;", "([Ljava/awt/datatransfer/DataFlavor;)Ljava/util/Map<Ljava/awt/datatransfer/DataFlavor;Ljava/lang/String;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _DataTransferer$1_EnclosingMethodInfo_ = {
	"sun.awt.datatransfer.DataTransferer",
	"adaptFlavorMap",
	"(Ljava/awt/datatransfer/FlavorMap;)Ljava/awt/datatransfer/FlavorTable;"
};

$InnerClassInfo _DataTransferer$1_InnerClassesInfo_[] = {
	{"sun.awt.datatransfer.DataTransferer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DataTransferer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.datatransfer.DataTransferer$1",
	"java.lang.Object",
	"java.awt.datatransfer.FlavorTable",
	_DataTransferer$1_FieldInfo_,
	_DataTransferer$1_MethodInfo_,
	nullptr,
	&_DataTransferer$1_EnclosingMethodInfo_,
	_DataTransferer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.datatransfer.DataTransferer"
};

$Object* allocate$DataTransferer$1($Class* clazz) {
	return $of($alloc(DataTransferer$1));
}

void DataTransferer$1::init$($FlavorMap* val$map) {
	$set(this, val$map, val$map);
}

$Map* DataTransferer$1::getNativesForFlavors($DataFlavorArray* flavors) {
	return $nc(this->val$map)->getNativesForFlavors(flavors);
}

$Map* DataTransferer$1::getFlavorsForNatives($StringArray* natives) {
	return $nc(this->val$map)->getFlavorsForNatives(natives);
}

$List* DataTransferer$1::getNativesForFlavor($DataFlavor* flav) {
	$var($Map, natives, getNativesForFlavors($$new($DataFlavorArray, {flav})));
	$var($String, nat, $cast($String, $nc(natives)->get(flav)));
	if (nat != nullptr) {
		return $Collections::singletonList(nat);
	} else {
		return $Collections::emptyList();
	}
}

$List* DataTransferer$1::getFlavorsForNative($String* nat) {
	$var($Map, flavors, getFlavorsForNatives($$new($StringArray, {nat})));
	$var($DataFlavor, flavor, $cast($DataFlavor, $nc(flavors)->get(nat)));
	if (flavor != nullptr) {
		return $Collections::singletonList(flavor);
	} else {
		return $Collections::emptyList();
	}
}

DataTransferer$1::DataTransferer$1() {
}

$Class* DataTransferer$1::load$($String* name, bool initialize) {
	$loadClass(DataTransferer$1, name, initialize, &_DataTransferer$1_ClassInfo_, allocate$DataTransferer$1);
	return class$;
}

$Class* DataTransferer$1::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun