#include <sun/awt/datatransfer/ClipboardTransferable.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/FlavorTable.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <sun/awt/datatransfer/ClipboardTransferable$DataFactory.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <sun/awt/datatransfer/SunClipboard.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $FlavorTable = ::java::awt::datatransfer::FlavorTable;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $ClipboardTransferable$DataFactory = ::sun::awt::datatransfer::ClipboardTransferable$DataFactory;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;
using $SunClipboard = ::sun::awt::datatransfer::SunClipboard;

namespace sun {
	namespace awt {
		namespace datatransfer {

class ClipboardTransferable$$Lambda$lambda$new$0 : public $Consumer {
	$class(ClipboardTransferable$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(ClipboardTransferable* inst, $SunClipboard* clipboard, $Map* cached_data) {
		$set(this, inst$, inst);
		$set(this, clipboard, clipboard);
		$set(this, cached_data, cached_data);
	}
	virtual void accept(Object$* entry) override {
		$nc(inst$)->lambda$new$0(clipboard, cached_data, $cast($Map$Entry, entry));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClipboardTransferable$$Lambda$lambda$new$0>());
	}
	ClipboardTransferable* inst$ = nullptr;
	$SunClipboard* clipboard = nullptr;
	$Map* cached_data = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClipboardTransferable$$Lambda$lambda$new$0::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClipboardTransferable$$Lambda$lambda$new$0, inst$)},
	{"clipboard", "Lsun/awt/datatransfer/SunClipboard;", nullptr, $PUBLIC, $field(ClipboardTransferable$$Lambda$lambda$new$0, clipboard)},
	{"cached_data", "Ljava/util/Map;", nullptr, $PUBLIC, $field(ClipboardTransferable$$Lambda$lambda$new$0, cached_data)},
	{}
};
$MethodInfo ClipboardTransferable$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(Lsun/awt/datatransfer/ClipboardTransferable;Lsun/awt/datatransfer/SunClipboard;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(static_cast<void(ClipboardTransferable$$Lambda$lambda$new$0::*)(ClipboardTransferable*,$SunClipboard*,$Map*)>(&ClipboardTransferable$$Lambda$lambda$new$0::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClipboardTransferable$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.datatransfer.ClipboardTransferable$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* ClipboardTransferable$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(ClipboardTransferable$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClipboardTransferable$$Lambda$lambda$new$0::class$ = nullptr;

$FieldInfo _ClipboardTransferable_FieldInfo_[] = {
	{"flavorsToData", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/datatransfer/DataFlavor;Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(ClipboardTransferable, flavorsToData)},
	{"flavors", "[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PRIVATE, $field(ClipboardTransferable, flavors)},
	{}
};

$MethodInfo _ClipboardTransferable_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/datatransfer/SunClipboard;)V", nullptr, $PUBLIC, $method(static_cast<void(ClipboardTransferable::*)($SunClipboard*)>(&ClipboardTransferable::init$))},
	{"fetchOneFlavor", "(Lsun/awt/datatransfer/SunClipboard;Ljava/awt/datatransfer/DataFlavor;JLjava/util/Map;)Z", "(Lsun/awt/datatransfer/SunClipboard;Ljava/awt/datatransfer/DataFlavor;JLjava/util/Map<Ljava/lang/Long;Ljava/lang/Object;>;)Z", $PRIVATE, $method(static_cast<bool(ClipboardTransferable::*)($SunClipboard*,$DataFlavor*,int64_t,$Map*)>(&ClipboardTransferable::fetchOneFlavor))},
	{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.awt.datatransfer.UnsupportedFlavorException,java.io.IOException"},
	{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC},
	{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC},
	{"lambda$new$0", "(Lsun/awt/datatransfer/SunClipboard;Ljava/util/Map;Ljava/util/Map$Entry;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(ClipboardTransferable::*)($SunClipboard*,$Map*,$Map$Entry*)>(&ClipboardTransferable::lambda$new$0))},
	{}
};

$InnerClassInfo _ClipboardTransferable_InnerClassesInfo_[] = {
	{"sun.awt.datatransfer.ClipboardTransferable$DataFactory", "sun.awt.datatransfer.ClipboardTransferable", "DataFactory", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _ClipboardTransferable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.datatransfer.ClipboardTransferable",
	"java.lang.Object",
	"java.awt.datatransfer.Transferable",
	_ClipboardTransferable_FieldInfo_,
	_ClipboardTransferable_MethodInfo_,
	nullptr,
	nullptr,
	_ClipboardTransferable_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.datatransfer.ClipboardTransferable$DataFactory"
};

$Object* allocate$ClipboardTransferable($Class* clazz) {
	return $of($alloc(ClipboardTransferable));
}

void ClipboardTransferable::init$($SunClipboard* clipboard) {
	$useLocalCurrentObjectStackCache();
	$set(this, flavorsToData, $new($HashMap));
	$set(this, flavors, $new($DataFlavorArray, 0));
	$nc(clipboard)->openClipboard(nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($longs, formats, clipboard->getClipboardFormats());
			if (formats != nullptr && formats->length > 0) {
				$var($Map, cached_data, $new($HashMap, formats->length, 1.0f));
				$nc($($nc($($nc($($DataTransferer::getInstance()))->getFlavorsForFormats(formats, $($SunClipboard::getDefaultFlavorTable()))))->entrySet()))->forEach(static_cast<$Consumer*>($$new(ClipboardTransferable$$Lambda$lambda$new$0, this, clipboard, cached_data)));
				$set(this, flavors, $DataTransferer::setToSortedDataFlavorArray($($nc(this->flavorsToData)->keySet())));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			clipboard->closeClipboard();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool ClipboardTransferable::fetchOneFlavor($SunClipboard* clipboard, $DataFlavor* flavor, int64_t format, $Map* cached_data) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->flavorsToData)->containsKey(flavor)) {
		$var($Object, data, nullptr);
		if (!$nc(cached_data)->containsKey($($Long::valueOf(format)))) {
			try {
				$assign(data, $nc(clipboard)->getClipboardData(format));
			} catch ($IOException& e) {
				$assign(data, e);
			} catch ($Throwable& e) {
				e->printStackTrace();
			}
			cached_data->put($($Long::valueOf(format)), data);
		} else {
			$assign(data, cached_data->get($($Long::valueOf(format))));
		}
		if ($instanceOf($IOException, data)) {
			$nc(this->flavorsToData)->put(flavor, data);
			return false;
		} else if (data != nullptr) {
			$nc(this->flavorsToData)->put(flavor, $$new($ClipboardTransferable$DataFactory, this, format, $cast($bytes, data)));
			return true;
		}
	}
	return false;
}

$DataFlavorArray* ClipboardTransferable::getTransferDataFlavors() {
	return $cast($DataFlavorArray, $nc(this->flavors)->clone());
}

bool ClipboardTransferable::isDataFlavorSupported($DataFlavor* flavor) {
	return $nc(this->flavorsToData)->containsKey(flavor);
}

$Object* ClipboardTransferable::getTransferData($DataFlavor* flavor) {
	$useLocalCurrentObjectStackCache();
	if (!isDataFlavorSupported(flavor)) {
		$throwNew($UnsupportedFlavorException, flavor);
	}
	$var($Object, ret, $nc(this->flavorsToData)->get(flavor));
	if ($instanceOf($IOException, ret)) {
		$throwNew($IOException, "Exception fetching data: "_s, $cast($IOException, ret));
	} else if ($instanceOf($ClipboardTransferable$DataFactory, ret)) {
		$var($ClipboardTransferable$DataFactory, factory, $cast($ClipboardTransferable$DataFactory, ret));
		$assign(ret, $nc(factory)->getTransferData(flavor));
	}
	return $of(ret);
}

void ClipboardTransferable::lambda$new$0($SunClipboard* clipboard, $Map* cached_data, $Map$Entry* entry) {
	$useLocalCurrentObjectStackCache();
	$var($SunClipboard, var$0, clipboard);
	$var($DataFlavor, var$1, $cast($DataFlavor, $nc(entry)->getKey()));
	fetchOneFlavor(var$0, var$1, $nc(($cast($Long, $(entry->getValue()))))->longValue(), cached_data);
}

ClipboardTransferable::ClipboardTransferable() {
}

$Class* ClipboardTransferable::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ClipboardTransferable$$Lambda$lambda$new$0::classInfo$.name)) {
			return ClipboardTransferable$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$loadClass(ClipboardTransferable, name, initialize, &_ClipboardTransferable_ClassInfo_, allocate$ClipboardTransferable);
	return class$;
}

$Class* ClipboardTransferable::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun