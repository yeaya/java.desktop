#include <sun/awt/datatransfer/DataTransferer$2.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/util/Map.h>
#include <java/util/Stack.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <sun/awt/datatransfer/ToolkitThreadBlockedHandler.h>
#include <jcpp.h>

using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $Stack = ::java::util::Stack;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;
using $ToolkitThreadBlockedHandler = ::sun::awt::datatransfer::ToolkitThreadBlockedHandler;

namespace sun {
	namespace awt {
		namespace datatransfer {

$FieldInfo _DataTransferer$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/datatransfer/DataTransferer;", nullptr, $FINAL | $SYNTHETIC, $field(DataTransferer$2, this$0)},
	{"val$stack", "Ljava/util/Stack;", nullptr, $FINAL | $SYNTHETIC, $field(DataTransferer$2, val$stack)},
	{"val$contents", "Ljava/awt/datatransfer/Transferable;", nullptr, $FINAL | $SYNTHETIC, $field(DataTransferer$2, val$contents)},
	{"val$format", "J", nullptr, $FINAL | $SYNTHETIC, $field(DataTransferer$2, val$format)},
	{"val$formatMap", "Ljava/util/Map;", nullptr, $FINAL | $SYNTHETIC, $field(DataTransferer$2, val$formatMap)},
	{"done", "Z", nullptr, $PRIVATE, $field(DataTransferer$2, done)},
	{}
};

$MethodInfo _DataTransferer$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/datatransfer/DataTransferer;Ljava/util/Map;JLjava/awt/datatransfer/Transferable;Ljava/util/Stack;)V", "()V", 0, $method(static_cast<void(DataTransferer$2::*)($DataTransferer*,$Map*,int64_t,$Transferable*,$Stack*)>(&DataTransferer$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DataTransferer$2_EnclosingMethodInfo_ = {
	"sun.awt.datatransfer.DataTransferer",
	"convertData",
	"(Ljava/lang/Object;Ljava/awt/datatransfer/Transferable;JLjava/util/Map;Z)[B"
};

$InnerClassInfo _DataTransferer$2_InnerClassesInfo_[] = {
	{"sun.awt.datatransfer.DataTransferer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DataTransferer$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.datatransfer.DataTransferer$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_DataTransferer$2_FieldInfo_,
	_DataTransferer$2_MethodInfo_,
	nullptr,
	&_DataTransferer$2_EnclosingMethodInfo_,
	_DataTransferer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.datatransfer.DataTransferer"
};

$Object* allocate$DataTransferer$2($Class* clazz) {
	return $of($alloc(DataTransferer$2));
}

void DataTransferer$2::init$($DataTransferer* this$0, $Map* val$formatMap, int64_t val$format, $Transferable* val$contents, $Stack* val$stack) {
	$set(this, this$0, this$0);
	$set(this, val$formatMap, val$formatMap);
	this->val$format = val$format;
	$set(this, val$contents, val$contents);
	$set(this, val$stack, val$stack);
	this->done = false;
}

void DataTransferer$2::run() {
	$useLocalCurrentObjectStackCache();
	if (this->done) {
		return;
	}
	$var($bytes, data, nullptr);
	try {
		$var($DataFlavor, flavor, $cast($DataFlavor, $nc(this->val$formatMap)->get($($Long::valueOf(this->val$format)))));
		if (flavor != nullptr) {
			$assign(data, this->this$0->translateTransferable(this->val$contents, flavor, this->val$format));
		}
	} catch ($Exception& e) {
		e->printStackTrace();
		$assign(data, nullptr);
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc($(this->this$0->getToolkitThreadBlockedHandler()))->lock();
			$nc(this->val$stack)->push(data);
			$nc($(this->this$0->getToolkitThreadBlockedHandler()))->exit();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($(this->this$0->getToolkitThreadBlockedHandler()))->unlock();
			this->done = true;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

DataTransferer$2::DataTransferer$2() {
}

$Class* DataTransferer$2::load$($String* name, bool initialize) {
	$loadClass(DataTransferer$2, name, initialize, &_DataTransferer$2_ClassInfo_, allocate$DataTransferer$2);
	return class$;
}

$Class* DataTransferer$2::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun